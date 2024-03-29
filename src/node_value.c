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
        
        char* p = buf;
        sBuf buf2;
        sBuf_init(&buf2);
        sBuf_append_char(&buf2, '"');
        while(*p) {
            switch(*p) {
                case '\n':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'n');
                    break;

                case '\t':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 't');
                    break;

                case '\r':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'r');
                    break;

                case '\v':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'v');
                    break;

                case '\f':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'f');
                    break;

                case '\a':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'a');
                    break;

                case '\b':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, 'b');
                    break;

                case '\\':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, '\\');
                    break;

                case '"':
                    sBuf_append_char(&buf2, '\\');
                    sBuf_append_char(&buf2, '"');
                    break;

                default:
                    sBuf_append_char(&buf2, *p);
                    break;
                    
            }
            p++;
        }
        sBuf_append_char(&buf2, '"');
        llvm_value.c_value = GC_strdup(buf2.mBuf);
        llvm_value.type = create_node_type_with_class_name("char*");
        llvm_value.type->mUnsigned = TRUE;
        llvm_value.address = value2;
        llvm_value.var = NULL;
    
        push_value_to_stack_ptr(&llvm_value, info);
        
        free(buf2.mBuf);
    }
    else {
        LLVMTypeRef llvm_type = create_llvm_type_with_class_name("char*");
        
        LLVMValueRef address = NULL;
        LLVMValueRef value = defineStringLiteral(&address, buf, len); //LLVMBuildGlobalString(gBuilder, buf, buf);
    
        LLVMValueRef value2 = LLVMBuildPointerCast(gBuilder, value, llvm_type, "str");
    
        LVALUE llvm_value;
        llvm_value.value = value2;
        llvm_value.c_value = xsprintf("\"%s\"", buf);
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
        llvm_value.c_value = xsprintf("L\"%ls\"", buf);
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
        llvm_value.c_value = xsprintf("L\"%ls\"", buf);
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
    llvm_value.c_value = xsprintf("%d", value);
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
    llvm_value.c_value = xsprintf("%u", value);
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
    llvm_value.c_value = xsprintf("%ld", value);
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
    llvm_value.c_value = xsprintf("%ld", value);
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
    llvm_value.c_value = xsprintf("1");
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
    llvm_value.c_value = xsprintf("((void*)0)");
    LLVMTypeRef llvm_type2 = create_llvm_type_with_class_name("void*");
    llvm_value.value = LLVMBuildCast(gBuilder, LLVMBitCast, llvm_value.value, llvm_type2, "castAH");
    llvm_value.type = create_node_type_with_class_name("void*");
    llvm_value.address = NULL;
    llvm_value.var = NULL;

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = create_node_type_with_class_name("void*");

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
    llvm_value.c_value = xsprintf("0");
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
    switch(c) {
        case '\0':
            llvm_value.c_value = xsprintf("'\\0'");
            break;

        case '\n':
            llvm_value.c_value = xsprintf("'\\n'");
            break;

        case '\t':
            llvm_value.c_value = xsprintf("'\\t'");
            break;

        case '\r':
            llvm_value.c_value = xsprintf("'\\r'");
            break;

        case '\v':
            llvm_value.c_value = xsprintf("'\\v'");
            break;

        case '\f':
            llvm_value.c_value = xsprintf("'\\f'");
            break;

        case '\a':
            llvm_value.c_value = xsprintf("'\\a'");
            break;

        case '\b':
            llvm_value.c_value = xsprintf("'\\b'");
            break;

        default:
            llvm_value.c_value = xsprintf("'%c'", c);
            break;
    }

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
    llvm_value.c_value = xsprintf("%lf", (double)value);
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

    llvm_value.c_value = xsprintf("%lf", value);
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
    llvm_value.c_value = xsprintf("%lc", c);
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
    
    char* buf2 = calloc(1, sizeof(char)*(strlen(buf)+1));
    
    char* p = buf;
    char* p2 = buf2;
    while(*p) {
        if(*p == '\\') {
            *p2++ = *p;
            *p2++ = *p;
            p++;
        }
        else {
            *p2++ = *p++;
        }
    }
    *p2 = '\0';
    
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
    
    char* var_name = append_object_to_right_values(llvm_value.value, regex_type, info);
    llvm_value.c_value = xsprintf("(%s = charp_to_regex_flags(\"%s\", %s, %s))", var_name, buf2, global ? "1":"0", ignore_case ? "1":"0");

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = regex_type;
    
    free(buf2);

    return TRUE;
}

