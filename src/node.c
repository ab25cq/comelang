#include "common.h"

sNodeTree* gNodes;

int gSizeNodes = 0;
int gUsedNodes = 0;

LLVMContextRef gContext;
LLVMModuleRef  gModule;
LLVMBuilderRef gBuilder;
LLVMDIBuilderRef gDIBuilder;

LLVMValueRef gFunction;
char gFunctionName[VAR_NAME_MAX];

LVALUE* gLLVMStack;
LVALUE* gLLVMStackHead;

LLVMTypeRef create_llvm_type_with_class_name(char* class_name);
sFunction* get_function_from_table(char* name);

LLVMTypeRef create_llvm_type_from_node_type(sNodeType* node_type);

static void clear_right_value_objects(sCompileInfo* info)
{
}
/*
    struct sRightValueObject* 
    struct sRightValueObject* it = info->right_value_objects;
    while(it) {
        struct sRightValueObject* it_next = it->next;
        free(it);
        it = it_next;
    }

    info->right_value_objects = NULL;
*/

void append_object_to_right_values(LLVMValueRef obj, sNodeType* node_type, sCompileInfo* info)
{
    struct sRightValueObject* new_list_item = calloc(1, sizeof(struct sRightValueObject));
    new_list_item->obj = obj;
    new_list_item->node_type = clone_node_type(node_type);
    new_list_item->next = info->right_value_objects;
    new_list_item->freed = FALSE;
    xstrncpy(new_list_item->fun_name, gFunctionName, VAR_NAME_MAX);
    info->right_value_objects = new_list_item;
}

void remove_object_from_right_values(LLVMValueRef obj, sCompileInfo* info)
{
    struct sRightValueObject* it = info->right_value_objects;
    struct sRightValueObject* it_before = NULL;
    while(it) {
        struct sRightValueObject* it_next = it->next;

        if(it->obj == obj) {
            if(it_before == NULL) {
                info->right_value_objects = it_next;
                free(it);
                it_before = NULL;
            }
            else {
                it_before->next = it_next;
                free(it);
            }

            it = it_next;
        }
        else {
            it_before = it;
            it = it_next;
        }
    }
}

void free_right_value_objects(sCompileInfo* info)
{
    struct sRightValueObject* it = info->right_value_objects;

    while(it) {
        struct sRightValueObject* it_next = it->next;
        if(!it->freed) {
            if(strcmp(it->fun_name, gFunctionName) == 0) {
                sNodeType* node_type = clone_node_type(it->node_type);
                
                if(!solve_type(&node_type, info->generics_type, info->num_method_generics_types, info->method_generics_types, info))
                {
                    compile_err_msg(info, "Can't solve type");
                    show_node_type(node_type);
                }

                free_object(node_type, it->obj, FALSE, info);

                it->freed = TRUE;
            }
        }

        it = it_next;
    }
}

BOOL is_right_values(LLVMValueRef obj, sCompileInfo* info)
{
    struct sRightValueObject* it = info->right_value_objects;
    while(it) {
        if(it->obj == obj) {
            return TRUE;
        }
        it = it->next;
    }

    return FALSE;
}

LLVMTypeRef create_llvm_type_with_class_name(char* class_name);
sFunction* get_function_from_table(char* name);

void free_protocol_object(sNodeType* protocol_type, LLVMValueRef protocol_value, sCompileInfo* info)
{
    /// call dynamic finalizer ///
    {
        sCLClass* protocol_class = protocol_type->mClass;
        sNodeType* protocol_type2 = clone_node_type(protocol_type);
        protocol_type2->mPointerNum = 0;
        
        int field_index = 0;
        
        LLVMValueRef indices[5];
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        LLVMValueRef field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMValueRef protocol_obj = LLVMBuildLoad2(gBuilder, create_llvm_type_with_class_name("void*"), field_address, "protocol_obj");
        
        LLVMTypeRef llvm_result_type = create_llvm_type_with_class_name("void");
        
        LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
        llvm_param_types[0] = create_llvm_type_with_class_name("char*");
        int num_params = 1;
        BOOL var_arg = FALSE;
        
        LLVMTypeRef finalizer_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        
        LLVMTypeRef finalizer_type_pointer = LLVMPointerType(finalizer_type, 0);
        
        field_index = 1;
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMValueRef finalizer = LLVMBuildLoad2(gBuilder, finalizer_type_pointer, field_address, "protocol_obj");
        
        LLVMValueRef llvm_fun = finalizer;
    
        char* fun_name = "call_finalizer";
    
        LLVMValueRef llvm_fun2 = LLVMGetNamedFunction(gModule, fun_name);
        
        if(!gNCGC) {
            if(llvm_fun2 == NULL) {
                sNodeType* result_type = create_node_type_with_class_name("void");
        
                int num_params = 2;
            
                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    
                LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
            
                LLVMValueRef fun = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_fun, llvm_type2, "castAK");
                LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, protocol_obj, llvm_type2, "castAK");
                
                llvm_params[0] = fun;
                llvm_params[1] = mem;
            
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
        
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                int num_params2 = 1;
            
                LLVMValueRef llvm_params2[PARAMS_MAX];
                memset(llvm_params2, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
                //char* fun_name2 = "ncfree";
                char* fun_name2 = "igc_decrement_ref_count";
            
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
            
                LLVMValueRef mem2 = LLVMBuildCast(gBuilder, LLVMBitCast, protocol_obj, llvm_type, "castAK");
            
                llvm_params2[0] = mem2;
            
                LLVMValueRef llvm_fun3 = LLVMGetNamedFunction(gModule, fun_name2);
                
                if(llvm_fun3 == NULL) {
                    fprintf(stderr, "require free\n");
                    exit(2);
                }
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun3, llvm_params2, num_params2, "");
            }
            else {
                int num_params = 2;
            
                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    
                LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
            
                LLVMValueRef fun = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_fun, llvm_type2, "castAK");
                LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, protocol_obj, llvm_type2, "castAK");
                
                llvm_params[0] = fun;
                llvm_params[1] = mem;
                
                sNodeType* result_type = create_node_type_with_class_name("void");
        
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
                llvm_param_types[1] = create_llvm_type_with_class_name("char*");
        
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                BOOL var_arg = FALSE;
        
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun2, llvm_params, num_params, "");
            }
        }
    }
    
    {
        sCLClass* protocol_class = protocol_type->mClass;
        sNodeType* protocol_type2 = clone_node_type(protocol_type);
        protocol_type2->mPointerNum = 0;
        
        int field_index = 0;
        
        LLVMValueRef indices[5];
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        LLVMValueRef field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMValueRef protocol_obj = LLVMBuildLoad2(gBuilder, create_llvm_type_with_class_name("void*"), field_address, "protocol_obj");
        
        /// free object ///
        int num_params = 1;
    
        LLVMValueRef llvm_params[PARAMS_MAX];
        memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    
        //char* fun_name2 = "ncfree";
        char* fun_name2 = "igc_decrement_ref_count";
        //char* fun_name2 = "free";
    
        LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
    
        LLVMValueRef obj = LLVMBuildCast(gBuilder, LLVMBitCast, protocol_obj, llvm_type2, "castAK");
    
        llvm_params[0] = obj;
    
        LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name2);
        
        if(llvm_fun == NULL) {
            compile_err_msg(info, "require %s funtion", fun_name2);
            return;
        }
        
        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        llvm_param_types[0] = create_llvm_type_with_class_name("char*");

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
        
        BOOL var_arg = FALSE;

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        
        LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
    }
}

void clone_protocol_object(sNodeType* protocol_type, LLVMValueRef protocol_value, sCompileInfo* info)
{
    /// call dynamic cloner ///
    {
        sCLClass* protocol_class = protocol_type->mClass;
        sNodeType* protocol_type2 = clone_node_type(protocol_type);
        protocol_type2->mPointerNum = 0;
        
        int field_index = 0;
        
        LLVMValueRef indices[5];
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        LLVMValueRef field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMValueRef protocol_obj = LLVMBuildLoad2(gBuilder, create_llvm_type_with_class_name("void*"), field_address, "protocol_obj");
        
        field_index = 2;
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMTypeRef llvm_result_type = create_llvm_type_with_class_name("void*");
        
        LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
        llvm_param_types[0] = create_llvm_type_with_class_name("char*");
        int num_params = 1;
        BOOL var_arg = FALSE;
        
        LLVMTypeRef cloner_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMTypeRef cloner_type_pointer = LLVMPointerType(cloner_type, 0);
        
        LLVMValueRef cloner = LLVMBuildLoad2(gBuilder, cloner_type_pointer, field_address, "cloner");
        
        LLVMValueRef llvm_fun = cloner;
        
        int num_params2 = 2;
    
        LLVMValueRef llvm_params2[PARAMS_MAX];
        memset(llvm_params2, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    
        char* fun_name = "call_cloner";
    
        LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
    
        LLVMValueRef fun = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_fun, llvm_type2, "castAK");
        LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, protocol_obj, llvm_type2, "castAK");
    
        llvm_params2[0] = fun;
        llvm_params2[1] = mem;
    
        LLVMValueRef llvm_fun2 = LLVMGetNamedFunction(gModule, fun_name);
        
        if(llvm_fun2 == NULL) {
            compile_err_msg(info, "require %s funtion", fun_name);
            return;
        }
        
        sNodeType* result_type = create_node_type_with_class_name("char*");

        LLVMTypeRef llvm_param_types2[PARAMS_MAX];

        llvm_param_types2[0] = create_llvm_type_with_class_name("char*");
        llvm_param_types2[1] = create_llvm_type_with_class_name("char*");

        LLVMTypeRef llvm_result_type2 = create_llvm_type_from_node_type(result_type);
        
        BOOL var_arg2 = FALSE;

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type2, llvm_param_types2, num_params2, var_arg2);
        
        LLVMValueRef new_protocol_value = LLVMBuildCall2(gBuilder, function_type, llvm_fun2, llvm_params2, num_params2, "call_cloner_fun_result");
        
        field_index = 0;
        
        indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
        indices[1] = LLVMConstInt(LLVMInt32Type(), field_index, FALSE);
        
        field_address = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(protocol_type2), protocol_value, indices, 2, "fieldQQQQUOX");
        
        LLVMBuildStore(gBuilder, new_protocol_value, field_address);
    }
}

sFunction* create_finalizer_automatically(sNodeType* node_type, char* fun_name, sCompileInfo* info)
{
    sNodeType* come_function_result_type = gComeFunctionResultType;
    
    BOOL in_automatically_created_function = info->in_automatically_created_function;
    info->in_automatically_created_function = TRUE;
    
    sFunction* finalizer = NULL;
    
    sCLClass* klass = node_type->mClass;
    
    if(node_type->mPointerNum > 0 && (klass->mFlags & CLASS_FLAGS_STRUCT)) {
        char* asm_fname = "";
        sParserParam params[PARAMS_MAX];
        xstrncpy(params[0].mName, "self", VAR_NAME_MAX);
        params[0].mType = clone_node_type(node_type);
        params[0].mType->mHeap = FALSE;
        params[0].mType->mPointerNum = 1;
        
        int num_params = 1;
        sNodeType* result_type = create_node_type_with_class_name("void");
        result_type->mStatic = TRUE;
        
        sNodeBlock* node_block = NULL;
        BOOL extern_c_lang = FALSE;
        BOOL result_type_is_void = FALSE;
        
        sBuf source;
        sBuf_init(&source);
        
        sBuf_append_char(&source, '{');
        
        if(klass->mProtocol) {
            char* name = "_protocol_obj";
            char source2[1024];
            snprintf(source2, 1024, "if(self != null && self.%s != null && self.finalize) { void (*finalizer)(void*) = self.finalize; finalizer(self._protocol_obj); igc_decrement_ref_count(self.%s); }\n", name, name);
            //snprintf(source2, 1024, "if(self != null && self.%s != null && self.finalize) { void (*finalizer)(void*) = self.finalize; finalizer(self._protocol_obj); ncfree(self.%s); }\n", name, name);
            
            sBuf_append_str(&source, source2);
        }
        else {
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                char* name = klass->mFieldName[i];
                sNodeType* field_type = klass->mFields[i];
                
                if(type_identify(node_type, field_type) && node_type->mPointerNum == field_type->mPointerNum && field_type->mHeap) {
                    fprintf(stderr, "Defining recusively the finalizer. exited. Define the finalizer mannually or remove %% of the field type from the recursively defined field\n");
                    exit(2);
                }
                
                if(field_type->mHeap) {
                    if(field_type->mNullable) {
                        char source2[1024];
                        snprintf(source2, 1024, "if(self != null && self.%s != null) { delete self.%s!; }\n", name, name);
                        
                        sBuf_append_str(&source, source2);
                    }
                    else {
                        char source2[1024];
                        snprintf(source2, 1024, "if(self != null && self.%s != null) { delete self.%s; }\n", name, name);
                        
                        sBuf_append_str(&source, source2);
                    }
                }
            }
        }
        
        sBuf_append_char(&source, '}');
        
        sParserInfo pinfo;
        memset(&pinfo, 0, sizeof(sParserInfo));
        
        pinfo.p = source.mBuf;
        char* source3 = source.mBuf;
        pinfo.source = &source3;
        snprintf(pinfo.sname, PATH_MAX, "finalize");
        pinfo.sline = 1;
        pinfo.lv_table  = init_block_vtable(NULL, extern_c_lang);
    
        int i;
        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;
    
            BOOL readonly = FALSE;
            (void)add_variable_to_table(pinfo.lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, FALSE);
        }
        
        if(parse_block_easy(&node_block, extern_c_lang, result_type_is_void, TRUE, &pinfo)) {
            BOOL lambda_ = FALSE;
            sVarTable* block_var_table = init_block_vtable(pinfo.lv_table, extern_c_lang);
            char* struct_name = NULL;
            BOOL operator_fun = FALSE;
            BOOL constructor_fun = FALSE;
            BOOL simple_lambda_param = FALSE;
            BOOL generics_function = FALSE;
            BOOL var_arg = FALSE;
            int version = -1;
            BOOL finalize = FALSE;
            int generics_fun_num = 0;
            char* simple_fun_name = "";
            int sline = 0;
            BOOL immutable_ = FALSE;
            
            LLVMBasicBlockRef current_block = info->current_block; //LLVMGetLastBasicBlock(gFunction);
    
            unsigned int node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, node_block, lambda_, block_var_table, struct_name, operator_fun, constructor_fun, simple_lambda_param, &pinfo, generics_function, var_arg, version, finalize, generics_fun_num, simple_fun_name, sline, immutable_);
            
            free(source.mBuf);
            
            if(compile(node, info)) {
                finalizer = get_function_from_table(fun_name);
            }
    
            llvm_change_block(current_block, info);
        }
    }
    
    info->in_automatically_created_function = in_automatically_created_function;
    gComeFunctionResultType = come_function_result_type;
    
    return finalizer;
}

