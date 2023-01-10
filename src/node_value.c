#include "common.h"

LLVMValueRef defineStringLiteral(LLVMValueRef* str, const char *sourceString, size_t size ) 
{
    LLVMTypeRef strType = LLVMArrayType( LLVMInt8Type(), size+1 );
    *str = LLVMAddGlobal(gModule, strType, "");
    LLVMSetInitializer(*str, LLVMConstString( sourceString, size+1, TRUE ));
    LLVMSetGlobalConstant(*str, TRUE);
    LLVMSetLinkage(*str, LLVMPrivateLinkage);
    LLVMSetUnnamedAddress(*str, LLVMGlobalUnnamedAddr);
    LLVMSetAlignment(*str, 1);
    
    LLVMValueRef zeroIndex = LLVMConstInt( LLVMInt64Type(), 0, TRUE );
    LLVMValueRef indexes[2] = { zeroIndex, zeroIndex };

    LLVMValueRef gep = LLVMBuildInBoundsGEP2(gBuilder, strType, *str, indexes, 2, "");

    return gep;
}

LLVMValueRef defineWStringLiteral(LLVMValueRef* str, const wchar_t *sourceString, size_t size ) 
{
    LLVMTypeRef strType = LLVMArrayType( LLVMInt32Type(), size+1 );
    *str = LLVMAddGlobal(gModule, strType, "");
    LLVMTypeRef llvm_element_type = create_llvm_type_with_class_name("int");
    LLVMValueRef array_values[INIT_ARRAY_MAX];
    int array_num = size+1;
    
    int i;
    for(i = 0; i < size; i++) {
        array_values[i] = LLVMConstInt( LLVMInt32Type(), sourceString[i], FALSE);
    }
    array_values[i] = LLVMConstInt(LLVMInt32Type(), 0, FALSE);
    
    LLVMValueRef array = LLVMConstArray(llvm_element_type, array_values, array_num);
    LLVMSetInitializer(*str, array);
    LLVMSetGlobalConstant(*str, TRUE);
    LLVMSetLinkage(*str, LLVMPrivateLinkage);
    LLVMSetUnnamedAddress(*str, LLVMGlobalUnnamedAddr);
    LLVMSetAlignment(*str, 4);
    
    LLVMValueRef zeroIndex = LLVMConstInt( LLVMInt64Type(), 0, TRUE );
    LLVMValueRef indexes[2] = { zeroIndex, zeroIndex };

    LLVMValueRef gep = LLVMBuildInBoundsGEP2(gBuilder, strType, *str, indexes, 2, "");

    return gep;
}

unsigned int sNodeTree_create_c_string_value(MANAGED char* value, int len, int sline, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeCString;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    gNodes[node].uValue.sString.mString = MANAGED value;
    gNodes[node].uValue.sString.mLen = len;
    
    return node;
}

BOOL compile_c_string_value(unsigned int node, sCompileInfo* info)
{
    char* buf = gNodes[node].uValue.sString.mString;
    int len = gNodes[node].uValue.sString.mLen;
    
    if(info->pinfo->mBlockLevel == 0) {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
        LLVMValueRef address = NULL;
        LLVMValueRef value = defineStringLiteral(&address, buf, len);
    
        LLVMValueRef value2 = LLVMBuildPointerCast(gBuilder, value, llvm_type, "str");
    
        LVALUE llvm_value;
        llvm_value.value = value2;
        llvm_value.type = create_node_type_with_class_name("char*");
        llvm_value.type->mUnsigned = TRUE;
        llvm_value.address = value2;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
    }
    else {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
        LLVMValueRef address = NULL;
        LLVMValueRef value = defineStringLiteral(&address, buf, len); //LLVMBuildGlobalString(gBuilder, buf, buf);
    
        LLVMValueRef value2 = LLVMBuildPointerCast(gBuilder, value, llvm_type, "str");
    
        LVALUE llvm_value;
        llvm_value.value = value2;
        llvm_value.type = create_node_type_with_class_name("char*");
        llvm_value.type->mUnsigned = TRUE;
        llvm_value.address = value2;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
    }

    info->type = create_node_type_with_class_name("char*");
    info->type->mUnsigned = TRUE;
    info->type->mConstant = TRUE;

    return TRUE;
}