unsigned int sNodeTree_create_list(int num_elements, unsigned int* elements, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeList;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.sNodes.mNodes = GC_malloc(sizeof(unsigned int)*num_elements);
    int i;
    for(i=0; i<num_elements; i++) {
        gNodes[node].uValue.sNodes.mNodes[i] = elements[i];
    }
    gNodes[node].uValue.sNodes.mNumNodes = num_elements;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_list_value(unsigned int node, sCompileInfo* info)
{
    unsigned int nodes[LIST_ELEMENT_MAX];
    int i;
    int num_nodes = gNodes[node].uValue.sNodes.mNumNodes;
    for(i=0; i<num_nodes; i++) {
        nodes[i] = gNodes[node].uValue.sNodes.mNodes[i];
    }
    
    sNodeType* element_type = NULL;
    LVALUE elements_value[LIST_ELEMENT_MAX];
    
    sBuf buf;
    sBuf_init(&buf);
    
    unsigned int pre_node = nodes[0];

    if(!compile(pre_node, info)) {
        return FALSE;
    }
    
    LVALUE pre_node_value = *get_value_from_stack(-1);
    sNodeType* pre_node_type = clone_node_type(info->type);

    if(gNCTranspile && pre_node_type->mHeap) {
        free_object(pre_node_type, pre_node_value.value, pre_node_value.c_value, TRUE, info);
    }

    dec_stack_ptr(1, info);
    
    if(gNCTranspile) {
        remove_object_from_right_values(pre_node_value.value, info);
    }
    
    sNodeType* node_type = clone_node_type(info->type);
    
    static int list_num = 0;
    sBuf_append_str(&buf, xsprintf("%s _list_element%d[%d];\n", make_type_name_string(node_type), ++list_num, num_nodes));
    int list_num2 = list_num;
    
    for(i=0; i<num_nodes; i++) {
        unsigned int node = nodes[i];

        if(!compile(node, info)) {
            return FALSE;
        }
        
        if(!(type_identify(info->type, pre_node_type) && info->type->mPointerNum == pre_node_type->mPointerNum && info->type->mHeap == pre_node_type->mHeap))
        {
            compile_err_msg(info, "invalid list type");
            show_node_type(pre_node_type);
            show_node_type(info->type);
            return TRUE;
        }
        
        if(element_type == NULL) {
            element_type = clone_node_type(info->type);
        }
        
        elements_value[i] = *get_value_from_stack(-1);
        
        if(element_type->mHeap && (gNodes[node].mNodeType == kNodeTypeLoadField || gNodes[node].mNodeType == kNodeTypeLoadVariable || gNodes[node].mNodeType == kNodeTypeNormalBlock))
        {
            increment_ref_count(elements_value[i].value, element_type, elements_value[i].c_value, info);
        }
        
        sBuf_append_str(&buf, xsprintf("_list_element%d[%d] = %s;\n", list_num2, i, elements_value[i].c_value));
        
        dec_stack_ptr(1, info);
        
        remove_object_from_right_values(elements_value[i].value, info);
    }
    
    add_come_code(info, "%s", buf.mBuf);
    
    sNodeType* list_type = create_node_type_with_class_name("list");
    
    if(list_type == NULL) {
        compile_err_msg(info, "require to include <comelang.h>");
        return TRUE;
    }
    list_type->mPointerNum = 1;
    list_type->mNumGenericsTypes = 1;
    list_type->mGenericsTypes[0] = clone_node_type(element_type);
    if(!gNCGC) {
        list_type->mHeap = TRUE;
    }
    
    unsigned int object_num = 0;
    BOOL gc = gNCGC;
    unsigned int node2 = sNodeTree_create_object(list_type, object_num, 0, NULL, info->sname, info->sline, gc, info->pinfo);
    
    if(!compile(node2, info)) {
        return FALSE;
    }
    
    LVALUE list_value = *get_value_from_stack(-1);
    
    remove_object_from_right_values(list_value.value, info);
    dec_stack_ptr(1, info);

    LLVMValueRef llvm_fun = NULL;
    
    char fun_name[VAR_NAME_MAX];
    snprintf(fun_name, VAR_NAME_MAX, "list_initialize_with_values");
    
    sFunction* fun = get_function_from_table(fun_name);
    
    if(fun == NULL) {
        compile_err_msg(info, "require to include comelang.h");
        return TRUE;
    }
    
    sNodeType* generics_type = clone_node_type(list_type);
    int num_method_generics_types = 0;
    sNodeType** method_generics_types = NULL;
    BOOL immutable_ = FALSE;

    char* llvm_fun_name = NULL;
    if(!create_generics_function(&llvm_fun, &llvm_fun_name, fun, fun_name, generics_type, num_method_generics_types, method_generics_types, immutable_, info)) {
        return FALSE;
    }
    
    int num_params = 3;
    
    int num_elements = num_nodes;
    LLVMValueRef llvm_params[PARAMS_MAX];
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
    LLVMTypeRef llvm_element_type = create_llvm_type_from_node_type(element_type);
    
    LLVMValueRef len_value = LLVMConstInt(LLVMInt32Type(), num_elements, FALSE);
    
    LLVMValueRef elements_array2 = LLVMBuildArrayAlloca(gBuilder, llvm_element_type, len_value, "list");
    
    for(i=0; i<num_elements; i++) {
        LLVMValueRef index_value = LLVMConstInt(LLVMInt32Type(), i, FALSE);
        LLVMValueRef load_element_addresss = LLVMBuildGEP2(gBuilder, llvm_element_type, elements_array2, &index_value, 1, "gepBXOH");

        LLVMBuildStore(gBuilder, elements_value[i].value, load_element_addresss);
    }
    
    sNodeType* element_pointer_type = clone_node_type(element_type);
    element_pointer_type->mPointerNum++;
    LLVMTypeRef llvm_element_pointer_type = create_llvm_type_from_node_type(element_pointer_type);
    
    LLVMValueRef elements_array3 = LLVMBuildCast(gBuilder, LLVMBitCast, elements_array2, llvm_element_pointer_type, "castAAAAA");
    
    llvm_params[0] = list_value.value;
    llvm_params[1] = LLVMConstInt(LLVMInt32Type(), num_elements, FALSE);
    llvm_params[2] = elements_array3;
    
    sNodeType* result_type = clone_node_type(list_type);
    
    llvm_param_types[0] = create_llvm_type_from_node_type(list_type);
    llvm_param_types[1] = LLVMInt32Type();
    llvm_param_types[2] = LLVMPointerType(llvm_element_type, 0);
    
    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
    
    BOOL var_arg = FALSE;
    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    
    free(buf.mBuf);
    
    LVALUE llvm_value;
    llvm_value.value = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "fun_result2");
    
    llvm_value.type = clone_node_type(list_type);
    llvm_value.address = NULL;
    llvm_value.var = NULL;
    
    char* var_name = append_object_to_right_values(llvm_value.value, list_type, info);
    
    llvm_value.c_value = xsprintf("(%s = %s(%s, %d, _list_element%d))", var_name, llvm_fun_name, list_value.c_value, num_elements, list_num2);

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = clone_node_type(list_type);
    
    return TRUE;
}