void increment_ref_count(LLVMValueRef obj, sNodeType* node_type, sCompileInfo* info)
{
    int num_params = 1;

    LLVMValueRef llvm_params[PARAMS_MAX];
    memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    
    sNodeType* left_type = create_node_type_with_class_name("void*");
    
    LVALUE llvm_value;
    llvm_value.value = obj;
    llvm_value.type = clone_node_type(node_type);
    llvm_value.type->mUnsigned = TRUE;
    llvm_value.address = NULL;
    llvm_value.var = NULL;
    llvm_value.constant = FALSE;
    llvm_value.constant_str = FALSE;
    
    if(!cast_right_type_to_left_type(left_type, &node_type, &llvm_value, info)) {
        compile_err_msg(info, "this is not memory in increment_ref_count");
        return;
    }
    
    llvm_params[0] = llvm_value.value;
    
    sNodeType* result_type = create_node_type_with_class_name("void");

    LLVMTypeRef llvm_param_types[PARAMS_MAX];

    llvm_param_types[0] = create_llvm_type_with_class_name("void*");

    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

    BOOL var_arg = FALSE;

    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    
    LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, "igc_increment_ref_count");
    LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
}

sFunction* create_equals_automatically(sNodeType* node_type, char* fun_name, sCompileInfo* info)
{
    sNodeType* come_function_result_type = gComeFunctionResultType;
    
    BOOL in_automatically_created_function = info->in_automatically_created_function;
    info->in_automatically_created_function = TRUE;
    
    sFunction* equaler = NULL;
    
    sCLClass* klass = node_type->mClass;
    
    if(node_type->mPointerNum > 0 && (klass->mFlags & CLASS_FLAGS_STRUCT)) {
        char* asm_fname = "";
        sParserParam params[PARAMS_MAX];
        
        xstrncpy(params[0].mName, "left", VAR_NAME_MAX);
        params[0].mType = clone_node_type(node_type);
        params[0].mType->mHeap = FALSE;
        
        xstrncpy(params[1].mName, "right", VAR_NAME_MAX);
        params[1].mType = clone_node_type(node_type);
        params[1].mType->mHeap = FALSE;
        
        int num_params = 2;
        sNodeType* result_type = create_node_type_with_class_name("bool");
        result_type->mStatic = TRUE;
        
        sNodeBlock* node_block = NULL;
        BOOL extern_c_lang = FALSE;
        BOOL result_type_is_void = FALSE;
        
        sBuf source;
        sBuf_init(&source);
        
        sBuf_append_char(&source, '{');
        
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* name = klass->mFieldName[i];
            sNodeType* field_type = klass->mFields[i];
            
            if(type_identify(node_type, field_type)) {
                fprintf(stderr, "Defining recusively the equals. exited. Define the equals mannually %s\n", CLASS_NAME(node_type->mClass));
                exit(2);
            }
            
            char source2[1024];
            if(field_type->mNullable) {
                snprintf(source2, 1024, "if(left != null && right != null && !left!.%s.equals(right!.%s)) { return false; }\n", name, name);
            }
            else {
                snprintf(source2, 1024, "if(left != null && right != null && !left.%s.equals(right.%s)) { return false; }\n", name, name);
            }
            
            sBuf_append_str(&source, source2);
        }
        
        char source2[1024];
        snprintf(source2, 1024, "return true;\n");
        
        sBuf_append_str(&source, source2);
        
        sBuf_append_char(&source, '}');
        
        sParserInfo pinfo;
        memset(&pinfo, 0, sizeof(sParserInfo));
        
        pinfo.p = source.mBuf;
        char* source3 = source.mBuf;
        pinfo.source = &source3;
        snprintf(pinfo.sname, PATH_MAX, "equals");
        pinfo.sline = 1;
        pinfo.lv_table  = init_block_vtable(NULL, extern_c_lang);
    
        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;
    
            BOOL readonly = FALSE;
            (void)add_variable_to_table(pinfo.lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, FALSE);
        }
        
        if(parse_block_easy(&node_block, extern_c_lang, result_type_is_void, TRUE, &pinfo)) {
            BOOL lambda_ = FALSE;
            sVarTable* block_var_table = init_block_vtable(pinfo.lv_table, extern_c_lang);
            char* struct_name = NULL;
            BOOL operator_fun = FALSE;
            BOOL constructor_fun = FALSE;
            BOOL simple_lambda_param = FALSE;
            BOOL generics_function = FALSE;
            BOOL var_arg = FALSE;
            int version = -1;
            BOOL finalize = FALSE;
            int generics_fun_num = 0;
            char* simple_fun_name = "";
            int sline = 0;
            BOOL immutable_ = FALSE;
            
            LLVMBasicBlockRef current_block = info->current_block; //LLVMGetLastBasicBlock(gFunction);
            
            unsigned int node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, node_block, lambda_, block_var_table, struct_name, operator_fun, constructor_fun, simple_lambda_param, &pinfo, generics_function, var_arg, version, finalize, generics_fun_num, simple_fun_name, sline, immutable_);
            
            free(source.mBuf);
            
            if(compile(node, info)) {
                equaler = get_function_from_table(fun_name);
            }
    
            llvm_change_block(current_block, info);
        }
    }
    
    info->in_automatically_created_function = in_automatically_created_function;
    gComeFunctionResultType = come_function_result_type;
    
    return equaler;
}

void check_null_value_for_pointer(LLVMValueRef value, sCompileInfo* info)
{
    if(gNCCome) {
        LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, "check_null_pointer");
        
        if(llvm_fun) {
#if defined(__32BIT_CPU__)
            LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("int");
#else
            LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("long");
#endif
            LLVMValueRef value2 = LLVMBuildCast(gBuilder, LLVMPtrToInt, value, llvm_type2, "castAK2");
            LLVMValueRef null_value = LLVMConstInt(llvm_type2, 0, FALSE);
            LLVMValueRef null_value2 = LLVMBuildCast(gBuilder, LLVMBitCast, null_value, llvm_type2, "castAK2");
            
            LLVMBasicBlockRef cond_end_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_endX");
            LLVMBasicBlockRef cond_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_blockX");
            LLVMValueRef cond_value = LLVMBuildICmp(gBuilder, LLVMIntEQ, value2, null_value2, "nullcheckX");
            
            LLVMBuildCondBr(gBuilder, cond_value, cond_block, cond_end_block);
            
            llvm_change_block(cond_block, info);
        
            int num_params = 2;
    
            LLVMValueRef llvm_params[PARAMS_MAX];
            memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
            llvm_params[0] = LLVMConstInt(llvm_type, info->sline, TRUE);
            
            LLVMTypeRef llvm_type3 = create_llvm_type_with_class_name("char*");
            llvm_params[1] = LLVMBuildPointerCast(gBuilder, LLVMBuildGlobalString(gBuilder, info->sname, info->sname), llvm_type3, "func_name");
            
            sNodeType* result_type = create_node_type_with_class_name("void");

            LLVMTypeRef llvm_param_types[PARAMS_MAX];

            llvm_param_types[0] = create_llvm_type_with_class_name("int");
            llvm_param_types[1] = create_llvm_type_with_class_name("char*");

            LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
        
            BOOL var_arg = FALSE;

            LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
            
            LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
            
            LLVMBuildBr(gBuilder, cond_end_block);
            
            llvm_change_block(cond_end_block, info);
        }
    }
}


void free_object(sNodeType* node_type, LLVMValueRef obj, BOOL force_delete, sCompileInfo* info)
{
    if(!gNCGC && node_type->mPointerNum > 0) {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");

        LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAK2");
#if defined(__32BIT_CPU__)
        LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("int");
#else
        LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("long");
#endif
        LLVMValueRef null_value = LLVMConstInt(llvm_type2, 0, FALSE);
        LLVMValueRef null_value2 = LLVMBuildCast(gBuilder, LLVMBitCast, null_value, llvm_type, "castAK2");
        
        LLVMBasicBlockRef cond_end_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_endY");
        LLVMBasicBlockRef cond_block = LLVMAppendBasicBlockInContext(gContext, gFunction, "cond_blockY");
        LLVMValueRef cond_value = LLVMBuildICmp(gBuilder, LLVMIntEQ, mem, null_value2, "nullcheckY");
        
        LLVMBuildCondBr(gBuilder, cond_value, cond_end_block, cond_block);
        
        llvm_change_block(cond_block, info);
        
        sCLClass* klass = node_type->mClass;

        char class_name[VAR_NAME_MAX];
        xstrncpy(class_name, CLASS_NAME(klass), VAR_NAME_MAX);
        
/*
        int k;
        for(k=0; k<node_type->mPointerNum; k++) {
            xstrncat(class_name, "p", VAR_NAME_MAX);
        }
*/

        char fun_name[VAR_NAME_MAX];
        snprintf(fun_name, VAR_NAME_MAX, "%s_finalize", class_name);

        int i;
        sFunction* finalizer = NULL;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            char new_fun_name[VAR_NAME_MAX];
            snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, i);
            finalizer = get_function_from_table(new_fun_name);
            
            if(finalizer) {
                xstrncpy(fun_name, new_fun_name, VAR_NAME_MAX);
                break;
            }
        }
        
        if(finalizer == NULL) {
            finalizer = get_function_from_table(fun_name);
        }
        
        if(finalizer == NULL && !is_number_class(node_type) && !gExternC && !node_type->mClass->mProtocol)
        //if(finalizer == NULL && !node_type->mClass->mProtocol && !is_number_class(node_type) && node_type->mNumGenericsTypes == 0 && !gExternC)
        {
            finalizer = create_finalizer_automatically(node_type, fun_name, info);
        }

        /// call finalizer ///
        if((node_type->mHeap || node_type->mAllocaValue || force_delete) && finalizer != NULL) {
            if(finalizer->mGenericsFunction) {
                LLVMValueRef llvm_fun = NULL;
                
                BOOL immutable_ = finalizer->mImmutable;
                if(!create_generics_function(&llvm_fun, finalizer, fun_name, node_type, 0, NULL, immutable_, info)) {
                    fprintf(stderr, "can't craete generics finalizer %s\n", fun_name);
                    return;
                }
                
                int num_params = 2;
        
                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
        
                char* fun_name2 = "call_finalizer";
        
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
                LLVMValueRef fun = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_fun, llvm_type, "castAK");
                LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAK");
        
                llvm_params[0] = fun;
                llvm_params[1] = mem;
        
                LLVMValueRef llvm_fun2 = LLVMGetNamedFunction(gModule, fun_name2);
                
                if(llvm_fun2 == NULL) {
                    int num_params2 = 1;
            
                    LLVMValueRef llvm_params2[PARAMS_MAX];
                    memset(llvm_params2, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
                    char* fun_name3 = "igc_decrement_ref_count";
                    //char* fun_name3 = "ncfree";
            
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
            
                    LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAK");
            
                    llvm_params2[0] = mem;
            
                    LLVMValueRef llvm_fun3 = LLVMGetNamedFunction(gModule, fun_name3);
                    
                    if(llvm_fun3 == NULL) {
                        fprintf(stderr, "require free\n");
                        exit(2);
                    }
                    
                    sNodeType* result_type = create_node_type_with_class_name("void");
        
                    LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                    llvm_param_types[0] = create_llvm_type_with_class_name("char*");
        
                    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                    BOOL var_arg = FALSE;
        
                    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                    
                    LLVMBuildCall2(gBuilder, function_type, llvm_fun3, llvm_params2, num_params2, "");
                }
                else {
                    sNodeType* result_type = create_node_type_with_class_name("void");
        
                    LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                    llvm_param_types[0] = create_llvm_type_with_class_name("char*");
                    llvm_param_types[1] = create_llvm_type_with_class_name("char*");
        
                    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                    BOOL var_arg = FALSE;
        
                    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                    
                    LLVMBuildCall2(gBuilder, function_type, llvm_fun2, llvm_params, num_params, "");
                }
            }
            else {
                int num_params = 1;

                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);

                llvm_params[0] = obj;

                LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
                
                if(llvm_fun == NULL) {
                    compile_err_msg(info, "require %s funtion", fun_name);
                    exit(2);
                }
                
                int num_params2 = 2;
        
                LLVMValueRef llvm_params2[PARAMS_MAX];
                memset(llvm_params2, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
        
                char* fun_name2 = "call_finalizer";
        
                LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
        
                LLVMValueRef fun = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_fun, llvm_type2, "castAK");
                LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type2, "castAK");
        
                llvm_params2[0] = fun;
                llvm_params2[1] = mem;
        
                LLVMValueRef llvm_fun2 = LLVMGetNamedFunction(gModule, fun_name2);
                
                if(llvm_fun2 == NULL) {
                    int num_params3 = 1;
            
                    LLVMValueRef llvm_params3[PARAMS_MAX];
                    memset(llvm_params3, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
            
                    char* fun_name3 = "igc_decrement_ref_count";
                    //char* fun_name3 = "ncfree";
            
                    LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");
            
                    LLVMValueRef mem = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type2, "castAK");
            
                    llvm_params3[0] = mem;
            
                    LLVMValueRef llvm_fun3 = LLVMGetNamedFunction(gModule, fun_name3);
                    
                    sNodeType* result_type = create_node_type_with_class_name("void");
        
                    LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                    llvm_param_types[0] = create_llvm_type_with_class_name("char*");
        
                    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                    BOOL var_arg = FALSE;
        
                    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                    
                    LLVMBuildCall2(gBuilder, function_type, llvm_fun3, llvm_params3, num_params3, "");
                }
                else {
                    sNodeType* result_type = create_node_type_with_class_name("void");
        
                    LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
                    llvm_param_types[0] = create_llvm_type_with_class_name("char*");
                    llvm_param_types[1] = create_llvm_type_with_class_name("char*");
        
                    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
                
                    BOOL var_arg = FALSE;
        
                    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                    LLVMBuildCall2(gBuilder, function_type, llvm_fun2, llvm_params2, num_params2, "");
                }
            }
        }
        else {
            /// free memmory ///
            if(force_delete) {
                /// free ///
                int num_params = 1;
        
                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
        
                char* fun_name2 = "ncfree";
                //char* fun_name2 = "igc_decrement_ref_count";
                //char* fun_name2 = "free";
        
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
                obj = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAK");
        
                llvm_params[0] = obj;
        
                LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name2);
                
                if(llvm_fun == NULL) {
                    compile_err_msg(info, "require %s funtion", fun_name2);
                    exit(2);
                }
                
                sNodeType* result_type = create_node_type_with_class_name("void");
    
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
    
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
                BOOL var_arg = FALSE;
    
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
        
                /// remove right value objects from list
                //remove_object_from_right_values(obj, info);
            }
            else if(node_type->mHeap) {
                /// free ///
                int num_params = 1;
        
                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
        
                //char* fun_name2 = "ncfree";
                char* fun_name2 = "igc_decrement_ref_count";
                //char* fun_name2 = "free";
        
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
                obj = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAK");
        
                llvm_params[0] = obj;
        
                LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name2);
                
                if(llvm_fun == NULL) {
                    compile_err_msg(info, "require %s funtion", fun_name2);
                    exit(2);
                }
                
                sNodeType* result_type = create_node_type_with_class_name("void");
    
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
    
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
                BOOL var_arg = FALSE;
    
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
                
                LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "");
        
                /// remove right value objects from list
                //remove_object_from_right_values(obj, info);
            }
        }
        
        if(node_type->mClass->mProtocol && node_type->mPointerNum == 1) {
            //free_protocol_object(obj, info);
        }

        LLVMBuildBr(gBuilder, cond_end_block);
        
        llvm_change_block(cond_end_block, info);
    }
}

