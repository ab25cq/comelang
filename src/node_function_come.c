#include "common.h"
#include <pthread.h>

int gThreadNum = 0;

sNodeType* gComeFunctionResultType;

unsigned int sNodeTree_create_come_function_call(char* fun_name, unsigned int* params, int num_params, sParserInfo* info)
{
    unsigned int node = alloc_node();

    xstrncpy(gNodes[node].uValue.sFunctionCall.mName, fun_name, VAR_NAME_MAX);
    gNodes[node].uValue.sFunctionCall.mNumParams = num_params;

    int i;
    for(i=0; i<num_params; i++) {
        gNodes[node].uValue.sFunctionCall.mParams[i] = params[i];
    }

    gNodes[node].uValue.sFunctionCall.mMethod = FALSE;
    gNodes[node].uValue.sFunctionCall.mInherit = FALSE;
    
    gNodes[node].mNodeType = kNodeTypeComeFunctionCall;

    gNodes[node].uValue.sFunctionCall.mNumGenerics = info->mNumGenerics;
    for(i=0; i<info->mNumGenerics; i++)
    {
        xstrncpy(gNodes[node].uValue.sFunctionCall.mGenericsTypeNames[i], info->mGenericsTypeNames[i], VAR_NAME_MAX);
    }
    gNodes[node].uValue.sFunctionCall.mVersion = 0;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    xstrncpy(gNodes[node].uValue.sFunctionCall.mImplStructName, info->impl_struct_name, VAR_NAME_MAX);

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_come_function_call(unsigned int node, sCompileInfo* info)
{
    /// rename variables ///
    char fun_name[VAR_NAME_MAX];
    xstrncpy(fun_name, gNodes[node].uValue.sFunctionCall.mName, VAR_NAME_MAX);
    int num_params = gNodes[node].uValue.sFunctionCall.mNumParams;
    unsigned int params[PARAMS_MAX];
    BOOL method = gNodes[node].uValue.sFunctionCall.mMethod;
    BOOL inherit = gNodes[node].uValue.sFunctionCall.mInherit;
    int version = gNodes[node].uValue.sFunctionCall.mVersion;

    /// create thread handler ///
    char thread_var_name[VAR_NAME_MAX];
    snprintf(thread_var_name, VAR_NAME_MAX, "thread%d", gThreadNum);
    
    sNodeType* var_type = get_typedef("pthread_t");
    
    if(var_type == NULL) {
        var_type = create_node_type_with_class_name("pthread_t");
    }
    
    BOOL readonly = FALSE;
    if(!add_variable_to_table(info->pinfo->lv_table, thread_var_name, var_type, readonly, gNullLVALUE, -1, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }
    
    BOOL extern_ = FALSE;
    BOOL global = FALSE;
    unsigned int node2 = sNodeTree_create_define_variable(thread_var_name, extern_, global, info->pinfo);
    
    if(!compile(node2, info)) {
        return FALSE;
    }

    //// thread arg struct ///
    char thread_arg_struct_name[VAR_NAME_MAX];

    snprintf(thread_arg_struct_name, VAR_NAME_MAX, "thread_struct%d", gThreadNum);

    BOOL protocol_ = FALSE;
    sCLClass* thread_arg_struct_class = alloc_struct(thread_arg_struct_name, FALSE, FALSE, NULL, protocol_);

    int num_fields = num_params;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields[STRUCT_FIELD_MAX];
    LLVMValueRef llvm_params[STRUCT_FIELD_MAX];

    int i;
    for(i=0; i<num_params; i++) {
        field_names[i] = calloc(1, sizeof(char)*VAR_NAME_MAX);
        snprintf(field_names[i], VAR_NAME_MAX, "param%d", i);

        params[i] = gNodes[node].uValue.sFunctionCall.mParams[i];
        
        if(!compile(params[i], info)) {
            return FALSE;
        }

        fields[i] = info->type;
    }

    add_fields_to_struct(thread_arg_struct_class, num_fields, field_names, fields);

    sNodeType* thread_arg_struct_type = create_node_type_with_class_pointer(thread_arg_struct_class);
    unsigned int node3 = sNodeTree_struct(thread_arg_struct_type, info->pinfo, info->sname, info->sline, FALSE);

    if(!compile(node3, info)) {
        return FALSE;
    }

    for(i=0; i<num_params; i++) {
        free(field_names[i]);
    }

    /// thread arg ///
    char thread_arg_var_name[VAR_NAME_MAX];

    snprintf(thread_arg_var_name, VAR_NAME_MAX, "thread_arg%d", gThreadNum);
    
    if(!add_variable_to_table(info->pinfo->lv_table, thread_arg_var_name, thread_arg_struct_type, FALSE, gNullLVALUE, -1, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL global2 = FALSE;
    unsigned int node4 = sNodeTree_create_define_variable(thread_arg_var_name, FALSE, global2, info->pinfo);

    if(!compile(node4, info)) {
        return FALSE;
    }

    unsigned int node5 = sNodeTree_create_load_variable(thread_arg_var_name, info->pinfo);

    for(i=0; i<num_params; i++) {
        char var_name[VAR_NAME_MAX];
        snprintf(var_name, VAR_NAME_MAX, "param%d", i);

        unsigned int node = sNodeTree_create_store_field(var_name, node5, params[i], TRUE, info->pinfo);

        if(!compile(node, info)) {
            return FALSE;
        }
    }

    /// create thread fun ///
    char thread_fun_name[VAR_NAME_MAX];
    snprintf(thread_fun_name, VAR_NAME_MAX, "thread_fun%d", gThreadNum);
    
    sParserParam thread_fun_params[PARAMS_MAX];
    
    xstrncpy(thread_fun_params[0].mName, "param", VAR_NAME_MAX);
    thread_fun_params[0].mType = create_node_type_with_class_name("void");
    thread_fun_params[0].mType->mPointerNum++;
    
    int thread_fun_num_params = 1;
    
    sNodeType* thread_fun_result_type = create_node_type_with_class_name("void");
    thread_fun_result_type->mPointerNum++;
    
    char source[1024];
    snprintf(source, 1024, "{ %s* real_param = (%s*)param;", thread_arg_struct_name, thread_arg_struct_name);
    snprintf(source + strlen(source), 1024-strlen(source), "%s(", fun_name);

    for(i=0; i<num_params; i++) {
        snprintf(source + strlen(source), 1024-strlen(source), "real_param->param%d", i);

        if(i != num_params-1) {
            xstrncat(source, ",", 1024);
        }
    }
    
    xstrncat(source, "); }", 1024);

    sParserInfo pinfo;
    memset(&pinfo, 0, sizeof(sParserInfo));
    
    pinfo.p = source;
    char* source2 = source;
    pinfo.source = &source2;
    snprintf(pinfo.sname, PATH_MAX, "thread_fun%d", gThreadNum);
    pinfo.lv_table = init_var_table();
    pinfo.sline = 1;
    
    if(!add_variable_to_table(pinfo.lv_table, thread_fun_params[0].mName, thread_fun_params[0].mType, readonly, gNullLVALUE, -1, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }

    BOOL result_type_is_void = TRUE;
    sNodeBlock* thread_fun_block;
    if(!parse_block_easy(&thread_fun_block, FALSE, result_type_is_void, FALSE, &pinfo))
    {
        return FALSE;
    }
    
    sVarTable* thread_fun_var_table = pinfo.lv_table;
    
    LLVMBasicBlockRef current_block = info->current_block;
    
    BOOL immutable_ = TRUE;

    unsigned int node6 = sNodeTree_create_function(thread_fun_name, "", thread_fun_params, thread_fun_num_params, thread_fun_result_type,  thread_fun_block, FALSE, thread_fun_var_table, "", FALSE, FALSE, FALSE, info->pinfo, FALSE, FALSE, 0, FALSE, 0, "", info->pinfo->sline, immutable_);

    BOOL in_thread_function = info->in_thread_function;
    info->in_thread_function = TRUE;
    
    if(!compile(node6, info)) {
        return FALSE;
    }

    info->in_thread_function = in_thread_function;

    llvm_change_block(current_block, info);

    /// call pthread ///
    char pthread_create_fun_name[VAR_NAME_MAX];
    
    xstrncpy(pthread_create_fun_name, "pthread_create", VAR_NAME_MAX);
    
    int pthread_create_fun_num_params = 4;
    unsigned int pthread_create_fun_params[PARAMS_MAX];
    
    pthread_create_fun_params[0] = sNodeTree_create_load_variable(thread_var_name, info->pinfo);
    pthread_create_fun_params[0] = sNodeTree_create_reffernce(pthread_create_fun_params[0], info->pinfo);
    
    pthread_create_fun_params[1] = sNodeTree_create_null(info->pinfo);
    
    pthread_create_fun_params[2] = sNodeTree_create_load_function(thread_fun_name, info->pinfo, info->pinfo->sline);
    
    pthread_create_fun_params[3] = sNodeTree_create_load_variable(thread_arg_var_name, info->pinfo);
    pthread_create_fun_params[3] = sNodeTree_create_reffernce(pthread_create_fun_params[3], info->pinfo);
    
    BOOL method2 = FALSE;
    BOOL inherit2 = FALSE;
    int version2 = 0;
    
    unsigned int node7 = sNodeTree_create_function_call(pthread_create_fun_name, pthread_create_fun_params, pthread_create_fun_num_params, method2, inherit2, version2, info->pinfo);
    
    if(!compile(node7, info)) {
        return FALSE;
    }

    gThreadNum++;

    return TRUE;
}

unsigned int sNodeTree_create_join(sParserInfo* info)
{
    unsigned int node = alloc_node();
    
    gNodes[node].mNodeType = kNodeTypeJoin;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_join(unsigned int node, sCompileInfo* info)
{
    int i;
    for(i=0; i<gThreadNum; i++) {
        char thread_var_name[VAR_NAME_MAX];

        snprintf(thread_var_name, VAR_NAME_MAX, "thread%d", i);

        /// call pthread ///
        char pthread_join_fun_name[VAR_NAME_MAX];
        
        xstrncpy(pthread_join_fun_name, "pthread_join", VAR_NAME_MAX);
        
        int pthread_join_fun_num_params = 2;
        unsigned int pthread_join_fun_params[PARAMS_MAX];
        
        pthread_join_fun_params[0] = sNodeTree_create_load_variable(thread_var_name, info->pinfo);
        
        pthread_join_fun_params[1] = sNodeTree_create_null(info->pinfo);
        
        BOOL method2 = FALSE;
        BOOL inherit2 = FALSE;
        int version2 = 0;
        
        unsigned int node = sNodeTree_create_function_call(pthread_join_fun_name, pthread_join_fun_params, pthread_join_fun_num_params, method2, inherit2, version2, info->pinfo);
        
        if(!compile(node, info)) {
            return FALSE;
        }
    }

    info->type = create_node_type_with_class_name("void");
    
    return TRUE;
}