unsigned int sNodeTree_create_map(int num_keys, unsigned int* keys, unsigned int* values, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeMap;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    int i;
    for(i=0; i<num_keys; i++) {
        gNodes[node].uValue.sMap.mKeys[i] = keys[i];
        gNodes[node].uValue.sMap.mValues[i] = values[i];
    }
    gNodes[node].uValue.sMap.mNumKeys = num_keys;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_map_value(unsigned int node, sCompileInfo* info)
{
    int num_keys = gNodes[node].uValue.sMap.mNumKeys;
    unsigned int keys[LIST_ELEMENT_MAX];
    unsigned int values[LIST_ELEMENT_MAX];
    int i;
    for(i=0; i<num_keys; i++) {
        keys[i] = gNodes[node].uValue.sMap.mKeys[i];
        values[i] = gNodes[node].uValue.sMap.mValues[i];
    }
    
    unsigned int pre_node = keys[0];

    if(!compile(pre_node, info)) {
        return FALSE;
    }
    
    LVALUE pre_node_value = *get_value_from_stack(-1);
    sNodeType* pre_node_type = clone_node_type(info->type);

    if(gNCTranspile && pre_node_type->mHeap) {
        free_object(pre_node_type, pre_node_value.value, pre_node_value.c_value, TRUE, info);
    }

    if(gNCTranspile) {
        remove_object_from_right_values(pre_node_value.value, info);
    }
    dec_stack_ptr(1, info);
    
    unsigned int pre_node2 = values[0];

    if(!compile(pre_node2, info)) {
        return FALSE;
    }
    
    LVALUE pre_node_value2 = *get_value_from_stack(-1);
    
    sNodeType* pre_node_type2 = clone_node_type(info->type);
    if(gNCTranspile && pre_node_type2->mHeap) {
        free_object(pre_node_type2, pre_node_value2.value, pre_node_value2.c_value, TRUE, info);
    }
    
    if(gNCTranspile) {
        remove_object_from_right_values(pre_node_value2.value, info);
    }
    
    dec_stack_ptr(1, info);
    
    static int map_num = 0;
    
    sBuf buf;
    sBuf_init(&buf);
    
    sBuf_append_str(&buf, xsprintf("%s _map_keys_value%d[%d];\n", make_type_name_string(pre_node_type), ++map_num, num_keys));
    int map_num2 = map_num;
    sBuf_append_str(&buf, xsprintf("%s _map_values_value%d[%d];\n", make_type_name_string(pre_node_type2), map_num2, num_keys));
    
    sNodeType* node_type = clone_node_type(info->type);
    
    sNodeType* key_type = NULL;
    sNodeType* value_type = NULL;
    LVALUE key_values[LIST_ELEMENT_MAX];
    LVALUE value_values[LIST_ELEMENT_MAX];
    
    for(i=0; i<num_keys; i++) {
        unsigned int key = keys[i];

        if(!compile(key, info)) {
            return FALSE;
        }
        
        if(!(type_identify(info->type, pre_node_type) && info->type->mPointerNum == pre_node_type->mPointerNum && info->type->mHeap == pre_node_type->mHeap))
        {
            compile_err_msg(info, "invalid map type");
            show_node_type(pre_node_type);
            show_node_type(info->type);
            return TRUE;
        }
        
        if(key_type == NULL) {
            key_type = clone_node_type(info->type);
        }
        
        key_values[i] = *get_value_from_stack(-1);
        dec_stack_ptr(1, info);
        
        if(key_type->mHeap && (gNodes[key].mNodeType == kNodeTypeLoadField || gNodes[key].mNodeType == kNodeTypeLoadVariable || gNodes[key].mNodeType == kNodeTypeNormalBlock))
        {
            increment_ref_count(key_values[i].value, key_type, key_values[i].c_value, info);
        }
        
        remove_object_from_right_values(key_values[i].value, info);
        
        //sBuf_append_str(&buf, xsprintf("_map_keys_value%d[%d] = %s;\n", map_num2, i, key_values[i].c_value));
        
        unsigned int value = values[i];

        if(!compile(value, info)) {
            return FALSE;
        }
        
        if(!(type_identify(info->type, pre_node_type2) && info->type->mPointerNum == pre_node_type2->mPointerNum && info->type->mHeap == pre_node_type2->mHeap))
        {
            compile_err_msg(info, "invalid map type");
            show_node_type(pre_node_type2);
            show_node_type(info->type);
            return TRUE;
        }
        
        if(value_type == NULL) {
            value_type = clone_node_type(info->type);
        }
        
        value_values[i] = *get_value_from_stack(-1);
        dec_stack_ptr(1, info);
        
        if(value_type->mHeap && (gNodes[value].mNodeType == kNodeTypeLoadField || gNodes[value].mNodeType == kNodeTypeLoadVariable || gNodes[value].mNodeType == kNodeTypeNormalBlock))
        {
            increment_ref_count(value_values[i].value, value_type, value_values[i].c_value, info);
        }
        
        sBuf_append_str(&buf, xsprintf("_map_values_value%d[%d] = %s;\n", map_num2, i, value_values[i].c_value));
        
        remove_object_from_right_values(value_values[i].value, info);
    }
    
    add_come_code(info, "%s", buf.mBuf);
    
    free(buf.mBuf);
    
    sNodeType* map_type = create_node_type_with_class_name("map");
    map_type->mPointerNum = 1;
    map_type->mNumGenericsTypes = 2;
    map_type->mGenericsTypes[0] = clone_node_type(key_type);
    map_type->mGenericsTypes[1] = clone_node_type(value_type);
    if(!gNCGC) {
        map_type->mHeap = TRUE;
    }
    
    unsigned int object_num = 0;
    BOOL gc = gNCGC;
    unsigned int node2 = sNodeTree_create_object(map_type, object_num, 0, NULL, info->sname, info->sline, gc, info->pinfo);
    
    if(!compile(node2, info)) {
        return FALSE;
    }
    
    LVALUE map_value = *get_value_from_stack(-1);
    
    remove_object_from_right_values(map_value.value, info);
    dec_stack_ptr(1, info);

    LLVMValueRef llvm_fun = NULL;
    
    char fun_name[VAR_NAME_MAX];
    snprintf(fun_name, VAR_NAME_MAX, "map_initialize_with_values");
    
    sFunction* fun = get_function_from_table(fun_name);
    
    if(fun == NULL) {
        compile_err_msg(info, "requilre include comelang.h");
        return TRUE;
    }
    
    sNodeType* generics_type = clone_node_type(map_type);
    int num_method_generics_types = 0;
    sNodeType** method_generics_types = NULL;
    BOOL immutable_ = FALSE;

    char* llvm_fun_name = NULL;
    if(!create_generics_function(&llvm_fun, &llvm_fun_name, fun, fun_name, generics_type, num_method_generics_types, method_generics_types, immutable_, info)) {
        return FALSE;
    }
    
    int num_params = 4;
    
    LLVMValueRef llvm_params[PARAMS_MAX];
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
    LLVMTypeRef llvm_key_type = create_llvm_type_from_node_type(key_type);
    
    LLVMValueRef len_value = LLVMConstInt(LLVMInt32Type(), num_keys, FALSE);
    
    LLVMValueRef key_array2 = LLVMBuildArrayAlloca(gBuilder, llvm_key_type, len_value, "map_key");
    
    for(i=0; i<num_keys; i++) {
        LLVMValueRef index_value = LLVMConstInt(LLVMInt32Type(), i, FALSE);
        LLVMValueRef load_element_addresss = LLVMBuildGEP2(gBuilder, llvm_key_type, key_array2, &index_value, 1, "gepBXOH");

        LLVMBuildStore(gBuilder, key_values[i].value, load_element_addresss);
    }
    
    sNodeType* key_pointer_type = clone_node_type(key_type);
    key_pointer_type->mPointerNum++;
    LLVMTypeRef llvm_key_pointer_type = create_llvm_type_from_node_type(key_pointer_type);
    
    LLVMValueRef key_array3 = LLVMBuildCast(gBuilder, LLVMBitCast, key_array2, llvm_key_pointer_type, "castAAAAA");
    
    LLVMTypeRef llvm_value_type = create_llvm_type_from_node_type(value_type);
    
    LLVMValueRef value_array2 = LLVMBuildArrayAlloca(gBuilder, llvm_value_type, len_value, "map_key");
    
    for(i=0; i<num_keys; i++) {
        LLVMValueRef index_value = LLVMConstInt(LLVMInt32Type(), i, FALSE);
        LLVMValueRef load_element_addresss = LLVMBuildGEP2(gBuilder, llvm_value_type, value_array2, &index_value, 1, "gepBXOH");

        LLVMBuildStore(gBuilder, value_values[i].value, load_element_addresss);
    }
    
    sNodeType* value_pointer_type = clone_node_type(value_type);
    value_pointer_type->mPointerNum++;
    LLVMTypeRef llvm_value_pointer_type = create_llvm_type_from_node_type(value_pointer_type);
    
    LLVMValueRef value_array3 = LLVMBuildCast(gBuilder, LLVMBitCast, value_array2, llvm_value_pointer_type, "castAAAAA");
    
    
    llvm_params[0] = map_value.value;
    llvm_params[1] = LLVMConstInt(LLVMInt32Type(), num_keys, FALSE);
    llvm_params[2] = key_array3;
    llvm_params[3] = value_array3;
    
    sNodeType* result_type = clone_node_type(map_type);
    
    llvm_param_types[0] = create_llvm_type_from_node_type(map_type);
    llvm_param_types[1] = LLVMInt32Type();
    llvm_param_types[2] = LLVMPointerType(llvm_key_type, 0);
    llvm_param_types[3] = LLVMPointerType(llvm_value_type, 0);
    
    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
    
    BOOL var_arg = FALSE;
    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    
    LVALUE llvm_value;
    llvm_value.value = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "fun_result2");
    llvm_value.type = clone_node_type(map_type);
    llvm_value.address = NULL;
    llvm_value.var = NULL;
    
    char* var_name = append_object_to_right_values(llvm_value.value, map_type, info);
    llvm_value.c_value = xsprintf("(%s = %s(%s, %d, _map_keys_value%d, _map_values_value%d))", var_name, llvm_fun_name, map_value.c_value, num_keys, map_num2, map_num2);

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = clone_node_type(map_type);
    
    return TRUE;
}