sFunction* create_cloner_automatically(sNodeType* node_type, char* fun_name, sCompileInfo* info)
{
    sNodeType* come_function_result_type = gComeFunctionResultType;
    
    BOOL in_automatically_created_function = info->in_automatically_created_function;
    info->in_automatically_created_function = TRUE;
    
    sFunction* cloner = NULL;

    sCLClass* klass = node_type->mClass;
    
    if(node_type->mPointerNum > 0 && (klass->mFlags & CLASS_FLAGS_STRUCT)) {
        char* asm_fname = "";
        sParserParam params[PARAMS_MAX];
        xstrncpy(params[0].mName, "self", VAR_NAME_MAX);
        params[0].mType = clone_node_type(node_type);
        params[0].mType->mHeap = FALSE;
        
        int num_params = 1;
        sNodeType* result_type = clone_node_type(node_type);
        if(!gNCGC) {
            result_type->mHeap = TRUE;
        }
        result_type->mStatic = TRUE;
        
        sNodeBlock* node_block = NULL;
        BOOL extern_c_lang = FALSE;
        BOOL result_type_is_void = FALSE;
        
        sBuf source;
        sBuf_init(&source);
        
        sBuf_append_char(&source, '{');
        
        char source2[1024];
        snprintf(source2, 1024, "auto result = new %s;\n", CLASS_NAME(klass));
        
        sBuf_append_str(&source, source2);
        
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* name = klass->mFieldName[i];
            sNodeType* field_type = klass->mFields[i];
            
            if(type_identify(node_type, field_type) && node_type->mPointerNum == field_type->mPointerNum && field_type->mHeap) {
                fprintf(stderr, "Defining recursively the cloner.sexited. Define the cloner mannually or remove %% of the field type from the recursively defined field\n");
                exit(2);
            }
            
            if(field_type->mHeap) {
                if(field_type->mNullable) {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != null && self.%s != null) { result.%s = nullable clone self.%s!;}\n", name, name, name);
                    
                    sBuf_append_str(&source, source2);
                }
                else {
                    char source2[1024];
                    snprintf(source2, 1024, "if(self != null && self.%s != null) { result.%s = clone self.%s;}\n", name, name, name);
                    
                    sBuf_append_str(&source, source2);
                }
            }
            else if(field_type->mArrayDimentionNum > 0) {
                char source2[1024];
                snprintf(source2, 1024, "memcpy(result.%s, self.%s, sizeof(result.%s));\n", name, name, name);
                
                sBuf_append_str(&source, source2);
            }
            else {
                char source2[1024];
                snprintf(source2, 1024, "result.%s = self.%s;\n", name, name);
                
                sBuf_append_str(&source, source2);
            }
        }
        snprintf(source2, 1024, "return result;\n");
        sBuf_append_str(&source, source2);
        
        sBuf_append_char(&source, '}');
        
        sParserInfo pinfo;
        memset(&pinfo, 0, sizeof(sParserInfo));
        
        pinfo.p = source.mBuf;
        char* source3 = source.mBuf;
        pinfo.source = &source3;
        snprintf(pinfo.sname, PATH_MAX, "clone");
        pinfo.sline = 1;
        pinfo.lv_table  = init_block_vtable(NULL, extern_c_lang);
    
        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;
    
            BOOL readonly = FALSE;
            (void)add_variable_to_table(pinfo.lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, FALSE);
        }
        
        if(parse_block_easy(&node_block, extern_c_lang, result_type_is_void, TRUE, &pinfo)) {
            BOOL lambda_ = FALSE;
            sVarTable* block_var_table = init_block_vtable(pinfo.lv_table, extern_c_lang);
            char* struct_name = NULL;
            BOOL operator_fun = FALSE;
            BOOL constructor_fun = FALSE;
            BOOL simple_lambda_param = FALSE;
            BOOL generics_function = FALSE;
            BOOL var_arg = FALSE;
            int version = -1;
            BOOL finalize = FALSE;
            int generics_fun_num = 0;
            char* simple_fun_name = "";
            int sline = 0;
            BOOL immutable_ = FALSE;
            
            LLVMBasicBlockRef current_block = info->current_block; //LLVMGetLastBasicBlock(gFunction);
    
            unsigned int node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, node_block, lambda_, block_var_table, struct_name, operator_fun, constructor_fun, simple_lambda_param, &pinfo, generics_function, var_arg, version, finalize, generics_fun_num, simple_fun_name, sline, immutable_);
            
            free(source.mBuf);
            
            if(compile(node, info)) {
                cloner = get_function_from_table(fun_name);
            }
    
            llvm_change_block(current_block, info);
        }
    }
    
    info->in_automatically_created_function = in_automatically_created_function;
    gComeFunctionResultType = come_function_result_type;

    return cloner;
}

LLVMValueRef clone_object(sNodeType* node_type, LLVMValueRef obj, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;

    if(node_type->mPointerNum > 0) {
        sCLClass* klass = node_type->mClass;

        char class_name[VAR_NAME_MAX];
        xstrncpy(class_name, CLASS_NAME(klass), VAR_NAME_MAX);
        
/*
        int k;
        for(k=0; k<node_type->mPointerNum; k++) {
            xstrncat(class_name, "p", VAR_NAME_MAX);
        }
*/

        char fun_name[VAR_NAME_MAX];
        snprintf(fun_name, VAR_NAME_MAX, "%s_clone", class_name);

        int i;
        sFunction* cloner = NULL;
        for(i=FUN_VERSION_MAX-1; i>=1; i--) {
            char new_fun_name[VAR_NAME_MAX];
            snprintf(new_fun_name, VAR_NAME_MAX, "%s_v%d", fun_name, i);
            cloner = get_function_from_table(new_fun_name);
            
            if(cloner) {
                xstrncpy(fun_name, new_fun_name, VAR_NAME_MAX);
                break;
            }
        }
        
        cloner = get_function_from_table(fun_name);
        
        if(cloner == NULL && !node_type->mClass->mProtocol && !is_number_class(node_type) && node_type->mNumGenericsTypes == 0) {
            cloner = create_cloner_automatically(node_type, fun_name, info);
        }
        
        if(cloner != NULL) {
            if(cloner->mGenericsFunction) {
                LLVMValueRef llvm_fun = NULL;
                
                BOOL immutable_ = cloner->mImmutable;

                if(!create_generics_function(&llvm_fun, cloner, fun_name, node_type, 0, NULL, immutable_, info)) {
                    fprintf(stderr, "can't craete generics cloner %s\n", fun_name);
                    exit(1);
                }

                int num_params = 1;

                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);

                llvm_params[0] = obj;
                
                sNodeType* result_type = clone_node_type(cloner->mResultType);
                
                int num_method_generics_types = 0;
                
                (void)solve_type(&result_type, node_type, num_method_generics_types, NULL, info);
    
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
    
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
                BOOL var_arg = FALSE;
    
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);

                obj = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "funAAA");
            }
            else {
                int num_params = 1;

                LLVMValueRef llvm_params[PARAMS_MAX];
                memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);

                llvm_params[0] = obj;
                
                sNodeType* result_type = clone_node_type(cloner->mResultType);
                
                int num_method_generics_types = 0;
                
                (void)solve_type(&result_type, node_type, num_method_generics_types, NULL, info);
    
                LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
                llvm_param_types[0] = create_llvm_type_with_class_name("char*");
    
                LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
            
                BOOL var_arg = FALSE;
    
                LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);

                LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
                obj = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "funBBB");
            }
        }
        else {
            /// ncmemdup ///
            int num_params = 1;

            LLVMValueRef llvm_params[PARAMS_MAX];
            memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);

            char* fun_name2;
            if(gNCGC) {
                fun_name2 = "gc_ncmemdup";
            }
            else {
                fun_name2 = "ncmemdup";
            }

            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");

            LLVMValueRef llvm_value = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type, "castAL");

            llvm_params[0] = llvm_value;

            LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name2);
            if(llvm_fun == NULL) {
                compile_err_msg(info, "require %s funtion", fun_name2);
                exit(0);
            }
            
            sNodeType* result_type = create_node_type_with_class_name("void*");

            LLVMTypeRef llvm_param_types[PARAMS_MAX];

            llvm_param_types[0] = create_llvm_type_with_class_name("char*");

            LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
        
            BOOL var_arg = FALSE;

            LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
            
            obj = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "funCCC");

            LLVMTypeRef llvm_type2 = create_llvm_type_from_node_type(node_type);

            obj = LLVMBuildCast(gBuilder, LLVMBitCast, obj, llvm_type2, "castAM");
        }
        
        if(node_type->mClass->mProtocol && node_type->mPointerNum == 1) {
            clone_protocol_object(node_type, obj, info);
        }
    }

    return obj;
}

LLVMTypeRef create_llvm_type_with_class_name(char* class_name);

LLVMValueRef gTmpFunction;
LVALUE gNullLVALUE;

LLVMValueRef gCallerSName;
LLVMValueRef gCallerSLine;

void set_caller_sname(char* sname)
{
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
    LLVMValueRef value = LLVMBuildPointerCast(gBuilder, LLVMBuildGlobalString(gBuilder, sname, sname), llvm_type, "sname");
    
    LLVMBuildStore(gBuilder, value, gCallerSName);
}

void set_caller_sline(int sline)
{
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
    LLVMValueRef value = LLVMConstInt(llvm_type, sline, TRUE);
    
    LLVMBuildStore(gBuilder, value, gCallerSLine);
}


void init_nodes(char* sname)
{
    // create context, module and builder
    gContext = LLVMContextCreate();
/*
#ifdef __DARWIN_ARM__
    LLVMContextSetOpaquePointers(gContext, 1);
#endif
*/
    gModule = LLVMModuleCreateWithNameInContext(sname, gContext);
    gBuilder = LLVMCreateBuilderInContext(gContext);

    gLLVMStack = (LVALUE*)calloc(1, sizeof(LVALUE)*NEO_C_STACK_SIZE);
    gLLVMStackHead = gLLVMStack;
    
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
    
    gCallerSName = LLVMAddGlobal(gModule, llvm_type, "gCallerSName");
    LLVMSetLinkage(gCallerSName, LLVMInternalLinkage);
    LLVMValueRef zero_value = LLVMConstNull(llvm_type);
    LLVMSetInitializer(gCallerSName, zero_value);
    
    llvm_type = create_llvm_type_with_class_name("int");
    
    gCallerSLine = LLVMAddGlobal(gModule, llvm_type, "gCallerSLine");
    LLVMSetLinkage(gCallerSLine, LLVMInternalLinkage);
    zero_value = LLVMConstInt(llvm_type, 0, FALSE);
    LLVMSetInitializer(gCallerSLine, zero_value);
    
    memset(&gNullLVALUE, 0, sizeof(LVALUE));

    const int node_size = 32;

    if(gUsedNodes == 0) {
        gNodes = (sNodeTree*)calloc(1, sizeof(sNodeTree)*node_size);
        memset(gNodes, 0, sizeof(sNodeTree)*node_size);
        gSizeNodes = node_size;
        gUsedNodes = 1;   // 0 of index means null
    }

    if(gNCDebug) {
        gDIBuilder = LLVMCreateDIBuilder(gModule);

        char cwd[PATH_MAX];
        getcwd(cwd, PATH_MAX);

        char directory[PATH_MAX];

        snprintf(directory, PATH_MAX, "%s", cwd);

        int directory_len = strlen(directory);

        LLVMMetadataRef file = LLVMDIBuilderCreateFile(gDIBuilder, gFName, strlen(gFName), directory, directory_len);

        char* procedure = "come";
        int procedure_len = strlen("come");

        int is_optimized = 0;
        const char* flags = "";
        int flags_len = 0;
        int runtime_ver = 0;
        char* split_name = NULL;
        int split_name_len = 0;
        int dwold = 0;
        int split_debugginginling = 0;
        int debug_info_for_profiling = 0;
        const char* sys_root = "";
        int sys_root_len = 0;
        const char* sdk = "";
        int sdk_len = 0;


#if __DARWIN__
        LLVMMetadataRef compile_unit = LLVMDIBuilderCreateCompileUnit(gDIBuilder, LLVMDWARFSourceLanguageC, file, procedure, procedure_len, is_optimized, flags, flags_len, runtime_ver, split_name,  split_name_len, LLVMDWARFEmissionFull, dwold, split_debugginginling, debug_info_for_profiling, sys_root, sys_root_len, sdk, sdk_len);
#elif LLVM_VERSION >= 11
        LLVMMetadataRef compile_unit = LLVMDIBuilderCreateCompileUnit(gDIBuilder, LLVMDWARFSourceLanguageC, file, procedure, procedure_len, is_optimized, flags, flags_len, runtime_ver, split_name,  split_name_len, LLVMDWARFEmissionFull, dwold, split_debugginginling, debug_info_for_profiling, sys_root, sys_root_len, sdk, sdk_len);
#else
        LLVMMetadataRef compile_unit = LLVMDIBuilderCreateCompileUnit(gDIBuilder, LLVMDWARFSourceLanguageC, file, procedure, procedure_len, is_optimized, flags, flags_len, runtime_ver, split_name,  split_name_len, LLVMDWARFEmissionFull, dwold, split_debugginginling, debug_info_for_profiling);
#endif

        char include_path[PATH_MAX];

        snprintf(include_path, PATH_MAX, "%s/%s", cwd, gFName);
        /*
        xstrncpy(include_path, cwd, PATH_MAX);
        xstrncat(include_path, "/", PATH_MAX);
        xstrncat(include_path, gFName, PATH_MAX);
        */

        LLVMMetadataRef module = LLVMDIBuilderCreateModule(gDIBuilder, compile_unit,
                              procedure, procedure_len,
                              "", 0,
                              include_path, strlen(include_path),
                              "", 0);


        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

        LLVMValueRef dwarf_version = LLVMConstInt(llvm_type, 4, FALSE);

        LLVMMetadataRef dwarf_version_meta_data = LLVMValueAsMetadata(dwarf_version);
        
        LLVMAddModuleFlag(gModule, 6, "Dwarf Version", strlen("Dwarf Version"), dwarf_version_meta_data);

        LLVMValueRef dwarf_info_version = LLVMConstInt(llvm_type, LLVMDebugMetadataVersion(), FALSE);

        LLVMMetadataRef dwarf_info_version_meta_data = LLVMValueAsMetadata(dwarf_info_version);

        LLVMAddModuleFlag(gModule, LLVMModuleFlagBehaviorWarning, "Debug Info Version", strlen("Debug Info Version"), dwarf_info_version_meta_data);
    }

    /// va_list ///
#ifdef __DARWIN__
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("int");
    field_types[1] = create_llvm_type_with_class_name("int");
    field_types[2] = create_llvm_type_with_class_name("char*");
    field_types[3] = create_llvm_type_with_class_name("char*");

    int num_fields = 4;

    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type = create_node_type_with_class_pointer(va_list_struct);

    class_name = "va_list";
    va_list_struct = alloc_struct("va_list", FALSE, FALSE, NULL, FALSE);
    node_type = create_node_type_with_class_pointer(va_list_struct);

    add_typedef("va_list", node_type, FALSE);

#elif defined(__DARWIN_ARM__)
    sNodeType* node_type = create_node_type_with_class_name("char*");

    add_typedef("__builtin_va_list", node_type, FALSE);
    add_typedef("va_list", node_type, FALSE);
#elif  defined(__X86_64_CPU__ )
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("int");
    field_types[1] = create_llvm_type_with_class_name("int");
    field_types[2] = create_llvm_type_with_class_name("char*");
    field_types[3] = create_llvm_type_with_class_name("char*");

    int num_fields = 4;
    
    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type2 = create_node_type_with_class_pointer(va_list_struct);
    
    add_typedef("va_list", node_type2, FALSE);

#elif  defined(__RASPBERRY_PI__)
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("char*");

    int num_fields = 1;
    
    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type3 = create_node_type_with_class_pointer(va_list_struct);

    class_name = "va_list";
    va_list_struct = alloc_struct("va_list", FALSE, FALSE, NULL, FALSE);
    node_type3 = create_node_type_with_class_pointer(va_list_struct);
    
    add_typedef("va_list", node_type3, FALSE);
#elif __AARCH64_CPU__
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("char*");
    field_types[1] = create_llvm_type_with_class_name("char*");
    field_types[2] = create_llvm_type_with_class_name("char*");
    field_types[3] = create_llvm_type_with_class_name("int");
    field_types[4] = create_llvm_type_with_class_name("int");

    int num_fields = 5;
    
    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type2 = create_node_type_with_class_pointer(va_list_struct);
    
    add_typedef("va_list", node_type2, FALSE);
#elif __RASPBERRY_PI__
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("char*");

    int num_fields = 1;

    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type5 = create_node_type_with_class_pointer(va_list_struct);

    class_name = "va_list";
    va_list_struct = alloc_struct("va_list", FALSE, FALSE, NULL, FALSE);
    node_type5 = create_node_type_with_class_pointer(va_list_struct);
    
    add_typedef("va_list", node_type5, FALSE);
#elif defined(__ISH__)
    {
    sNodeType* node_type6 = create_node_type_with_class_name("char*");
    add_typedef("__builtin_va_list", node_type6, FALSE);
    add_typedef("va_list", node_type6, FALSE);
    }
#else
    LLVMTypeRef field_types[STRUCT_FIELD_MAX];

    field_types[0] = create_llvm_type_with_class_name("char*");
    field_types[1] = create_llvm_type_with_class_name("char*");
    field_types[2] = create_llvm_type_with_class_name("char*");
    field_types[3] = create_llvm_type_with_class_name("int");
    field_types[4] = create_llvm_type_with_class_name("int");

    int num_fields = 5;

    char* class_name = "__builtin_va_list";

    LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, class_name);

    LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);

    sCLClass* va_list_struct = alloc_struct("__builtin_va_list", FALSE, FALSE, NULL, FALSE);
    sNodeType* node_type7 = create_node_type_with_class_pointer(va_list_struct);

    class_name = "va_list";
    va_list_struct = alloc_struct("va_list", FALSE, FALSE, NULL, FALSE);
    node_type7 = create_node_type_with_class_pointer(va_list_struct);