unsigned int sNodeTree_create_wc_string_value(MANAGED wchar_t* value, int len, int sline, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeWCString;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    gNodes[node].uValue.sWString.mWString = MANAGED value;
    gNodes[node].uValue.sWString.mLen = len;
    
    return node;
}

BOOL compile_wc_string_value(unsigned int node, sCompileInfo* info)
{
    wchar_t* buf = gNodes[node].uValue.sWString.mWString;
    int len = gNodes[node].uValue.sWString.mLen;
    
    if(info->pinfo->mBlockLevel == 0) {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int*");
        
        LLVMValueRef str = NULL;
        LLVMValueRef value = defineWStringLiteral(&str, buf, len);
    
        LLVMValueRef value2 = LLVMBuildPointerCast(gBuilder, value, llvm_type, "wstr");
    
        LVALUE llvm_value;
        llvm_value.value = value2;
        llvm_value.type = create_node_type_with_class_name("int*");
        llvm_value.address = value2;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
    }
    else {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int*");
        
        LLVMValueRef str = NULL;
        LLVMValueRef value = defineWStringLiteral(&str, buf, len); //LLVMBuildGlobalString(gBuilder, buf, buf);
    
        LLVMValueRef value2 = LLVMBuildPointerCast(gBuilder, value, llvm_type, "wstr");
    
        LVALUE llvm_value;
        llvm_value.value = value2;
        llvm_value.type = create_node_type_with_class_name("int*");
        llvm_value.address = value2;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
    }

    info->type = create_node_type_with_class_name("int*");

    return TRUE;
}