unsigned int sNodeTree_create_tuple(int num_elements, unsigned int* elements, BOOL append_right_values, sParserInfo* info)
{
    unsigned int node = alloc_node();

    gNodes[node].mNodeType = kNodeTypeTuple;

    xstrncpy(gNodes[node].mSName, info->sname, PATH_MAX);
    gNodes[node].mLine = info->sline;

    gNodes[node].uValue.sNodes.mNodes = GC_malloc(sizeof(unsigned int)*num_elements);
    int i;
    for(i=0; i<num_elements; i++) {
        gNodes[node].uValue.sNodes.mNodes[i] = elements[i];
    }
    gNodes[node].uValue.sNodes.mNumNodes = num_elements;
    gNodes[node].uValue.sNodes.mAppendRightValues = append_right_values;

    gNodes[node].mLeft = 0;
    gNodes[node].mRight = 0;
    gNodes[node].mMiddle = 0;

    return node;
}

BOOL compile_tuple_value(unsigned int node, sCompileInfo* info)
{
    unsigned int nodes[TUPLE_ELEMENT_MAX];
    int i;
    int num_nodes = gNodes[node].uValue.sNodes.mNumNodes;
    for(i=0; i<num_nodes; i++) {
        nodes[i] = gNodes[node].uValue.sNodes.mNodes[i];
    }
    BOOL append_right_values = gNodes[node].uValue.sNodes.mAppendRightValues;
    
    sNodeType* element_types[TUPLE_ELEMENT_MAX];
    LVALUE elements_value[LIST_ELEMENT_MAX];
    
    for(i=0; i<num_nodes; i++) {
        unsigned int node = nodes[i];

        if(!compile(node, info)) {
            return FALSE;
        }
        
        element_types[i] = clone_node_type(info->type);
        elements_value[i] = *get_value_from_stack(-1);
        
        dec_stack_ptr(1, info);
        
        if(element_types[i]->mHeap && (gNodes[node].mNodeType == kNodeTypeLoadField || gNodes[node].mNodeType == kNodeTypeLoadVariable || gNodes[node].mNodeType == kNodeTypeNormalBlock))
        {
            increment_ref_count(elements_value[i].value, element_types[i], elements_value[i].c_value, info);
        }
        
        remove_object_from_right_values(elements_value[i].value, info);
    }
    
    char buf[VAR_NAME_MAX];
    snprintf(buf, VAR_NAME_MAX, "tuple%d", num_nodes);
    
    sNodeType* tuple_type = create_node_type_with_class_name(buf);
    
    if(tuple_type == NULL) {
        compile_err_msg(info, "require to include <comelang.h>");
        return TRUE;
    }
    tuple_type->mPointerNum = 1;
    tuple_type->mNumGenericsTypes = num_nodes;
    for(i=0; i<num_nodes; i++) {
        tuple_type->mGenericsTypes[i] = element_types[i];
    }
    if(!gNCGC) {
        tuple_type->mHeap = TRUE;
    }
    
    unsigned int object_num = 0;
    BOOL gc = gNCGC;
    unsigned int node2 = sNodeTree_create_object(tuple_type, object_num, 0, NULL, info->sname, info->sline, gc, info->pinfo);
    
    if(!compile(node2, info)) {
        return FALSE;
    }
    
    LVALUE tuple_value = *get_value_from_stack(-1);
    
    remove_object_from_right_values(tuple_value.value, info);
    dec_stack_ptr(1, info);

    LLVMValueRef llvm_fun = NULL;
    
    char fun_name[VAR_NAME_MAX];
    snprintf(fun_name, VAR_NAME_MAX, "tuple%d_initialize", num_nodes);
    
    sFunction* fun = get_function_from_table(fun_name);
    
    if(fun == NULL) {
        compile_err_msg(info, "require to include comelang.h");
        return TRUE;
    }
    
    sNodeType* generics_type = clone_node_type(tuple_type);
    int num_method_generics_types = 0;
    sNodeType** method_generics_types = NULL;
    BOOL immutable_ = FALSE;

    char* llvm_fun_name = NULL;
    if(!create_generics_function(&llvm_fun, &llvm_fun_name, fun, fun_name, generics_type, num_method_generics_types, method_generics_types, immutable_, info)) {
        return FALSE;
    }
    
    int num_params = num_nodes + 1;
    
    LLVMValueRef llvm_params[PARAMS_MAX];
    LLVMTypeRef llvm_param_types[PARAMS_MAX];
    
    llvm_params[0] = tuple_value.value;
    for(i=0; i<num_nodes; i++) {
        llvm_params[i+1] = elements_value[i].value;
    }
    
    sNodeType* result_type = clone_node_type(tuple_type);
    
    llvm_param_types[0] = create_llvm_type_from_node_type(tuple_type);
    for(i=0; i<num_nodes; i++) {
        llvm_param_types[i+1] = create_llvm_type_from_node_type(element_types[i]);
    }
    
    LLVMTypeRef llvm_result_type = create_llvm_type_from_node_type(result_type);
    
    BOOL var_arg = FALSE;
    LLVMTypeRef function_type = LLVMFunctionType(llvm_result_type, llvm_param_types, num_params, var_arg);
    
    LVALUE llvm_value;
    llvm_value.value = LLVMBuildCall2(gBuilder, function_type, llvm_fun, llvm_params, num_params, "fun_result2");
    llvm_value.type = clone_node_type(tuple_type);
    llvm_value.address = NULL;
    llvm_value.var = NULL;
    llvm_value.c_value = xsprintf("");
    
    if(append_right_values) {
        append_object_to_right_values(llvm_value.value, tuple_type, info);
    }

    push_value_to_stack_ptr(&llvm_value, info);

    info->type = clone_node_type(tuple_type);
    
    return TRUE;
}