#endif
    BOOL immutable_ = TRUE;
    
    {
        char* name = "llvm.va_start";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    
/*
    {
        char* name = "__error";
        int num_params = 0;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        sNodeType* result_type = create_node_type_with_class_name("int*");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        int i;
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
*/

    {
        char* name = "__builtin_va_start";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }

    /// va_end ///
    {
        char* name = "llvm.va_end";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    
#ifdef __DARWIN_ARM__
    /// va_arg ///
    {
        char* name = "llvm.va_arg";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "va_list", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        xstrncpy(param_names[1], "va_type", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char*");

        sNodeType* result_type = create_node_type_with_class_name("char*");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
#endif
    /// come_gc_init ///
    {
        char* name = "come_gc_init";
        int num_params = 0;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    /// come_boehm_gc_init ///
    {
        char* name = "come_boehm_gc_init";
        int num_params = 0;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    /// come_gc_final ///
    {
        char* name = "come_gc_final";
        int num_params = 0;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];
        
        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    /// igc_calloc ///
    {
        char* name = "igc_calloc";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "count", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long");

        xstrncpy(param_names[1], "size", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("long");

        sNodeType* result_type = create_node_type_with_class_name("void*");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    /// igc_increment_ref_count ///
    {
        char* name = "igc_increment_ref_count";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "mem", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("void*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    /// igc_decrement_ref_count ///
    {
        char* name = "igc_decrement_ref_count";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "mem", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("void*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }

    {
        char* name = "__builtin_va_end";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char*");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.assume";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "exp", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("bool");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.readcyclecounter";
        int num_params = 0;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        sNodeType* result_type = create_node_type_with_class_name("long");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.bitreverse.i8";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char");

        sNodeType* result_type = create_node_type_with_class_name("char");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.bitreverse.i16";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("short");

        sNodeType* result_type = create_node_type_with_class_name("short");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.bitreverse.i32";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("int");

        sNodeType* result_type = create_node_type_with_class_name("int");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.bitreverse.i64";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long");

        sNodeType* result_type = create_node_type_with_class_name("long");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshl.i8";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char");

        sNodeType* result_type = create_node_type_with_class_name("char");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshl.i16";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("short");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("short");

        sNodeType* result_type = create_node_type_with_class_name("short");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshl.i32";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("int");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("int");

        sNodeType* result_type = create_node_type_with_class_name("int");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshl.i64";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("long");

        sNodeType* result_type = create_node_type_with_class_name("long");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshr.i8";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("char");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("char");

        sNodeType* result_type = create_node_type_with_class_name("char");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshr.i16";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("short");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("short");

        sNodeType* result_type = create_node_type_with_class_name("short");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshr.i32";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("int");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("int");

        sNodeType* result_type = create_node_type_with_class_name("int");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.fshr.i64";
        int num_params = 2;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long");

        xstrncpy(param_names[1], "m", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("long");

        sNodeType* result_type = create_node_type_with_class_name("long");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.canonicalize.f64";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("double");

        sNodeType* result_type = create_node_type_with_class_name("double");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.canonicalize.f32";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("float");

        sNodeType* result_type = create_node_type_with_class_name("float");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
    {
        char* name = "llvm.canonicalize.f80";
        int num_params = 1;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "n", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("long_double");

        sNodeType* result_type = create_node_type_with_class_name("long_double");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
/*
    {
        char* name = "llvm.memcpy.inline.p0i8.p0i8.i64";
        int num_params = 3;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "dst", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("void*");

        xstrncpy(param_names[1], "src", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("void*");

        xstrncpy(param_names[2], "size", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("long");

        sNodeType* result_type = create_node_type_with_class_name("void");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }
*/
    {
        char* name = "llvm.objectsize.i64.p0i8";
        int num_params = 4;
        char param_names[PARAMS_MAX][VAR_NAME_MAX];
        sNodeType* param_types[PARAMS_MAX];
        char* block_text = NULL;
        BOOL var_arg = FALSE;

        xstrncpy(param_names[0], "p", VAR_NAME_MAX);
        param_types[0] = create_node_type_with_class_name("void*");

        xstrncpy(param_names[1], "arg2", VAR_NAME_MAX);
        param_types[1] = create_node_type_with_class_name("bool");

        xstrncpy(param_names[2], "arg3", VAR_NAME_MAX);
        param_types[2] = create_node_type_with_class_name("bool");

        xstrncpy(param_names[3], "arg4", VAR_NAME_MAX);
        param_types[3] = create_node_type_with_class_name("bool");

        sNodeType* result_type = create_node_type_with_class_name("long");

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            llvm_param_types[i] = create_llvm_type_from_node_type(param_types[i]);
        }

        LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);

        LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
        LLVMValueRef llvm_fun = LLVMAddFunction(gModule, name, function_type);

        char* param_names2[PARAMS_MAX];
        for(i=0; i<num_params; i++) {
            param_names2[i] = param_names[i];
        }

        BOOL generics_function = FALSE;
        BOOL var_args = FALSE;
        if(!add_function_to_table(name, num_params, param_names2, param_types, NULL, NULL, result_type, llvm_fun, block_text, generics_function, var_args, 0, NULL, 0, NULL, FALSE, NULL, FALSE, NULL, "", -1, immutable_, FALSE, function_type))
        {
            fprintf(stderr, "overflow function number\n");
            exit(1);
        }
    }

    LLVMTypeRef llvm_result_type;

    llvm_result_type = create_llvm_type_with_class_name("void");
    int num_params = 0;
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
    BOOL var_arg = FALSE;

    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    gTmpFunction = LLVMAddFunction(gModule, "const_tmp_function", function_type);
}

void free_nodes(char* sname)
{
    LLVMDeleteFunction(gTmpFunction);
    if(gNCDebug) {
        LLVMDIBuilderFinalize(gDIBuilder);
        LLVMDisposeDIBuilder(gDIBuilder);
    }
//    free(gLLVMStack);

    char sname2[PATH_MAX];

    snprintf(sname2, PATH_MAX, "%s.ll", sname);

    //LLVMDumpModule(gModule); // dump module to STDOUT
    if(!gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef && strcmp(sname, "") != 0) {
        LLVMPrintModuleToFile(gModule, sname2, NULL);
    }

    // clean memory
    LLVMDisposeBuilder(gBuilder);
    LLVMDisposeModule(gModule);
    LLVMContextDispose(gContext);

/*
    if(gUsedNodes > 0) {
        int i;
        for(i=1; i<gUsedNodes; i++) {
            switch(gNodes[i].mNodeType) {
                case kNodeTypeCString:
                    free(gNodes[i].uValue.sString.mString);
                    break;
                    
                case kNodeTypeRegex:
                    free(gNodes[i].uValue.sRegex.mString);
                    break;

                case kNodeTypeFunction:
                    sNodeBlock_free(gNodes[i].uValue.sFunction.mNodeBlock);
                    break;

                case kNodeTypeMethodBlock:
                    free(gNodes[i].uValue.sMethodBlock.mBlockText);
                    break;

                case kNodeTypeIf:
                    {
                    if(gNodes[i].uValue.sIf.mIfNodeBlock) {
                        sNodeBlock_free(gNodes[i].uValue.sIf.mIfNodeBlock);
                    }
                    int j;
                    for(j=0; j<gNodes[i].uValue.sIf.mElifNum; j++) {
                        sNodeBlock* node_block = gNodes[i].uValue.sIf.mElifNodeBlocks[j];
                        if(node_block) {
                            sNodeBlock_free(node_block);
                        }
                    }
                    if(gNodes[i].uValue.sIf.mElseNodeBlock) {
                        sNodeBlock_free(gNodes[i].uValue.sIf.mElseNodeBlock);
                    }
                    }
                    break;

                case kNodeTypeWhile:
                    {
                    if(gNodes[i].uValue.sWhile.mWhileNodeBlock) {
                        sNodeBlock_free(gNodes[i].uValue.sWhile.mWhileNodeBlock);
                    }
                    }
                    break;

                case kNodeTypeFor:
                    if(gNodes[i].uValue.sFor.mForNodeBlock) 
                    {
                        sNodeBlock_free(gNodes[i].uValue.sFor.mForNodeBlock);
                    }
                    break;

                case kNodeTypeGenericsFunction:
                    free(gNodes[i].uValue.sFunction.mBlockText);
                    break;

                case kNodeTypeInlineFunction:
                    free(gNodes[i].uValue.sFunction.mBlockText);
                    break;

                case kNodeTypeNormalBlock:
                    if(gNodes[i].uValue.sNormalBlock.mNodeBlock) 
                    {
                        sNodeBlock_free(gNodes[i].uValue.sNormalBlock.mNodeBlock);
                    }
                    break;

                case kNodeTypeSelect:{
                    int num_pipes = gNodes[i].uValue.sSelect.mNumPipes;
                    int j;
                    for(j=0; j<num_pipes; j++) {
                        sNodeBlock_free(gNodes[i].uValue.sSelect.mPipeBlocks[j]);
                    }

                    if(gNodes[i].uValue.sSelect.mDefaultBlock) {
                        sNodeBlock_free(gNodes[i].uValue.sSelect.mDefaultBlock);
                    }
                    }
                    break;

                case kNodeTypeSwitch:
                    if(gNodes[i].uValue.sSwitch.mSwitchExpression)
                    {
                        free(gNodes[i].uValue.sSwitch.mSwitchExpression);
                    }
                    break;

                default:
                    break;
            }
        }

        free(gNodes);

        gSizeNodes = 0;
        gUsedNodes = 0;
    }
*/
}

void setCurrentDebugLocation(int sline, sCompileInfo* info)
{
    int colum = 0;
    LLVMMetadataRef scope = info->function_meta_data;
    LLVMMetadataRef inlinedat = NULL;
    LLVMMetadataRef loc = LLVMDIBuilderCreateDebugLocation(gContext, sline, colum, scope, inlinedat);

    LLVMSetCurrentDebugLocation(gBuilder, LLVMMetadataAsValue(gContext, loc));
}

void setNullCurrentDebugLocation(int sline, sCompileInfo* info)
{
#if !defined(__ANDROID__)
    LLVMSetCurrentDebugLocation(gBuilder, NULL);
#endif
}



LLVMMetadataRef create_llvm_debug_type(sNodeType* node_type, sCompileInfo* info)
{
    LLVMMetadataRef result = NULL;

    if(type_identify_with_class_name(node_type, "int")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "int", strlen("int"), 32, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "int", strlen("int"), 32, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "bool")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "bool", strlen("bool"), 1, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "bool", strlen("bool"), 1, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "char")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "char", strlen("char"), 8, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "char", strlen("char"), 8, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "short")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "short", strlen("short"), 16, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "short", strlen("short"), 16, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "long")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "long", strlen("long"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "long", strlen("long"), 64, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "float")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 32, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 32, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "double")) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "double", strlen("doube"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "double", strlen("double"), 64, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "_Float16") || type_identify_with_class_name(node_type, "_Float16x")) 
    {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 16, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 16, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "_Float32") || type_identify_with_class_name(node_type, "_Float32x")) 
    {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 16, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 16, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "_Float64") || type_identify_with_class_name(node_type, "_Float64x")) 
    {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 64, 0, 0);
#endif
    }
    else if(type_identify_with_class_name(node_type, "_Float128") || type_identify_with_class_name(node_type, "_Float128x")) 
    {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 128, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "float", strlen("float"), 128, 0, 0);
#endif
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_STRUCT) {
        sCLClass* klass = node_type->mClass;
        char* class_name = klass->mName;
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, class_name, strlen(class_name), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, class_name, strlen(class_name), 64, 0, 0);
#endif
/*
        char* fname = info->sname;
        
        char cwd[PATH_MAX];
        getcwd(cwd, PATH_MAX);
    
        char directory[PATH_MAX];
        
        snprintf(directory, PATH_MAX, "%s", cwd);
        int directory_len = strlen(directory);
    
        LLVMMetadataRef scope = LLVMDIBuilderCreateFile(gDIBuilder, fname, strlen(fname), directory, directory_len);
        
        LLVMMetadataRef llvm_debug_fields[STRUCT_FIELD_MAX];
        
        int num_fields = klass->mNumFields;
        
        for(int i=0; i<num_fields; i++) {
            LLVMMetadataRef llvm_debug_type;
            
            if(type_identify(node_type, klass->mFields[i])) {
#if LLVM_VERSION <= 7
                llvm_debug_type = LLVMDIBuilderCreateBasicType(gDIBuilder, "union", strlen("union"), 64, 0);
#else
                llvm_debug_type = LLVMDIBuilderCreateBasicType(gDIBuilder, "union", strlen("union"), 64, 0, 0);
#endif
            }
            else {
                llvm_debug_type = create_llvm_debug_type(klass->mFields[i], info);
            }
            
            char* name = klass->mFieldName[i];
            LLVMMetadataRef file = scope;
            int sline = info->sline;
            
            sNodeType* field_type = clone_node_type(klass->mFields[i]);
            
            int alignment = 0;
            uint64_t size_in_bits = get_size_from_node_type(field_type, &alignment) * 8;
            uint32_t align_in_bits = alignment * 8;
            
            klass->mNumFields = i+1;
            uint64_t offset_in_bits;
            if(i == 0) {
                offset_in_bits = 0;
            }
            else if(i+1 > num_fields) {
                klass->mNumFields = num_fields;
            }
            else {
                offset_in_bits = get_size_from_node_type(node_type, &alignment) * 8 - size_in_bits;
            }
            klass->mNumFields = num_fields;
            LLVMDIFlags flags = 0;
            
            llvm_debug_fields[i] = LLVMDIBuilderCreateMemberType(
                gDIBuilder, scope, name, strlen(name), file, sline, size_in_bits, align_in_bits,
                offset_in_bits, flags, llvm_debug_type);
        }
        
        LLVMMetadataRef file = scope;
        unsigned line_number = info->sline;
        int alignment = 0;
        uint64_t size_in_bits = get_size_from_node_type(node_type, &alignment) * 8;
        uint32_t align_in_bits = alignment * 8;
        LLVMDIFlags flags = 0;
        LLVMMetadataRef deriverd_from = NULL;
        unsigned run_time_lang = 0;
        const char* unique_id = class_name;
        LLVMMetadataRef vtable_holder = NULL;
        
        result = LLVMDIBuilderCreateStructType(gDIBuilder, scope, class_name, strlen(class_name), file, line_number, size_in_bits,
            align_in_bits, flags, deriverd_from, llvm_debug_fields, klass->mNumFields, run_time_lang, vtable_holder,
            unique_id, strlen(unique_id));
*/
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_UNION) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "union", strlen("union"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "union", strlen("union"), 64, 0, 0);
#endif
    }
    else if(node_type->mArrayDimentionNum > 0) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "pointer", strlen("pointer"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "pointer", strlen("pointer"), 64, 0, 0);