unsigned int sNodeTree_create_int_value(int value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeIntValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mIntValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_int_value(unsigned int node, sCompileInfo* info)
{
    int value = gNodes[node].uValue.mIntValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

    llvm_value.value = LLVMConstInt(llvm_type, value, TRUE);
    llvm_value.type = create_node_type_with_class_name("int");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("int");

    return TRUE;
}

unsigned int sNodeTree_create_uint_value(int value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeUIntValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mIntValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_uint_value(unsigned int node, sCompileInfo* info)
{
    int value = gNodes[node].uValue.mIntValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

    llvm_value.value = LLVMConstInt(llvm_type, value, FALSE);
    llvm_value.type = create_node_type_with_class_name("int");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("int");
    info->type->mUnsigned = TRUE;

    return TRUE;
}

unsigned int sNodeTree_create_long_value(long long int value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLongValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mLongValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_long_value(unsigned long long int node, sCompileInfo* info)
{
    long long int value = gNodes[node].uValue.mLongValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");

    llvm_value.value = LLVMConstInt(llvm_type, value, TRUE);
    llvm_value.type = create_node_type_with_class_name("long");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("long");

    return TRUE;
}

unsigned int sNodeTree_create_ulong_value(unsigned long long int value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeULongValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mULongValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_ulong_value(unsigned long long int node, sCompileInfo* info)
{
    long long int value = gNodes[node].uValue.mLongValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("long");

    llvm_value.value = LLVMConstInt(llvm_type, value, FALSE);
    llvm_value.type = create_node_type_with_class_name("long");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("long");
    info->type->mUnsigned = TRUE;

    return TRUE;
}

unsigned int sNodeTree_create_true(sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeTrue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_true(unsigned int node, sCompileInfo* info)
{
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");

    LVALUE llvm_value;
    llvm_value.value = LLVMConstInt(llvm_type, 1, FALSE);
    llvm_value.type = create_node_type_with_class_name("bool");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("bool");

    return TRUE;
}


unsigned int sNodeTree_create_null(sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeNull;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_null(unsigned int node, sCompileInfo* info)
{
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

    LVALUE llvm_value;
    llvm_value.value = LLVMConstInt(llvm_type, 0, FALSE);
    LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("void*");
    llvm_value.value = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_value.value, llvm_type2, "castAH");
    llvm_value.type = create_node_type_with_class_name("void*");
    llvm_value.type->mNullable = TRUE;
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("void*");
    info->type->mNullable = TRUE;

    return TRUE;
}


unsigned int sNodeTree_create_false(sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeFalse;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_false(unsigned int node, sCompileInfo* info)
{
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");

    LVALUE llvm_value;
    llvm_value.value = LLVMConstInt(llvm_type, 0, FALSE);
    llvm_value.type = create_node_type_with_class_name("bool");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("bool");

    return TRUE;
}

BOOL compile_char_value(unsigned int node, sCompileInfo* info)
{
    unsigned char c = gNodes[node].uValue.mCharValue;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char");

    LVALUE llvm_value;
    llvm_value.value = LLVMConstInt(llvm_type, c, FALSE);
    llvm_value.type = create_node_type_with_class_name("char");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("char");

    return TRUE;
}


unsigned int sNodeTree_create_float_value(float value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeFloatValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mFloatValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_float_value(unsigned int node, sCompileInfo* info)
{
    float value = gNodes[node].uValue.mFloatValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("float");

    llvm_value.value = LLVMConstReal(llvm_type, (double)value);
    llvm_value.type = create_node_type_with_class_name("float");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("float");

    return TRUE;
}

unsigned int sNodeTree_create_double_value(double value, sParserInfo* info)
{
    unsigned node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeDoubleValue;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.mDoubleValue = value;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_double_value(unsigned int node, sCompileInfo* info)
{
    double value = gNodes[node].uValue.mDoubleValue;

    LVALUE llvm_value;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("double");

    llvm_value.value = LLVMConstReal(llvm_type, value);
    llvm_value.type = create_node_type_with_class_name("double");
    llvm_value.var = NULL;
    llvm_value.address = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("double");

    return TRUE;
}

unsigned int sNodeTree_create_regex_value(MANAGED char* value, BOOL global, BOOL ignore_case, int sline, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeRegex;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    gNodes[node].uValue.sRegex.mString = MANAGED value;
    gNodes[node].uValue.sRegex.mGlobal = global;
    gNodes[node].uValue.sRegex.mIgnoreCase = ignore_case;

    return node;
}

unsigned int sNodeTree_create_wcharacter_value(wchar_t c, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeLChar;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    gNodes[node].uValue.mWCharValue = c;

    return node;
}

BOOL compile_wchar_value(unsigned int node, sCompileInfo* info)
{
    int c = gNodes[node].uValue.mWCharValue;

    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("int");

    LVALUE llvm_value;
    llvm_value.value = LLVMConstInt(llvm_type, c, FALSE);
    llvm_value.type = create_node_type_with_class_name("int");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("int");

    return TRUE;
}

BOOL compile_regex_value(unsigned int node, sCompileInfo* info)
{
    char* buf = gNodes[node].uValue.sRegex.mString;
    BOOL global = gNodes[node].uValue.sRegex.mGlobal;
    BOOL ignore_case = gNodes[node].uValue.sRegex.mIgnoreCase;
    
    int num_params = 3;
    
    LLVMValueRef llvm_params[PARAMS_MAX];
    memset(llvm_params, 0, sizeof(LLVMValueRef)*PARAMS_MAX);
    LLVMTypeRef llvm_type = create_llvm_type_with_class_name("bool");
    
    LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("char*");

    LLVMValueRef value = LLVMBuildPointerCast(gBuilder, LLVMBuildGlobalString(gBuilder, buf, buf), llvm_type2, "str");
    
    llvm_params[0] = value;
    llvm_params[1] = LLVMConstInt(llvm_type, global, FALSE);
    llvm_params[2] = LLVMConstInt(llvm_type, ignore_case, FALSE);

    char* fun_name = "charp_to_regex_flags";
    LLVMValueRef llvm_fun = LLVMGetNamedFunction(gModule, fun_name);
    
    if(llvm_fun == NULL) {
        compile_err_msg(info, "require char_to_regex_flags\n");
        return FALSE;
    }


    sNodeType* result_type = create_node_type_with_class_name("regex_struct");
    result_type->mPointerNum = 1;

    LLVMTypeRef llvm_param_types[PARAMS_MAX];

    llvm_param_types[0] = create_llvm_type_with_class_name("char*");
    llvm_param_types[1] = create_llvm_type_with_class_name("bool");
    llvm_param_types[2] = create_llvm_type_with_class_name("bool");

    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
        
    BOOL var_arg = FALSE;
    
    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);

    LLVMValueRef result = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "fun_resultOOO");
    
    sNodeType* regex_type = create_node_type_with_class_name("regex_struct");
    if(!gNCGC) {
        regex_type->mHeap = TRUE;
    }
    regex_type->mPointerNum = 1;

    /// result ///
    LVALUE llvm_value;
    llvm_value.value = result;
    llvm_value.type = regex_type;
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);
    
    append_object_to_right_values(llvm_value.value, regex_type, info);

    info->type = regex_type;

    return TRUE;
}

unsigned int sNodeTree_create_list(int num_nodes, unsigned int* nodes, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeList;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.sNodes.mNodes = GC_malloc(sizeof(unsigned int)*num_nodes);
    int i;
    for(i=0; i<num_nodes; i++) {
        gNodes[node].uValue.sNodes.mNodes[i] = nodes[i];
    }
    gNodes[node].uValue.sNodes.mNumNodes = num_nodes;
    gNodes[node].uValue.sNodes.mInMacro = FALSE;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_list_value(unsigned int node, sCompileInfo* info)
{
    unsigned int nodes[NODES_MAX];
    int i;
    int num_nodes = gNodes[node].uValue.sNodes.mNumNodes;
    for(i=0; i<num_nodes; i++) {
        nodes[i] = gNodes[node].uValue.sNodes.mNodes[i];
    }
    BOOL in_macro = TRUE;

    sVarTable* old_table = info->pinfo->lv_table;
    BOOL extern_c_lang = FALSE;
    info->pinfo->lv_table = init_block_vtable(old_table, extern_c_lang);

    int stack_num_before = info->stack_num;

    for(i=0; i<num_nodes; i++) {
        unsigned int node = nodes[i];

        xstrncpy(info->sname, gNodes[node].mSName, PATH_MAX);
        info->sline = gNodes[node].mLine;

        if(!compile(node, info)) {
            return FALSE;
        }
        
        if(i == num_nodes -1 && in_macro) {
            LVALUE llvm_value = *get_value_from_stack(-1);
            append_object_to_right_values(llvm_value.value, llvm_value.type, info);
        }
        else {
            arrange_stack(info, stack_num_before);
            
            info->type = create_node_type_with_class_name("void");
        }
    }
    
    info->pinfo->lv_table = old_table;

    return TRUE;
}

unsigned int sNodeTree_create_map(int num_nodes, unsigned int* nodes, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeMap;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.sNodes.mNodes = GC_malloc(sizeof(unsigned int)*num_nodes);
    int i;
    for(i=0; i<num_nodes; i++) {
        gNodes[node].uValue.sNodes.mNodes[i] = nodes[i];
    }
    gNodes[node].uValue.sNodes.mNumNodes = num_nodes;
    gNodes[node].uValue.sNodes.mInMacro = FALSE;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_map_value(unsigned int node, sCompileInfo* info)
{
    int num_nodes = gNodes[node].uValue.sNodes.mNumNodes;
    unsigned int nodes[NODES_MAX];
    int i;
    for(i=0; i<num_nodes; i++) {
        nodes[i] = gNodes[node].uValue.sNodes.mNodes[i];
    }
    BOOL in_macro = TRUE;

    sVarTable* old_table = info->pinfo->lv_table;
    BOOL extern_c_lang = FALSE;
    info->pinfo->lv_table = init_block_vtable(old_table, extern_c_lang);

    int stack_num_before = info->stack_num;

    for(i=0; i<num_nodes; i++) {
        unsigned int node = nodes[i];

        xstrncpy(info->sname, gNodes[node].mSName, PATH_MAX);
        info->sline = gNodes[node].mLine;

        if(!compile(node, info)) {
            return FALSE;
        }
        
        if(i == num_nodes -1 && in_macro) {
            LVALUE llvm_value = *get_value_from_stack(-1);
            append_object_to_right_values(llvm_value.value, llvm_value.type, info);
        }
        else {
            arrange_stack(info, stack_num_before);
            
            info->type = create_node_type_with_class_name("void");
        }
    }
    
    info->pinfo->lv_table = old_table;

    return TRUE;
}