#endif
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_GENERICS) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "generics", strlen("generics"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "generics", strlen("generics"), 64, 0, 0);
#endif
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_METHOD_GENERICS) {
#if LLVM_VERSION <= 7
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "mgenerics", strlen("mgenerics"), 64, 0);
#else
        result = LLVMDIBuilderCreateBasicType(gDIBuilder, "mgenerics", strlen("mgenerics"), 64, 0, 0);
#endif
    }
    
    if(node_type->mPointerNum > 0) {
        int i;
        for(i=0; i<node_type->mPointerNum; i++) {
            result = LLVMDIBuilderCreatePointerType(gDIBuilder, result, sizeof(char*)*8, 0, 0, "pointer", strlen("pointer"));
        }
    }
    
    if(node_type->mNoArrayPointerNum > 0) {
        int i;
        for(i=0; i<node_type->mNoArrayPointerNum; i++) {
            result = LLVMDIBuilderCreatePointerType(gDIBuilder, result, sizeof(char*)*8, 0, 0, "pointer", strlen("pointer"));
        }
    }

    return result;
}

void createDebugFunctionInfo(char* fname, int sline, char* fun_name, sFunction* function, char* module_name, sCompileInfo* info)
{
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);

    char directory[PATH_MAX];

    snprintf(directory, PATH_MAX, "%s", cwd);

    int directory_len = strlen(directory);

    LLVMMetadataRef file = LLVMDIBuilderCreateFile(gDIBuilder, fname, strlen(fname), directory, directory_len);

    int num_params;
    if(function) {
        num_params = function->mNumParams;
    }
    else {
        num_params = 0;
    }
    LLVMMetadataRef param_types[PARAMS_MAX];

    int i;
    for(i=0; i<num_params; i++) {
        param_types[i] = create_llvm_debug_type(function->mParamTypes[i], info);
    }

    LLVMMetadataRef FunctionTy = LLVMDIBuilderCreateSubroutineType(gDIBuilder, file, param_types, num_params, 0);

    unsigned tag = 0x15;

    LLVMMetadataRef ReplaceableFunctionMetadata = LLVMDIBuilderCreateReplaceableCompositeType(gDIBuilder, tag, fun_name, strlen(fun_name), 
                                                    file, file, sline,
                                                    0, 0, 0,
                                                    LLVMDIFlagFwdDecl,
                                                    "", 0);


    LLVMMetadataRef function_meta_data = LLVMDIBuilderCreateFunction(gDIBuilder, file, fun_name, strlen(fun_name), fun_name, strlen(fun_name),
                                file, sline, FunctionTy, TRUE, TRUE, sline, 0, FALSE);

    info->function_meta_data = function_meta_data;
}

void finishDebugFunctionInfo()
{
}

// return node index
unsigned int alloc_node()
{
    if(gSizeNodes == gUsedNodes) {
        int new_size = (gSizeNodes+1) * 2;
        gNodes = (sNodeTree*)realloc(gNodes, sizeof(sNodeTree)*new_size);
        memset(gNodes + gSizeNodes, 0, sizeof(sNodeTree)*(new_size - gSizeNodes));

        gSizeNodes = new_size;
    }

    return gUsedNodes++;
}

sNodeBlock* sNodeBlock_alloc()
{
    sNodeBlock* block = (sNodeBlock*)calloc(1, sizeof(sNodeBlock));

    block->mSizeNodes = 32;
    block->mNumNodes = 0;
    block->mNodes = (unsigned int*)calloc(1, sizeof(unsigned int)*block->mSizeNodes);
    block->mLVTable = NULL;

    return block;
}

void sNodeBlock_free(sNodeBlock* block)
{
/// this is compiler, so allow me to make memory leak
/*
    if(block->mNodes) free(block->mNodes);
    free(block->mSource.mBuf);
    free(block);
*/
}

void append_node_to_node_block(sNodeBlock* node_block, unsigned int node)
{
    if(node_block->mSizeNodes <= node_block->mNumNodes) {
        unsigned int new_size = node_block->mSizeNodes * 2;
        node_block->mNodes = (unsigned int*)xrealloc(node_block->mNodes, sizeof(unsigned int)*new_size);
        memset(node_block->mNodes + node_block->mSizeNodes, 0, sizeof(unsigned int)*(new_size-node_block->mSizeNodes));
        node_block->mSizeNodes = new_size;
    }

    node_block->mNodes[node_block->mNumNodes] = node;
    node_block->mNumNodes++;
}

void push_value_to_stack_ptr(LVALUE* value, sCompileInfo* info)
{
    *gLLVMStack= *value;
    gLLVMStack++;

    info->stack_num++;
}

void dec_stack_ptr(int value, sCompileInfo* info)
{
    gLLVMStack -= value;

    info->stack_num -= value;
}

void arrange_stack(sCompileInfo* info, int top)
{
    if(info->stack_num > top) {
        dec_stack_ptr(info->stack_num-top, info);
    }
    if(info->stack_num < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack_num, top);
        exit(2);
    }
}

LVALUE* get_value_from_stack(int offset)
{
    return gLLVMStack + offset;
}

static void create_generics_name(char* real_name, int size_real_name, sNodeType* generics_type)
{
    xstrncpy(real_name, "", size_real_name);
    
    sCLClass* klass = generics_type->mClass;
    
    if(klass) {
        char* class_name = CLASS_NAME(klass);
    
        xstrncat(real_name, class_name, size_real_name);

        int j;
        for(j=0; j<generics_type->mPointerNum; j++) 
        {
            xstrncat(real_name, "p", size_real_name);
        }

        if(generics_type->mHeap) {
            xstrncat(real_name, "h", size_real_name);
        }
    }
    
    if(generics_type->mNumGenericsTypes > 0) {
        xstrncat(real_name, "_", size_real_name);
        
        int i;
        for(i=0; i<generics_type->mNumGenericsTypes; i++)
        {
            sNodeType* node_type = generics_type->mGenericsTypes[i];
    
            int size_real_name2 = 1024;
            char real_name2[size_real_name2];
            
            create_generics_name(real_name2, size_real_name2, node_type);
            xstrncat(real_name, real_name2, size_real_name);
    
            if(i != generics_type->mNumGenericsTypes-1) {
                xstrncat(real_name, "_", size_real_name);
            }
        }
    }
}

void create_generics_struct_name(char* struct_name, size_t size, sNodeType* struct_type)
{
    if(struct_type->mClass == NULL) {
        return;
    }
    char* class_name = CLASS_NAME(struct_type->mClass);
    
    xstrncpy(struct_name, class_name, size);
    
    if(struct_type->mNumGenericsTypes > 0) {
        int i;
        for(i=0; i<struct_type->mNumGenericsTypes; i++) {
            sNodeType* node_type = struct_type->mGenericsTypes[i];
    
            xstrncat(struct_name, "_", size);
            
            char real_name[512];
            create_generics_name(real_name, 512, node_type);
            
            xstrncat(struct_name, real_name, size);
    
            int j;
            for(j=0; j<node_type->mPointerNum; j++) {
                xstrncat(struct_name, "p", size);
            }
        }
    }
}

void create_generics_struct_name2(char* class_name, char* struct_name, size_t size, sNodeType* struct_type)
{
    xstrncpy(struct_name, class_name, size);

    int i;
    for(i=0; i<struct_type->mNumGenericsTypes; i++) {
        sNodeType* node_type = struct_type->mGenericsTypes[i];
        sCLClass* klass = node_type->mClass;

        xstrncat(struct_name, "_", size);
        xstrncat(struct_name, CLASS_NAME(klass), size);

        int j;
        for(j=0; j<node_type->mPointerNum; j++) {
            xstrncat(struct_name, "p", size);
        }
    }
}

LLVMTypeRef create_llvm_type_from_node_type(sNodeType* node_type)
{
    LLVMTypeRef result_type = NULL;
    sCLClass* klass = node_type->mClass;
    
    char class_name[VAR_NAME_MAX];
    create_generics_struct_name(class_name, VAR_NAME_MAX, node_type);
    
/*
    if(get_typedef(class_name)) {
        node_type = get_typedef(class_name);
        
        klass = node_type->mClass;
    }
*/
    
    LLVMTypeRef struct_type = NULL;
    BOOL opaque_struct_type = FALSE;
    
    if(klass->mFlags & CLASS_FLAGS_STRUCT) {
        LLVMTypeRef llvm_type = LLVMGetTypeByName(gModule, class_name);
    
        if(llvm_type == NULL) {
            create_generics_struct_type(CLASS_NAME(klass), node_type);
            llvm_type = LLVMGetTypeByName(gModule, class_name);
        }
        
        if(llvm_type) {
            struct_type = llvm_type;
            opaque_struct_type = LLVMIsOpaqueStruct(llvm_type) != 0;
        }
    }
    else if(klass->mFlags & CLASS_FLAGS_UNION) {
        LLVMTypeRef llvm_type = LLVMGetTypeByName(gModule, class_name);
        
        if(llvm_type) {
            struct_type = llvm_type;
            opaque_struct_type = LLVMIsOpaqueStruct(llvm_type) != 0;
        }
    }
    
    if(struct_type) {
        result_type = struct_type;
    }

#if defined(__ISH__) || defined(__DARWIN_ARM__)
    else if(type_identify_with_class_name(node_type, "__builtin_va_list") || type_identify_with_class_name(node_type, "va_list") || type_identify_with_class_name(node_type, "__va_list"))
    {
        result_type = LLVMInt8TypeInContext(gContext);
        result_type = LLVMPointerType(result_type, 0);
    }
#endif
    else if(klass->mFlags & CLASS_FLAGS_ENUM) 
    {
        result_type = LLVMInt32TypeInContext(gContext);
    }
    else if(node_type->mSizeNum > 0) {
        result_type = LLVMIntTypeInContext(gContext, node_type->mSizeNum);
    }
    else if(node_type->mChannel) {
        result_type = LLVMInt32TypeInContext(gContext);
        result_type = LLVMArrayType(result_type, 2);
    }
    else if(type_identify_with_class_name(node_type, "int")) {
        result_type = LLVMInt32TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "long")) {
        result_type = LLVMInt64TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "char")) {
        result_type = LLVMInt8TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "short")) {
        result_type = LLVMInt16TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "__uint128_t"))
    {
        result_type = LLVMInt128TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "any"))
    {
        result_type = LLVMInt64TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "protocol_obj_t"))
    {
        result_type = LLVMInt8TypeInContext(gContext);
        result_type = LLVMPointerType(result_type, 0);
    }
    else if(type_identify_with_class_name(node_type, "float"))
    {
        result_type = LLVMFloatTypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "double"))
    {
        result_type = LLVMDoubleTypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "long_double"))
    {
#ifdef __RASPBERRY_PI__
        result_type = LLVMDoubleTypeInContext(gContext);
#else
        result_type = LLVMFP128TypeInContext(gContext);
#endif
    }
    else if(type_identify_with_class_name(node_type, "bool")) {
        result_type = LLVMInt1TypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "void")) {
        result_type = LLVMVoidTypeInContext(gContext);
    }
    else if(type_identify_with_class_name(node_type, "lambda"))
    {
        int num_params = node_type->mNumParams;
        sNodeType* fun_result_type = node_type->mResultType;

        LLVMTypeRef llvm_result_type= create_llvm_type_from_node_type(fun_result_type);

        LLVMTypeRef llvm_param_types[PARAMS_MAX];

        int i;
        for(i=0; i<num_params; i++) {
            sNodeType* param_type = node_type->mParamTypes[i];

            LLVMTypeRef llvm_param_type = create_llvm_type_from_node_type(param_type);

            llvm_param_types[i] = llvm_param_type;
        }

        BOOL var_args = node_type->mVarArgs;
        
        result_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_args);
        if(node_type->mPointerNum == 0) {
            result_type = LLVMPointerType(result_type, 0);
        }
    }

    if(result_type == NULL) {
        fprintf(stderr, "invalid type %s(1)\n", class_name);
        int a = 0; // for gdb catching the point at the source code.
        int b = 1;
        int c = b/a;
        exit(1);
    }

    if(node_type->mPointerNum > 0 && type_identify_with_class_name(node_type, "void")) {
        result_type = LLVMInt8TypeInContext(gContext);
    }
    
    if(type_identify_with_class_name(node_type, "lambda") && node_type->mArrayDimentionNum > 0)
    {
        result_type = LLVMPointerType(result_type, 0);
        
        int i;
        for(i=node_type->mArrayDimentionNum-1; i>=0; i--) {
            result_type = LLVMArrayType(result_type, node_type->mArrayNum[i]);
        }
        
        for(i=1; i<node_type->mPointerNum; i++) {
            result_type = LLVMPointerType(result_type, 0);
        }
    }
    else {
        if(node_type->mArrayPointer) {
            int i;
            
            for(i=node_type->mArrayDimentionNum-1; i>=0; i--) {
                result_type = LLVMArrayType(result_type, node_type->mArrayNum[i]);
            }
            for(i=0; i<node_type->mPointerNum; i++) {
                result_type = LLVMPointerType(result_type, 0);
            }
            for(i=0; i<node_type->mNoArrayPointerNum; i++) {
                result_type = LLVMPointerType(result_type, 0);
            }
        
        }
        else {
            int i;
            for(i=0; i<node_type->mPointerNum; i++) {
                result_type = LLVMPointerType(result_type, 0);
            }
        
            for(i=node_type->mArrayDimentionNum-1; i>=0; i--) {
                result_type = LLVMArrayType(result_type, node_type->mArrayNum[i]);
            }
            
            for(i=0; i<node_type->mNoArrayPointerNum; i++) {
                result_type = LLVMPointerType(result_type, 0);
            }
        }
    }

    return result_type;
}

LLVMTypeRef create_llvm_type_with_class_name(char* class_name)
{
    sNodeType* node_type = create_node_type_with_class_name(class_name);

    return create_llvm_type_from_node_type(node_type);
}

BOOL cast_right_type_to_left_type(sNodeType* left_type, sNodeType** right_type, LVALUE* rvalue, struct sCompileInfoStruct* info)
{
    sCLClass* left_class = left_type->mClass;
    sCLClass* right_class = (*right_type)->mClass;
    
    /// va_list ///
    if((*right_type)->mNoAutoCast) {
        return TRUE;
    }
    else if(type_identify_with_class_name(left_type, "char*") && (type_identify_with_class_name(*right_type, "va_list") || type_identify_with_class_name(*right_type, "__builtin_va_list")))
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "castAN");
            rvalue->type = create_node_type_with_class_name("char*");
        }

        *right_type = create_node_type_with_class_name("char*");
    }
    else if((type_identify_with_class_name(left_type, "__builtin_va_list") || type_identify_with_class_name(left_type, "va_list") || type_identify_with_class_name(left_type, "__va_list")) && type_identify_with_class_name(*right_type, "char*"))
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "castAO");
            rvalue->type = create_node_type_with_class_name("va_list");
        }

        *right_type = create_node_type_with_class_name("va_list");
    }
    else if(left_class && right_class && (left_class->mFlags & CLASS_FLAGS_UNION) && (right_class->mFlags & CLASS_FLAGS_UNION)) 
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "castAOA");
            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if((type_identify_with_class_name(left_type, "int") || left_type->mSizeNum == 32) && type_identify_with_class_name(*right_type, "int") && left_type->mNoArrayPointerNum && (*right_type)->mChannel)
    {
        if(rvalue && rvalue->value) {
            if(rvalue) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int*");
                LLVMValueRef llvm_value2 = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "castXXXY");
                rvalue->value = llvm_value2;

                *right_type = create_node_type_with_class_name("int");
                (*right_type)->mPointerNum++;
                rvalue->type = clone_node_type(*right_type);
            }
        }
    }
#ifdef __DARWIN__
    else if(!left_type->mHeap && type_identify_with_class_name(left_type, "void") && left_type->mPointerNum >= 1 && (*right_type)->mPointerNum > 0) {
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "icatXXXXXX");
        rvalue->type = clone_node_type(left_type);
        *right_type = clone_node_type(left_type);
        
        return TRUE;
    }
    else if(!left_type->mHeap && type_identify_with_class_name(left_type, "void") && left_type->mPointerNum == 1 && (*right_type)->mArrayDimentionNum == 1) {
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

        rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "icatXXXXXX");
        rvalue->type = clone_node_type(left_type);
        *right_type = clone_node_type(left_type);
        
        return TRUE;
    }
#endif

    if(type_identify(left_type, *right_type) && (left_type->mPointerNum-1 == + (*right_type)->mPointerNum) && (*right_type)->mArrayDimentionNum == 1) 
    {
        if(rvalue && rvalue->value) {
#ifdef __DARWIN__
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef indices[2];
    
            indices[0] = LLVMConstInt(llvm_type, 0, FALSE);
            indices[1] = LLVMConstInt(llvm_type, 0, FALSE);
            if(rvalue->address) {
                rvalue->value = LLVMBuildGEP2(gBuilder, create_llvm_type_with_class_name("void*"), rvalue->address, indices, 2, "gepY");
                sNodeType* left_type2 = clone_node_type(left_type);
                left_type2->mPointerNum--;

/*
                LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name(left_type2);
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type2, "autocastX");
*/
            }
            else {
                rvalue->value = LLVMBuildGEP2(gBuilder, create_llvm_type_with_class_name("void*"), rvalue->value, indices, 2, "gepZ");
                sNodeType* left_type2 = clone_node_type(left_type);
                left_type2->mPointerNum--;
/*
                LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name(left_type2);
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type2, "autocastXY");
*/
            }

            rvalue->type = clone_node_type(left_type);
#else
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            if(rvalue->address) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "autocast");
            }
            else {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "autocast");
            }
            rvalue->type = clone_node_type(left_type);
#endif
        }

        *right_type = clone_node_type(left_type);
    }
    else if(type_identify_with_class_name(left_type, "lambda") && is_number_class(*right_type))
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
            rvalue->value = LLVMBuildCast(gBuilder, LLVMIntToPtr, rvalue->value, llvm_type, "castANZ");
            rvalue->type = create_node_type_with_class_name("char*");
        }

        *right_type = clone_node_type(left_type);
    }
    else if(left_type->mSizeNum > 0 && (*right_type)->mSizeNum > 0) {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
            
            if(left_type->mSizeNum > (*right_type)->mSizeNum) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastCO");
            }
            else if(left_type->mSizeNum == (*right_type)->mSizeNum) {
            }
            else {
                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastCX");
            }

            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if(left_type->mSizeNum > 0 && (*right_type)->mSizeNum == 0) {
        int size = 0;
        if(type_identify_with_class_name(*right_type, "char")) {
            size = 8;
        }
        else if(type_identify_with_class_name(*right_type, "short")) {
            size = 16;
        }
        else if(type_identify_with_class_name(*right_type, "int")) {
            size = 32;
        }
        else if(type_identify_with_class_name(*right_type, "long")) {
            size = 64;
        }
        
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);
            
            if(left_type->mSizeNum > size) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastCO");
            }
            else if(left_type->mSizeNum == size) {
            }
            else {
                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastCX");
            }

            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if(left_type->mPointerNum == 1 && left_type->mArrayDimentionNum == 1 && (*right_type)->mArrayDimentionNum == 2 && (*right_type)->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
#ifdef __DARWIN__
            LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
            LLVMValueRef indices[2];
    
            indices[0] = LLVMConstInt(llvm_type, 0, FALSE);
            indices[1] = LLVMConstInt(llvm_type, 0, FALSE);
            if(rvalue->address) {
                rvalue->value = LLVMBuildGEP2(gBuilder, create_llvm_type_with_class_name("void*"), rvalue->address, indices, 2, "gepXYZ");
            }
            else {
                rvalue->value = LLVMBuildGEP2(gBuilder, create_llvm_type_with_class_name("void*"),brvalue->value, indices, 2, "gepYZY");
            }

            rvalue->type = clone_node_type(left_type);
#else
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            if(rvalue->address) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "autocast");
            }
            else {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "autocast");
                rvalue->address = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "autocast");
            }
            rvalue->type = clone_node_type(left_type);
#endif
        }

        *right_type = clone_node_type(left_type);
    }
    else if((left_type->mPointerNum-1 == (*right_type)->mPointerNum) && (*right_type)->mChannel) 
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "autocast");
            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }

    else if(type_identify_with_class_name(left_type, "protocol_obj_t") && right_class->mProtocol) {
        if(rvalue && rvalue->value) {
            sNodeType* right_type2 = clone_node_type(*right_type);
            right_type2->mPointerNum = 0;
            LLVMValueRef field_address = LLVMBuildStructGEP2(gBuilder, create_llvm_type_from_node_type(right_type2), rvalue->value, 0, "field");
            rvalue->value = LLVMBuildLoad2(gBuilder, create_llvm_type_from_node_type(left_type), field_address, "protocol_obj");
            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, create_llvm_type_from_node_type(left_type), "autocast");
        }

        *right_type = clone_node_type(left_type);
    }
    else if(left_type->mPointerNum > 0 && (*right_type)->mPointerNum == 0) {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            if((*right_type)->mArrayDimentionNum > 0) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->address, llvm_type, "castBA");
                rvalue->type = clone_node_type(left_type);
                *right_type = clone_node_type(left_type);
                (*right_type)->mCastedPointerToPointer = TRUE;
            }
            else if(type_identify_with_class_name(*right_type, "lambda")) {
                rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "castBA");
                rvalue->type = clone_node_type(left_type);
                *right_type = clone_node_type(left_type);
            }
            else {
                if(type_identify_with_class_name((*right_type), "void") && (*right_type)->mPointerNum == 0) {
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMIntToPtr, rvalue->value, llvm_type, "castBA");
        
                    rvalue->type = clone_node_type(left_type);
                    *right_type = clone_node_type(left_type);
                }
            }
        }
        else {
            *right_type = clone_node_type(left_type);
        }
    }
    else if(left_type->mPointerNum > 0 && (*right_type)->mPointerNum > 0 && !left_type->mArrayPointer && !(*right_type)->mArrayPointer) 
    {
        if(rvalue && rvalue->value) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

            rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "castAQ");
            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if(type_identify(left_type, *right_type) && left_type->mNoArrayPointerNum == 1 && left_type->mArrayDimentionNum == 0 && (*right_type)->mArrayDimentionNum == 1 && (*right_type)->mPointerNum == 0 && (*right_type)->mNoArrayPointerNum == 0) 
    {
        if(rvalue && rvalue->value) {
            sNodeType* right_type2 = clone_node_type(*right_type);
            right_type2->mPointerNum = 0;
            right_type2->mNoArrayPointerNum = 0;
            
            LLVMValueRef indices[3];
            
            indices[0] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
            indices[1] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
            
            rvalue->value = LLVMBuildInBoundsGEP2(gBuilder, create_llvm_type_from_node_type(right_type2), rvalue->value, indices, 2, "fieldQUOCARD");
            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    else if(type_identify_with_class_name(*right_type, "void") && (*right_type)->mPointerNum == 0) {
        return FALSE;
    }
    else if(type_identify_with_class_name(left_type, "bool") && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 0)) 
            {
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(*right_type);

                LLVMValueRef cmp_right_value = LLVMConstInt(llvm_type, 0, FALSE);
                rvalue->value = LLVMBuildICmp(gBuilder, LLVMIntNE, rvalue->value, cmp_right_value, "icmpA");

                llvm_type = create_llvm_type_with_class_name("bool");

                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastA");
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "float") || type_identify_with_class_name(*right_type, "double") || type_identify_with_class_name(*right_type, "long_double")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(*right_type);

                LLVMValueRef cmp_right_value = LLVMConstReal(llvm_type, 0.0);
                rvalue->value = LLVMBuildFCmp(gBuilder, LLVMRealONE, rvalue->value, cmp_right_value, "fcmpA");

                llvm_type = create_llvm_type_with_class_name("bool");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastA");
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name((*right_type), "protocol_obj_t")) {
/*
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(*right_type);

                LLVMValueRef cmp_right_value = create_null_value(*right_type);
*/
                
                LLVMTypeRef llvm_type = LLVMTypeOf(rvalue->value);
                LLVMValueRef zero_value = LLVMConstNull(llvm_type);
                
                rvalue->value = LLVMBuildICmp(gBuilder, LLVMIntNE, rvalue->value, zero_value, "icmpB");

                llvm_type = create_llvm_type_with_class_name("bool");

                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastB");
            }
            else if(is_float_type((*right_type))) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }
            }

            rvalue->type = create_node_type_with_class_name("bool");
        }

        *right_type = create_node_type_with_class_name("bool");
    }
    else if((type_identify_with_class_name(left_type, "long") || left_type->mSizeNum == 64) && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "bool") || (*right_type)->mSizeNum > 0)) 
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastC");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastD");
                }
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "float") || type_identify_with_class_name(*right_type, "double") || type_identify_with_class_name(*right_type, "long_double")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");

                if((*right_type)->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKOKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKOL");
                }
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name((*right_type), "protocol_obj_t")) {
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "icatXXXXXX");
                //rvalue->value = LLVMBuildCast(gBuilder, LLVMBitCast, rvalue->value, llvm_type, "icatXXXXXX");
            }
            else if(is_float_type((*right_type))) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }
            }

            rvalue->type = create_node_type_with_class_name("long");
        }

        *right_type = create_node_type_with_class_name("long");
    }
    else if((type_identify_with_class_name(left_type, "short") || left_type->mSizeNum == 16)&& left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "bool") || (*right_type)->mSizeNum == 8) && (*right_type)->mPointerNum == 0)
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("short");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastE");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastF");
                }
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 16)) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("short");

                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastG");
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name(*right_type, "protocol_obj_t")) {
                if(rvalue) {
                    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                    rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "castAA");
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
            else if(is_float_type(*right_type)) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("short");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("short");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }
            }

            rvalue->type = create_node_type_with_class_name("short");
        }

        *right_type = create_node_type_with_class_name("short");
    }
    else if((type_identify_with_class_name(left_type, "char") || left_type->mSizeNum == 8) && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((((*right_type)->mSizeNum > 0 && (*right_type)->mSizeNum < 8) || type_identify_with_class_name(*right_type, "bool")) && (*right_type)->mPointerNum == 0) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastH");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastI");
                }
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 8)) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");
                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastJ");
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name(*right_type, "protocol_obj_t")) {
                if(rvalue) {
                    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                    rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "castAB");
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
            else if(is_float_type(*right_type)) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }
            }

            rvalue->type = create_node_type_with_class_name("char");
        }

        *right_type = create_node_type_with_class_name("char");
    }
    else if((type_identify_with_class_name(left_type, "int") || left_type->mSizeNum == 32) && left_type->mNoArrayPointerNum > 0) {
        if(rvalue && rvalue->value) {
            if((*right_type)->mArrayDimentionNum > 0 && (*right_type)->mPointerNum == 0) {
                if(rvalue) {
                    LLVMValueRef indices[3];

                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
                    indices[0] = LLVMConstInt(llvm_type, 0, FALSE);
                    indices[1] = LLVMConstInt(llvm_type, 0, FALSE);
                    
                    LLVMTypeRef llvm_type2 = create_llvm_type_from_node_type(*right_type);

                    LLVMValueRef llvm_value1 = LLVMBuildGEP2(gBuilder, llvm_type2, rvalue->address, indices, 2, "castOGATA");
                    
                    rvalue->value = llvm_value1;
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
/*
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "bool") || ((*right_type)->mSizeNum > 0 && (*right_type)->mSizeNum < 8)))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastKX");

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || ((*right_type)->mSizeNum >=8 && (*right_type)->mSizeNum <= 16)))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastKY");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastL");
                }

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 32)) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastM");

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name(*right_type, "protocol_obj_t")) {
                if(rvalue) {
                    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                    rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "castAC");
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
            else if(is_float_type(*right_type)) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }

                *right_type = clone_node_type(left_type);
            }

            rvalue->type = create_node_type_with_class_name("int");
*/
        }

        *right_type = create_node_type_with_class_name("int");
    }
    else if((type_identify_with_class_name(left_type, "int") || left_type->mSizeNum == 32) && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mArrayDimentionNum > 0 && (*right_type)->mPointerNum == 0) {
                if(rvalue) {
                    LLVMValueRef indices[3];

                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
                    indices[0] = LLVMConstInt(llvm_type, 0, FALSE);
                    indices[1] = LLVMConstInt(llvm_type, 0, FALSE);
                    
                    LLVMTypeRef llvm_type2 = create_llvm_type_from_node_type(*right_type);

                    LLVMValueRef llvm_value1 = LLVMBuildGEP2(gBuilder, llvm_type2, rvalue->address, indices, 2, "castXX1");

                    sNodeType* left_type2 = clone_node_type(left_type);
                    left_type2->mPointerNum++;
                    llvm_type = create_llvm_type_from_node_type(left_type2);

                    LLVMValueRef llvm_value2 = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_value1, llvm_type, "castXX");
                    rvalue->value = LLVMBuildLoad2(gBuilder, LLVMInt32Type(), llvm_value2, "castZZ");
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "bool") || ((*right_type)->mSizeNum > 0 && (*right_type)->mSizeNum < 8)))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastKX");

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || ((*right_type)->mSizeNum >=8 && (*right_type)->mSizeNum <= 16)))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastKY");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastL");
                }

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 32)) {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

                rvalue->value = LLVMBuildTrunc(gBuilder, rvalue->value, llvm_type, "icastM");

                *right_type = clone_node_type(left_type);
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name(*right_type, "protocol_obj_t")) {
                if(rvalue) {
                    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                    rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "castAC");
                    rvalue->type = clone_node_type(left_type);
                }

                *right_type = clone_node_type(left_type);
            }
            else if(is_float_type(*right_type)) {
                if(left_type->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToUI, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMFPToSI, rvalue->value, llvm_type, "icastKO");
                }

                *right_type = clone_node_type(left_type);
            }

            rvalue->type = create_node_type_with_class_name("int");
        }

        *right_type = create_node_type_with_class_name("int");
    }
    else if(type_identify_with_class_name(left_type, "float") && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "double") || type_identify_with_class_name(*right_type, "long_double")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("float");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMFPTrunc, rvalue->value, llvm_type, "icastKO");
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 0))
            {
                if((*right_type)->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("float");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMUIToFP, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("float");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSIToFP, rvalue->value, llvm_type, "icastKO");
                }
            }


            rvalue->type = create_node_type_with_class_name("float");
        }

        *right_type = create_node_type_with_class_name("float");
    }
    else if(type_identify_with_class_name(left_type, "double") && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "long_double")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("double");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMFPTrunc, rvalue->value, llvm_type, "icastKLL");
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "float")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("double");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMFPExt, rvalue->value, llvm_type, "icastKL");
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 0))
            {
                if((*right_type)->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("double");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMUIToFP, rvalue->value, llvm_type, "icastKO");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("double");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSIToFP, rvalue->value, llvm_type, "icastKO");
                }
            }

            rvalue->type = create_node_type_with_class_name("double");
        }

        *right_type = create_node_type_with_class_name("double");
    }
    else if(type_identify_with_class_name(left_type, "long_double") && left_type->mPointerNum == 0)
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "float") || type_identify_with_class_name(*right_type, "double")))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long_double");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMFPExt, rvalue->value, llvm_type, "icastKLL");
            }
            else if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "long") || (*right_type)->mSizeNum > 0))
            {
                if((*right_type)->mUnsigned) {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long_double");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMUIToFP, rvalue->value, llvm_type, "icastKOL");
                }
                else {
                    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long_double");
    
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSIToFP, rvalue->value, llvm_type, "icastKOL");
                }
            }

            rvalue->type = create_node_type_with_class_name("long_double");
        }

        *right_type = create_node_type_with_class_name("long_double");
    }
    else if(type_identify_with_class_name(left_type, "any"))
    {
        if(rvalue && rvalue->value) {
            if((*right_type)->mPointerNum == 0 && (type_identify_with_class_name(*right_type, "int") || type_identify_with_class_name(*right_type, "char") || type_identify_with_class_name(*right_type, "short") || type_identify_with_class_name(*right_type, "bool"))) 
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("any");

                if((*right_type)->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastC");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastD");
                }
            }
            else if((*right_type)->mPointerNum > 0 || type_identify_with_class_name(*right_type, "protocol_obj_t"))
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("any");

                rvalue->value = LLVMBuildCast(gBuilder, LLVMPtrToInt, rvalue->value, llvm_type, "icastKKKKKKK");
            }

            rvalue->type = create_node_type_with_class_name("any");
        }

        *right_type = create_node_type_with_class_name("any");
    }
    else if(type_identify_with_class_name(*right_type, "any"))
    {
        if(rvalue && rvalue->value) {
            if(left_type->mPointerNum == 0 && (type_identify_with_class_name(left_type, "int") || type_identify_with_class_name(left_type, "char") || type_identify_with_class_name(left_type, "short") || type_identify_with_class_name(left_type, "bool"))) 
            {
                LLVMTypeRef llvm_type = create_llvm_type_with_class_name("any");

                if(left_type->mUnsigned) {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMZExt, rvalue->value, llvm_type, "icastC");
                }
                else {
                    rvalue->value = LLVMBuildCast(gBuilder, LLVMSExt, rvalue->value, llvm_type, "icastD");
                }
            }
            else if(left_type->mPointerNum > 0 || type_identify_with_class_name(left_type, "protocol_obj_t"))
            {
                LLVMTypeRef llvm_type = create_llvm_type_from_node_type(left_type);

                rvalue->value = LLVMBuildCast(gBuilder, LLVMIntToPtr, rvalue->value, llvm_type, "icastKKKU");
            }

            rvalue->type = clone_node_type(left_type);
        }

        *right_type = clone_node_type(left_type);
    }
    
    if(left_type->mUnsigned && !(*right_type)->mUnsigned) {
        (*right_type)->mUnsigned = TRUE;
        
        rvalue->type->mUnsigned = TRUE;
    }
    
    return TRUE;
}

BOOL get_const_value_from_node(int* array_size, unsigned int array_size_node, sParserInfo* info)
{
    info->no_output_err_msg = TRUE;
    sCompileInfo cinfo;

    memset(&cinfo, 0, sizeof(sCompileInfo));
    cinfo.pinfo = info;

    LLVMBasicBlockRef prev_block = NULL;
    start_tmp_inst(&prev_block, &cinfo);
    
    if(!compile(array_size_node, &cinfo)) {
        info->no_output_err_msg = FALSE;
        return FALSE;
    }
    info->no_output_err_msg = FALSE;
    
    delete_last_instrunction(prev_block, &cinfo);
    
/*
    if(!check_nullable_type(NULL, cinfo.type, &cinfo)) {
        return TRUE;
    }
*/

    if(gNCHeader) {
        return TRUE;
    }

    sNodeType* node_type = cinfo.type;

    LVALUE llvm_value = *get_value_from_stack(-1);
    dec_stack_ptr(1, &cinfo);
    LLVMValueRef value = llvm_value.value;

    if(LLVMIsConstant(value)) {
        *array_size = LLVMConstIntGetZExtValue(value);
    }
    else {
        fprintf(stderr, "%s %d: can't create const value", info->sname, info->sline);
        return FALSE;
    }

    return TRUE;
}

BOOL create_llvm_struct_type(char* struct_name, sNodeType* node_type, sNodeType* generics_type, BOOL undefined_body)
{
    sCLClass* klass = node_type->mClass;
    
    LLVMTypeRef llvm_type = LLVMGetTypeByName(gModule, struct_name);
    
    BOOL undefined_body2 = FALSE;
    if(llvm_type) {
        undefined_body2 = LLVMIsOpaqueStruct(llvm_type) != 0;
    }
    
    if(llvm_type == NULL) {
        if(undefined_body) {
            LLVMStructCreateNamed(gContext, struct_name);
        }
        else {
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];
    
            int num_fields = 0;
            LLVMTypeRef struct_type = LLVMStructCreateNamed(gContext, struct_name);
            
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);
    
                if(!solve_generics(&field, generics_type)) {
                    fprintf(stderr, "can't solve generics types(1)");
                    return FALSE;
                }
    
                field_types[i] = create_llvm_type_from_node_type(field);
            }
    
            num_fields = klass->mNumFields;
    
            LLVMStructSetBody(struct_type, field_types, num_fields, FALSE);
            return TRUE;
        }
    }
    else {
        if(undefined_body) {
            return TRUE;
        }
        else {
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];

            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);

                if(!solve_generics(&field, generics_type)) {
                    fprintf(stderr, "can't solve generics types(2)");
                    return FALSE;
                }

                field_types[i] = create_llvm_type_from_node_type(field);
            }

            int num_fields = klass->mNumFields;

            LLVMStructSetBody(llvm_type, field_types, num_fields, FALSE);
        }
    }

    return TRUE;
}

uint64_t get_size_from_node_type(sNodeType* node_type, int* alignment)
{
    uint64_t result = 0;
    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
    
    result = get_alloc_size(llvm_type);
/*
    uint64_t result = 0;
    sNodeType* node_type2 = clone_node_type(node_type);

    if(node_type2->mArrayInitializeNum > 0){
        node_type2->mPointerNum--;
        node_type2->mArrayNum[0] = node_type2->mArrayInitializeNum;
        node_type2->mArrayDimentionNum = 1;
    }

    if(node_type2->mSizeNum > 0) {
        if(node_type2->mSizeNum % 8 == 0) {
            result = node_type2->mSizeNum / 8;
        }
        else {
            result = node_type2->mSizeNum / 8 + 1;
        }

        int i;
        for(i=0; i<node_type2->mArrayDimentionNum; i++) {
            result *= node_type2->mArrayNum[i];
        }
    }
    else if(node_type2->mPointerNum > 0) {
#ifdef __32BIT_CPU__
        result = 4;
#else
        result = 8;
#endif

        int i;
        for(i=0; i<node_type2->mArrayDimentionNum; i++) {
            result *= node_type2->mArrayNum[i];
        }
    }
    else {
        if(node_type2->mClass->mUndefinedStructType) {
        }

        if(node_type->mPointerNum == 0 && (node_type->mClass->mFlags & CLASS_FLAGS_STRUCT)) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
            result = get_alloc_size(llvm_type);

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(node_type->mPointerNum == 0 && (node_type->mClass->mFlags & CLASS_FLAGS_UNION)) {
            LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
            result = get_alloc_size(llvm_type);

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "int")){
            result = 4;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "long")){
            result = 8;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "short")){
            result = 2;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "char")){
            result = 1;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "bool")){
            result = 1;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "float")){
            result = 4;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "double")){
            result = 8;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "any")){
            result = 8;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "protocol_obj_t")){
            result = 8;

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "long_double")){
#if defined(__RASPBERRY_PI__)
            result = 8;
#elif defined(__ISH__)
            result = 12;
#else
            result = 16;
#endif

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
        else if(type_identify_with_class_name(node_type, "__uint128_t"))
        {
#if defined(__RASPBERRY_PI__)
            result = 8;
#else
            result = 16;
#endif

            int i;
            for(i=0; i<node_type2->mArrayDimentionNum; i++) {
                result *= node_type2->mArrayNum[i];
            }
        }
    }
*/

    return result;
}

int get_llvm_alignment_from_node_type(sNodeType* node_type)
{
    int result = 0;

    sCLClass* klass = node_type->mClass;

    if(klass->mFlags & CLASS_FLAGS_STRUCT) {
        result = 8;
    }
    else if(klass->mFlags & CLASS_FLAGS_UNION) {
        result = 8;
    }
    else if(node_type->mPointerNum > 0) {
        result = 8;
    }
    else if(type_identify_with_class_name(node_type, "char"))
    {
        result = 1;
    }
    else if(type_identify_with_class_name(node_type, "short"))
    {
        result = 2;
    }
    else if(type_identify_with_class_name(node_type, "int"))
    {
        result = 4;
    }
    else if(type_identify_with_class_name(node_type, "bool"))
    {
        result = 1;
    }
    else if(type_identify_with_class_name(node_type, "lambda"))
    {
        result = 8;
    }

    return result;
}

#ifdef __32BIT_CPU__
BOOL create_llvm_union_type(char* union_name, sNodeType* node_type, sNodeType* generics_type, BOOL undefined_body, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;
    
    LLVMTypeRef llvm_type = LLVMGetTypeByName(gModule, union_name);
    
    BOOL undefined_body2 = FALSE;
    if(llvm_type) {
        undefined_body2 = LLVMIsOpaqueStruct(llvm_type) != 0;
    }
    
    if(llvm_type == NULL) {
        if(undefined_body) {
            LLVMStructCreateNamed(gContext, union_name);
        }
        else {
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];

            uint64_t max_size = 0;

            int num_fields = 1;
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);
    
                if(!solve_generics(&field, generics_type)) {
                    compile_err_msg(info, "can't solve generics types(6)");
                    return FALSE;
                }
    
                int alignment = 0;
                uint64_t size = get_size_from_node_type(field, &alignment);
    
                if(size > max_size) {
                    max_size = size;
    
                    if(max_size > 8) {
                        sNodeType* field_type = create_node_type_with_class_name("long");
                        field_types[0] = create_llvm_type_from_node_type(field_type);
    
                        sNodeType* field_type2 = create_node_type_with_class_name("char");
                        max_size = (max_size + 3) & ~3;
                        field_type2->mArrayNum[0] = max_size-8;
                        field_type2->mArrayDimentionNum = 1;
                        field_types[1] = create_llvm_type_from_node_type(field_type2);
    
                        num_fields = 2;
                    }
                    else {
                        field_types[0] = create_llvm_type_from_node_type(field);
    
                        num_fields = 1;
                    }
                }
            }

            LLVMStructSetBody(llvm_type, field_types, num_fields, FALSE);
        }
    }
    else {
        if(undefined_body) {
            return TRUE;
        }
        else {
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];

            uint64_t max_size = 0;

            int num_fields = 1;
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);
    
                if(!solve_generics(&field, generics_type)) {
                    compile_err_msg(info, "can't solve generics types(6)");
                    return FALSE;
                }
    
                int alignment = 0;
                uint64_t size = get_size_from_node_type(field, &alignment);
    
                if(size > max_size) {
                    max_size = size;
    
                    if(max_size > 8) {
                        sNodeType* field_type = create_node_type_with_class_name("long");
                        field_types[0] = create_llvm_type_from_node_type(field_type);
    
                        sNodeType* field_type2 = create_node_type_with_class_name("char");
                        max_size = (max_size + 3) & ~3;
                        field_type2->mArrayNum[0] = max_size-8;
                        field_type2->mArrayDimentionNum = 1;
                        field_types[1] = create_llvm_type_from_node_type(field_type2);
    
                        num_fields = 2;
                    }
                    else {
                        field_types[0] = create_llvm_type_from_node_type(field);
    
                        num_fields = 1;
                    }
                }
            }

            LLVMStructSetBody(llvm_type, field_types, num_fields, FALSE);
        }
    }

    return TRUE;
}
#else
BOOL create_llvm_union_type(char* union_name, sNodeType* node_type, sNodeType* generics_type, BOOL undefined_body, sCompileInfo* info)
{
    sCLClass* klass = node_type->mClass;
    
    LLVMTypeRef llvm_type = LLVMGetTypeByName(gModule, union_name);
    
    BOOL undefined_body2 = FALSE;
    if(llvm_type) {
        undefined_body2 = LLVMIsOpaqueStruct(llvm_type) != 0;
    }
    
    if(llvm_type == NULL) {
        if(undefined_body) {
            LLVMStructCreateNamed(gContext, union_name);
        }
        else {
            llvm_type = LLVMStructCreateNamed(gContext, union_name);
            
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];

            uint64_t max_size = 0;

            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);

                if(!solve_generics(&field, generics_type)) {
                    compile_err_msg(info, "can't solve generics types(9)");
                    return FALSE;
                }

                int alignment = 0;
                uint64_t size = get_size_from_node_type(field, &alignment);

                if(size > max_size) {
                    field_types[0] = create_llvm_type_from_node_type(field);
                    max_size = size;
                }
            }

            int num_fields = 1;

            LLVMStructSetBody(llvm_type, field_types, num_fields, FALSE);
        }
    }
    else {
        if(undefined_body) {
            return TRUE;
        }
        else {
            LLVMTypeRef field_types[STRUCT_FIELD_MAX];

            uint64_t max_size = 0;

            int i;
            for(i=0; i<klass->mNumFields; i++) {
                sNodeType* field = clone_node_type(klass->mFields[i]);

                if(!solve_generics(&field, generics_type)) {
                    compile_err_msg(info, "can't solve generics types(9)");
                    return FALSE;
                }

                int alignment = 0;
                uint64_t size = get_size_from_node_type(field, &alignment);

                if(size > max_size) {
                    field_types[0] = create_llvm_type_from_node_type(field);
                    max_size = size;
                }
            }

            int num_fields = 1;

            LLVMStructSetBody(llvm_type, field_types, num_fields, FALSE);
        }
    }

    return TRUE;
}
#endif


void compile_err_msg(sCompileInfo* info, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    static int output_num = 0;
    
    info->err_num++;

    if(output_num < COMPILE_ERR_MSG_MAX && !info->pinfo->no_output_err_msg) { // && !gNCHeader) {
        if(info->in_generics_function) {
            fprintf(stdout, "%s:%d generics function error\n", info->generics_sname, info->generics_sline);
            fprintf(stdout, "%s:%d: %s\n", info->sname, info->sline, msg2);
        }
        else if(info->in_inline_function) {
            fprintf(stdout, "%s:%d inline function error\n", info->sname, info->sline);
            fprintf(stdout, "%s:%d: %s\n", info->in_inline_function_name, info->inline_sline, msg2);
        }
        else {
            fprintf(stdout, "%s:%d: %s\n", info->sname, info->sline, msg2);
        }
        output_num++;
    }
    
    info->type = create_node_type_with_class_name("int"); // dummy
}

BOOL compile_block(sNodeBlock* block, BOOL force_hash_result, sCompileInfo* info)
{
    int sline_before = info->pinfo->sline;

    sVarTable* old_table = info->pinfo->lv_table;
    info->pinfo->lv_table = block->mLVTable;

    BOOL has_result = block->mHasResult;
    BOOL function_body = block->mFunctionBody;

    int stack_num_before = info->stack_num;

    BOOL last_expression_is_return = FALSE;

    clear_right_value_objects(info);

    if(block->mNumNodes == 0) {
        free_right_value_objects(info);
        info->type = create_node_type_with_class_name("void");
    }
    else {
        BOOL last_expression_is_return = FALSE;
        int i;
        for(i=0; i<block->mNumNodes; i++) {
            LVALUE llvm_value;
            
            unsigned int node = block->mNodes[i];

            char sname[PATH_MAX];
            xstrncpy(sname, info->sname, VAR_NAME_MAX);
            int sline = info->sline;

            xstrncpy(info->sname, gNodes[node].mSName, PATH_MAX);
            info->sline = gNodes[node].mLine;

            if(gNCDebug) {
                if(info->in_generics_function || info->in_inline_function || info->in_lambda_function || info->empty_function || info->in_automatically_created_function) {
                    setNullCurrentDebugLocation(info->sline, info);
                }
                else {
                    setCurrentDebugLocation(info->sline, info);
                }
            }
            
            if(!compile(node, info)) {
                if(gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
                    show_node_type(info->type);
                    gNCType = FALSE;
                }
                info->pinfo->lv_table = old_table;
                return FALSE;
            }
            
            /// return ///
            if(force_hash_result && i == block->mNumNodes -1) {
                llvm_value = *get_value_from_stack(-1);
            }
            else if(gNCCome && i == block->mNumNodes -1 && function_body && !(type_identify_with_class_name(gComeFunctionResultType, "void") && gComeFunctionResultType->mPointerNum == 0) && type_identify_with_class_name(info->type, "void") && info->type->mPointerNum == 0 && gNodes[node].mNodeType != kNodeTypeReturn && gNodes[node].mNodeType != kNodeTypeGoto)
            
            {
                compile_err_msg(info, "require function result value");
                return FALSE;
            }
            else if(has_result && i == block->mNumNodes -1 && !(type_identify_with_class_name(info->type, "void") 
                    && info->type->mPointerNum == 0))
            {
                if(!(type_identify_with_class_name(gComeFunctionResultType, "void") 
                    && gComeFunctionResultType->mPointerNum == 0 && !gComeFunctionResultType->mMethodGenericsResult)
                    && gNodes[node].mNodeType != kNodeTypeReturn && gNodes[node].mNodeType != kNodeTypeGoto) 
                {
                    dec_stack_ptr(1, info);
                    
                    node = sNodeTree_create_return(node, info->pinfo);
                    
                    if(!compile(node, info)) {
                        if(gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
                            show_node_type(info->type);
                            gNCType = FALSE;
                        }
                        info->pinfo->lv_table = old_table;
                        return FALSE;
                    }
                    
                    last_expression_is_return = TRUE;
                }
            }
/*
            else if(has_result && i == block->mNumNodes -1) {
                if(function_body) {
                    if(!(type_identify_with_class_name(gComeFunctionResultType, "void") 
                        && gComeFunctionResultType->mPointerNum == 0) 
                        && type_identify_with_class_name(info->type, "void")
                        && info->type->mPointerNum == 0)
                    {
                        compile_err_msg(info, "require return value");
                        show_node_type(info->type);
                        return FALSE;
                    }
                    else if(
                        !(type_identify_with_class_name(
                            gComeFunctionResultType, "void") 
                        && gComeFunctionResultType->mPointerNum == 0 
                        && !gComeFunctionResultType->mMethodGenericsResult)
                        && gNodes[node].mNodeType != kNodeTypeReturn 
                        && gNodes[node].mNodeType != kNodeTypeGoto) 
                    {
                        dec_stack_ptr(1, info);
                        
                        node = sNodeTree_create_return(node, info->pinfo);
                        
                        if(!compile(node, info)) {
                            if(gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
                                show_node_type(info->type);
                                gNCType = FALSE;
                            }
                            info->pinfo->lv_table = old_table;
                            return FALSE;
                        }
                        
                        last_expression_is_return = TRUE;
                    }
                }
            }
*/
            else {
                if(gNodes[node].mNodeType == kNodeTypeReturn) {
                    last_expression_is_return = TRUE;
                }
                else {
                    last_expression_is_return = FALSE;
                }
            }

            if(!last_expression_is_return) {
                free_right_value_objects(info);
            }

            xstrncpy(info->sname, sname, VAR_NAME_MAX);
            info->sline = sline;

            arrange_stack(info, stack_num_before);
            
            if(force_hash_result) {
                push_value_to_stack_ptr(&llvm_value, info);
            }
        }

        info->last_expression_is_return = last_expression_is_return;
    }

    if(!info->last_expression_is_return) {
        free_objects(info->pinfo->lv_table, info);
    }

    info->pinfo->sline = sline_before;
    
    if(gNCCome && !check_dangiling_pointer(info->pinfo->lv_table, info)) {
        compile_err_msg(info, "dangiling pointer exits");
        return FALSE;
    }
    
    info->pinfo->lv_table = old_table;
    
    if(gNCType && block->mTerminated) {
        if(!gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
            show_node_type(info->type);
            gNCType = FALSE;
            return FALSE;
        }
        return TRUE;
    }

    return TRUE;
}

BOOL compile_conditional_expression(unsigned int node, sCompileInfo* info)
{
    if(!compile(node, info)) {
        if(gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
            show_node_type(info->type);
            gNCType = FALSE;
        }
        return FALSE;
    }
    
/*
    if(!check_nullable_type(info->type, info)) {
        return TRUE;
    }
*/
    
    if(gNodes[node].mTerminated) {
        if(gNCType && !gNCGlobal && !gNCFunction && !gNCClass && !gNCTypedef) {
            show_node_type(info->type);
            gNCType = FALSE;
        }
        return FALSE;
    }

    return TRUE;
}

BOOL create_generics_struct_type(char* class_name, sNodeType* node_type)
{
    sGenericsStructType* generics_struct_type = get_generics_struct_from_table(class_name);

    if(generics_struct_type) {
        sNodeType* generics_type = clone_node_type(node_type);
        sNodeType* struct_type = clone_node_type(generics_struct_type->mType);

        if(!solve_generics(&struct_type, generics_type)) {
            return FALSE;
        }

        char struct_name[VAR_NAME_MAX];
        create_generics_struct_name(struct_name, VAR_NAME_MAX, generics_type);

        BOOL undefined_body = FALSE;
        create_llvm_struct_type(struct_name, generics_type, generics_type, undefined_body);
    }

    return TRUE;
}


void set_debug_info_to_variable(LLVMValueRef value, sNodeType* node_type, char* name, int sline, sCompileInfo* info)
{
    if(gNCDebug && !info->in_generics_function && !info->in_inline_function && !info->in_lambda_function && !info->empty_function && !info->in_thread_function && !info->in_automatically_created_function) {
        char cwd[PATH_MAX];
        getcwd(cwd, PATH_MAX);

        char directory[PATH_MAX];

        snprintf(directory, PATH_MAX, "%s", cwd);

        int directory_len = strlen(directory);
        
        LLVMMetadataRef di_type = create_llvm_debug_type(node_type, info);
        
        int arg_no = 0;
        
        LLVMMetadataRef file = LLVMDIBuilderCreateFile(gDIBuilder, gFName, strlen(gFName), directory, directory_len);
        LLVMMetadataRef scope = info->function_meta_data;
        LLVMMetadataRef llvm_info = LLVMDIBuilderCreateParameterVariable(gDIBuilder
                    , scope
                    , name
                    , strlen(name)
                    , arg_no
                    , file
                    , sline
                    , (LLVMMetadataRef)di_type
                    , FALSE
                    , 0);
        
        LLVMMetadataRef expr = LLVMDIBuilderCreateExpression(gDIBuilder, NULL, 0);
        int colum = 0;
        LLVMMetadataRef scope2 = info->function_meta_data;
        LLVMMetadataRef inlinedat = NULL;
        LLVMMetadataRef loc = LLVMDIBuilderCreateDebugLocation(gContext, sline, colum, scope2, inlinedat);
        
        LLVMDIBuilderInsertDeclareAtEnd(gDIBuilder, value, llvm_info, expr, loc, LLVMGetInsertBlock(gBuilder));
    }
}


static LLVMValueRef craete_null_const_struct(sNodeType* node_type)
{
    sCLClass* klass = node_type->mClass;
    int num_fields = klass->mNumFields;
    
    LLVMValueRef values[STRUCT_FIELD_MAX];
    
    int i;
    for(i=0; i<num_fields; i++) {
        sNodeType* field = klass->mFields[i];
        
        LLVMValueRef zero_value = create_null_value(field);
        
        values[i] = zero_value;
    }
    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
    LLVMValueRef value = LLVMConstNamedStruct(llvm_type, values, num_fields);
    
    return value;
}

static LLVMValueRef craete_null_const_union(sNodeType* node_type)
{
    sCLClass* klass = node_type->mClass;
    int num_fields = 1;
    
    LLVMValueRef values[STRUCT_FIELD_MAX];
    
    sNodeType* max_field = NULL;
    int max_size = 0;
    
    int j;
    for(j=0; j<klass->mNumFields; j++) {
        sNodeType* field = klass->mFields[0];
        
        int alignment = 0;
        uint64_t size = get_size_from_node_type(field, &alignment) * 8;
        
        if(size > max_size) {
            size = max_size;
            max_field = field;
        }
    }
    
    if(max_field == NULL) {
        fprintf(stderr, "empty union\n");
        exit(2);
    }
    
    LLVMValueRef zero_value = create_null_value(max_field);
    
    values[0] = zero_value;
    
    LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
    LLVMValueRef value = LLVMConstNamedStruct(llvm_type, values, num_fields);
    
    return value;
}

LLVMValueRef create_null_value(sNodeType* node_type)
{
    LLVMValueRef zero_value;
    
    LLVMTypeRef llvm_element_type = create_llvm_type_from_node_type(node_type);
    
    if(node_type->mPointerNum > 0)
    {
        zero_value = LLVMConstNull(llvm_element_type);
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_UNION) {
        zero_value = craete_null_const_union(node_type);
    }
    else if(node_type->mClass->mFlags & CLASS_FLAGS_STRUCT) {
        zero_value = craete_null_const_struct(node_type);
    }
    else if(node_type->mArrayDimentionNum == 1) {
        sNodeType* element_type = clone_node_type(node_type);
        element_type->mArrayDimentionNum = 0;
        
        int array_element_num = node_type->mArrayNum[0];
        
        LLVMValueRef values[INIT_ARRAY_MAX];
        int i;
        for(i=0; i<array_element_num; i++) {
            values[i] = create_null_value(element_type);
        }
        
        LLVMTypeRef llvm_element_type = create_llvm_type_from_node_type(element_type);
        zero_value = LLVMConstArray(llvm_element_type, values, array_element_num);
    }
    else if(type_identify_with_class_name(node_type, "float") || type_identify_with_class_name(node_type, "double") || type_identify_with_class_name(node_type, "long_double"))
    {
        zero_value = LLVMConstReal(llvm_element_type, 0.0);
    }
    else if(type_identify_with_class_name(node_type, "lambda")) {
        zero_value = LLVMConstNull(llvm_element_type);
    }
    else {
        zero_value = LLVMConstInt(llvm_element_type, 0, FALSE);
    }
    
    return zero_value;
}
