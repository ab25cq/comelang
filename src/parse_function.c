#include "common.h"
#include <ctype.h>

BOOL parse_param(sParserParam* param, sParserInfo* info)
{
    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }
    
    if(!parse_type(&param->mType, info, param->mName, FALSE, FALSE, NULL, FALSE, FALSE, TRUE, FALSE, FALSE)) {
        return FALSE;
    }
    
    if(*info->p == '_' && (*(info->p+1) == ' ' || *(info->p+1) == '\t' || *(info->p+1) == '\n')) {
        info->p++;
        skip_spaces_and_lf(info);
        
        param->mLabel = TRUE;
    }

    if(param->mName[0] == 0 && (*info->p == ',' || *info->p == ')')) {
        param->mName[0] = '\0';
    }
    else {
        if(param->mName[0] == '\0') {
            if(!parse_variable_name(param->mName, VAR_NAME_MAX, info, param->mType, FALSE, TRUE))
            {
                return FALSE;
            }
        }
    }
    
    if(!param->mType->mArrayParam) {
        param->mType->mPointerNum += param->mType->mArrayDimentionNum;
        param->mType->mArrayDimentionNum = 0;
    }
    
    if(*info->p == '=') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!parse_sharp(info)) {
            return FALSE;
        }
        
        char* p = info->p;
        
        unsigned int node = 0;
        if(!expression(&node, FALSE, info)) {
            return FALSE;
        }
        
        char* p2 = info->p;
        
        if(p2 - p >= METHOD_DEFAULT_PARAM_MAX) {
            fprintf(stderr, "overflow default parametor value\n");
            exit(2);
        }
        
        memcpy(param->mDefaultValue, p, p2 - p);
        param->mDefaultValue[p2-p] = '\0';
    }

    return TRUE;
}

BOOL parse_come_param(sParserParam* param, sParserInfo* info)
{
    char asm_fname[VAR_NAME_MAX];
    asm_fname[0] = '\0';
    BOOL flag_asm_fun_name = FALSE;
    
    if(*info->p == '_' && (*(info->p+1) == ' ' || *(info->p+1) == '\t' || *(info->p+1) == '\n')) {
        info->p++;
        skip_spaces_and_lf(info);
        
        param->mLabel = TRUE;
    }

    if(param->mName[0] == '\0') {
        if(!parse_variable_name(param->mName, VAR_NAME_MAX, info, param->mType, FALSE, TRUE))
        {
            return FALSE;
        }
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    
    if(!parse_type(&param->mType, info, NULL, FALSE, FALSE, NULL, FALSE, FALSE, TRUE, FALSE, FALSE)) {
        return FALSE;
    }
    
    if(*info->p == '=') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!parse_sharp(info)) {
            return FALSE;
        }
        
        char* p = info->p;
        
        unsigned int node = 0;
        if(!expression(&node, FALSE, info)) {
            return FALSE;
        }
        
        char* p2 = info->p;
        
        if(p2 - p >= METHOD_DEFAULT_PARAM_MAX) {
            fprintf(stderr, "overflow default parametor value\n");
            exit(2);
        }
        
        memcpy(param->mDefaultValue, p, p2 - p);
        param->mDefaultValue[p2-p] = '\0';
    }

    return TRUE;
}

BOOL get_block_text(char* fun_name, sBuf* buf, sParserInfo* info, BOOL append_head_currly_brace)
{
    if(append_head_currly_brace) {
        sBuf_append_str(buf, "{ ");
    }

    BOOL dquort = FALSE;
    BOOL squort = FALSE;

    int nest = 0;
    while(TRUE) {
        if(!squort && *info->p == '"') {
            sBuf_append_char(buf, *info->p);
            info->p++;
            dquort = !dquort;
        }
        else if(!dquort && *info->p == '\'') {
            sBuf_append_char(buf, *info->p);
            info->p++;
            sBuf_append_char(buf, *info->p);
            info->p++;
            squort = !squort;
        }
        else if(dquort || squort) {
            if(*info->p == '\n') {
                info->sline++;
            }

            sBuf_append_char(buf, *info->p);
            info->p++;
        }
        else if(*info->p == '{') {
            sBuf_append_char(buf, *info->p);
            info->p++;

            nest++;
        }
        else if(*info->p == '#') {
            char* p = info->p;
            if(!parse_sharp(info)) {
                return FALSE;
            }
            sBuf_append(buf, p, info->p-p);
        }
        else if(*info->p == '}') {
            if(nest == 0) {
                sBuf_append_str(buf, "}");
                info->p++;

                while(TRUE) {
                    if(*info->p == ' ' || *info->p == '\t') {
                        info->p++;
                    }
                    else if(*info->p == '\n') {
                        info->sline++;

                        info->p++;
                        sBuf_append_str(buf, "\n");
                    }
                    else {
                        break;
                    }
                }

                break;
            }
            else {
                sBuf_append_str(buf, "}");
                info->p++;

                while(TRUE) {
                    if(*info->p == ' ' || *info->p == '\t') {
                        info->p++;
                    }
                    else if(*info->p == '\n') {

                        info->sline++;
                        info->p++;
                        sBuf_append_str(buf, "\n");
                    }
                    else {
                        break;
                    }
                }
            }

            nest--;
        }
        else if(*info->p == '\n') {
            info->sline++;

            sBuf_append_char(buf, *info->p);
            info->p++;
        }
        else if(*info->p == '\0') {
            char buf2[1024];
            snprintf(buf2, 1024, "require } before the source end in function(%s) (%s)", fun_name, buf->mBuf);
            parser_err_msg(info, buf2);
            return FALSE;
        }
        else {
            sBuf_append_char(buf, *info->p);
            info->p++;
        }
    }

    return TRUE;
}


/// character_type --> 0: () 1: ||
BOOL parse_params(sParserParam* params, int* num_params, sParserInfo* info, int character_type, BOOL* var_arg)
{
    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
        return FALSE;
    }

    if(strcmp(buf, "void") == 0 && *info->p == ')') {
        info->p++;
        skip_spaces_and_lf(info);
        return TRUE;
    }
    else {
        info->p = p_before;
        info->sline = sline_before;
    }

    if((character_type == 0 && *info->p == ')') || (character_type == 1 && *info->p == '|')) {
        info->p++;
        skip_spaces_and_lf(info);

        return TRUE;
    };
     
    *var_arg = FALSE;

    while(1) {
        if(*info->p == '.' && *(info->p + 1) == '.' && *(info->p + 2) == '.') {
            info->p += 3;
            skip_spaces_and_lf(info);

            expect_next_character_with_one_forward(")", info);
            skip_spaces_and_lf(info);

            *var_arg = TRUE;
            break;
        }

        if(!parse_param(params + *num_params, info)) {
            return FALSE;
        }

        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow params number");
            return FALSE;
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if((character_type == 0 && *info->p == ')') || (character_type == 1 && *info->p == '|')) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "It is required to ',' or ')' before the source end");
            break;
        }
        else {
            char msg[1024];
            snprintf(msg, 1024, "Unexpected character(%c). It is required to ',' or ')' or '|' character", *info->p);
            parser_err_msg(info, msg);
            if(*info->p == '\n') {
                info->sline++;
            }
            info->p++;
        }
    }

    return TRUE;
}

BOOL parse_come_params(sParserParam* params, int* num_params, sParserInfo* info, int character_type, BOOL* var_arg)
{
    *var_arg = FALSE;

    while(1) {
        if(!parse_come_param(params + *num_params, info)) {
            return FALSE;
        }

        (*num_params)++;

        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow params number");
            return FALSE;
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if((character_type == 0 && *info->p == ')') || (character_type == 1 && *info->p == '|')) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            parser_err_msg(info, "It is required to ',' or ')' before the source end");
            break;
        }
        else {
            char msg[1024];
            snprintf(msg, 1024, "Unexpected character(%c). It is required to ',' or ')' or '|' character", *info->p);
            parser_err_msg(info, msg);
            if(*info->p == '\n') {
                info->sline++;
            }
            info->p++;
        }
    }

    return TRUE;
}

BOOL parse_generics_function(unsigned int* node, sNodeType* result_type, char* fun_name, char* struct_name, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    char* function_head = info->p;

    BOOL operator_fun = FALSE;

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
        }
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    skip_spaces_and_lf(info);

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);
    
    BOOL immutable_ = TRUE;
    if(memcmp(info->p, "mutable", strlen("mutable")) == 0) {
        info->p += strlen("mutable");
        immutable_ = FALSE;
        skip_spaces_and_lf(info);
    }

    int sline = info->sline;

    if(*info->p == '{') {
        info->p++;
    }

    sBuf buf;
    sBuf_init(&buf);

    if(!get_block_text(fun_name, &buf, info, TRUE)) {
        free(buf.mBuf);
        return FALSE;
    };

    *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, 0, immutable_, info);

    //info->mNumMethodGenerics = 0;
    gNCSafeMode = safe_mode;

    return TRUE;
}

BOOL parse_method_generics_function(unsigned int* node, char* struct_name, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        int num_generics = 0;

        while(TRUE) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }

            info->mMethodGenericsTypeNames[num_generics] = strdup(buf);
            num_generics++;

            if(num_generics >= GENERICS_TYPES_MAX)
            {
                parser_err_msg(info, "overflow generics types");
                return FALSE;
            }

            info->mNumMethodGenerics = num_generics;

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                parser_err_msg(info, "require , or > character");
                break;
            }
        }
    }

    sNodeType* result_type = NULL;
    if(!parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) 
    {
        return FALSE;
    }

    char fun_name[VAR_NAME_MAX+1];
    if(!parse_word(fun_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
        }
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }
    
    BOOL immutable_ = TRUE;
    if(memcmp(info->p, "mutable", strlen("mutable")) == 0) {
        info->p += strlen("mutable");
        immutable_ = FALSE;
        skip_spaces_and_lf(info);
    }

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);

    int sline = info->sline;

    if(*info->p == '{') {
        info->p++;
    }

    sBuf buf;
    sBuf_init(&buf);

    if(!get_block_text(fun_name, &buf, info, TRUE)) {
        free(buf.mBuf);
        return FALSE;
    };

    *node = sNodeTree_create_generics_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, 0, immutable_, info);
    gNCSafeMode = safe_mode;

    return TRUE;
}

void parse_version(int* version, sParserInfo* info)
{
    if(parse_cmp(info->p, "version") == 0) {
        info->p += 7;
        skip_spaces_and_lf(info);

        *version = 0;
        while(xisdigit(*info->p)) {
            *version = *version * 10 + (*info->p - '0');
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(*version >= FUNCTION_VERSION_MAX) {
            fprintf(stderr, "overflow function version max");
            exit(2);
        }

        skip_spaces_and_lf(info);
    }
}

BOOL parse_come_function(unsigned int* node, char* struct_name, sParserInfo* info)
{
    char* definition_top = info->p;
    
    BOOL safe_mode = gNCSafeMode;
    int sline = info->sline;
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;
    char fun_name[VAR_NAME_MAX+1];
    
    if(!parse_word(fun_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    expect_next_character_with_one_forward("(", info);
    
    char asm_fname[VAR_NAME_MAX];
    xstrncpy(asm_fname, "", VAR_NAME_MAX);
    
    BOOL flag_asm_fun_name = FALSE;

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;
    
    if(*info->p == ')') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        if(!parse_come_params(params, &num_params, info, 0, &var_arg))
        {
            return FALSE;
        }
    }
    
    BOOL exist_result_type = FALSE;
    if(*info->p == '-' && *(info->p+1) == '>') {
        info->p += 2;
        skip_spaces_and_lf(info);
        
        exist_result_type = TRUE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    BOOL immutable_ = TRUE;
    if(memcmp(info->p, "mutable", strlen("mutable")) == 0) {
        info->p += strlen("mutable");
        immutable_ = FALSE;
        skip_spaces_and_lf(info);
    }
    
    sNodeType* result_type = create_node_type_with_class_name("void");
    if(exist_result_type) {
        if(!parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
        {
            return FALSE;
        }
    }
    
    int version = 0;
    parse_version(&version, info);

    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);

        *node = sNodeTree_create_external_function(fun_name, asm_fname, params, num_params, var_arg, result_type, struct_name, operator_fun, version, immutable_, flag_asm_fun_name, info);
    }
    else {
        if(strcmp(info->sname, gFName) == 0) {
            if(!result_type->mStatic) {
                sBuf_append_str(&gHeader, "fn ");
                sBuf_append(&gHeader, definition_top, info->p - definition_top-1);
                sBuf_append_str(&gHeader, ";\n");
            }
        }
        
        int i;
        for(i=0; i<num_params; i++) {
            char* name = params[i].mName;

            if(name[0] == '\0') {
                parser_err_msg(info, "Require parametor variable names");
            }
        }

        sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
        expect_next_character_with_one_forward("{", info);
        sVarTable* old_table = info->lv_table;

        info->lv_table = init_block_vtable(old_table, FALSE);

        sVarTable* block_var_table = info->lv_table;

        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;

            BOOL readonly = FALSE;
            if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
            {
                return FALSE;
            }
        }
        
        BOOL result_type_is_void = FALSE;
        if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
            result_type_is_void = TRUE;
        }
        BOOL exception_result_type_function = info->exception_result_type_function;
        if(result_type->mException) {
            info->exception_result_type_function = TRUE;
        }
        else {
            info->exception_result_type_function = FALSE;
        }
        info->function_result_type = clone_node_type(result_type);

        if(gNCHeader) {
            while(*info->p != '{') {
                info->p--;
            }
            if(!skip_block(info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }
        }
        else {
            if(!parse_block(node_block, FALSE, FALSE, result_type_is_void, FALSE, TRUE, info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }
    
            if(gNCType) {
                if(*info->p != '\0') {
                    expect_next_character_with_one_forward("}", info);
                }
            }
            else {
                expect_next_character_with_one_forward("}", info);
            }
        }

        info->lv_table = old_table;

        BOOL lambda_ = FALSE;

        BOOL simple_lambda_param = FALSE;
        BOOL construct_fun = FALSE;

        *node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, FALSE, var_arg, version, FALSE, -1, fun_name, sline, immutable_);
        info->exception_result_type_function = exception_result_type_function;
    }

    info->mNumMethodGenerics = 0;
    gNCSafeMode = safe_mode;

    return TRUE;

    return TRUE;
}

BOOL parse_function(unsigned int* node, sNodeType* result_type, char* fun_name, char* struct_name, char* definition_top, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    int sline = info->sline;
    char* function_head = info->p;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    /// remove function pointer params if the result is function pointer ///
    if(*info->p == ')') {
        info->p++;
        skip_spaces_and_lf(info);
        
        /// array pointer result function ///
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf(info);
            
            while(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            int n = 0;
            while(xisdigit(*info->p)) {
                n = n * 10 + *info->p - '0';
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            while(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            expect_next_character_with_one_forward("]", info);
            
            result_type->mPointerNum++;
            result_type->mArrayDimentionNum = 1;
            result_type->mArrayNum[0] = n;
            result_type->mArrayPointer = TRUE;
        }
        else {
            int nest = 0;
            while(*info->p) {
                if(*info->p == '(') {
                    info->p++;
                    nest++;
                }
                else if(*info->p == ')') {
                    info->p++;
                    
                    if(nest <= 1) {
                        break;
                    }
                    else {
                        nest--;
                    }
                }
                else {
                    info->p++;
                }
            }
        }
    }
    
    BOOL immutable_ = TRUE;
    if(memcmp(info->p, "mutable", strlen("mutable")) == 0) {
        info->p += strlen("mutable");
        immutable_ = FALSE;
        skip_spaces_and_lf(info);
    }
    
    int version = 0;
    parse_version(&version, info);

    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);

        *node = sNodeTree_create_external_function(fun_name, asm_fname, params, num_params, var_arg, result_type, struct_name, operator_fun, version, immutable_, flag_asm_fun_name, info);
    }
    else {
        if(strcmp(info->sname, gFName) == 0) {
            if(!result_type->mStatic) {
                sBuf_append(&gHeader, definition_top, info->p - definition_top-1);
                sBuf_append_str(&gHeader, ";\n");
            }
        }
        
        int i;
        for(i=0; i<num_params; i++) {
            char* name = params[i].mName;

            if(name[0] == '\0') {
                parser_err_msg(info, "Require parametor variable names");
            }
        }

        sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
        expect_next_character_with_one_forward("{", info);
        sVarTable* old_table = info->lv_table;

        info->lv_table = init_block_vtable(old_table, FALSE);

        sVarTable* block_var_table = info->lv_table;

        for(i=0; i<num_params; i++) {
            sParserParam* param = params + i;

            BOOL readonly = FALSE;
            if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
            {
                return FALSE;
            }
        }
        
        BOOL result_type_is_void = FALSE;
        if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
            result_type_is_void = TRUE;
        }
        BOOL exception_result_type_function = info->exception_result_type_function;
        if(result_type->mException) {
            info->exception_result_type_function = TRUE;
        }
        else {
            info->exception_result_type_function = FALSE;
        }
        info->function_result_type = clone_node_type(result_type);

        if(gNCHeader) {
            while(*info->p != '{') {
                info->p--;
            }
            if(!skip_block(info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }
        }
        else {
            if(!parse_block(node_block, FALSE, FALSE, result_type_is_void, FALSE, TRUE, info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }
    
            if(gNCType) {
                if(*info->p != '\0') {
                    expect_next_character_with_one_forward("}", info);
                }
            }
            else {
                expect_next_character_with_one_forward("}", info);
            }
        }

        info->lv_table = old_table;

        BOOL lambda_ = FALSE;

        BOOL simple_lambda_param = FALSE;
        BOOL construct_fun = FALSE;

        *node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, FALSE, var_arg, version, FALSE, -1, fun_name, sline, immutable_);
        info->exception_result_type_function = exception_result_type_function;
    }

    info->mNumMethodGenerics = 0;
    gNCSafeMode = safe_mode;

    return TRUE;
}

BOOL parse_class(unsigned int* node, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    int sline = info->sline;
    
    char struct_name[VAR_NAME_MAX+1];
    if(!parse_word(struct_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    char* p2 = info->p;
    int sline2 = info->sline;
    
    BOOL omit_params = FALSE;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
            omit_params = TRUE;
        }
        else {
            info->p = p2;
            info->sline = sline2;
        }
    }
    else {
        omit_params = TRUE;
    }

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    BOOL anonymous = FALSE;
    BOOL protocol_ = FALSE;
    sCLClass* struct_class = alloc_struct(struct_name, anonymous, TRUE, NULL, FALSE);

    sNodeType* result_type = create_node_type_with_class_pointer(struct_class);
    result_type->mPointerNum = TRUE;
    
    if(!gNCGC) {
        result_type->mHeap = TRUE;
    }
    
    xstrncpy(params[0].mName, "self", VAR_NAME_MAX);
    params[0].mType = clone_node_type(result_type);

    /// parse_params ///
    int num_params = 1;
    BOOL var_arg = FALSE;
    
    if(!omit_params) {
        expect_next_character_with_one_forward("(", info);
        
        if(!parse_params(params, &num_params, info, 0, &var_arg))
        {
            return FALSE;
        }
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
        }
    }

    sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
    expect_next_character_with_one_forward("{", info);
    sVarTable* old_table = info->lv_table;

    info->lv_table = init_block_vtable(old_table, FALSE);

    sVarTable* block_var_table = info->lv_table;

    for(i=0; i<num_params; i++) {
        sParserParam* param = params + i;

        BOOL readonly = FALSE;
        if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
        {
            return FALSE;
        }
    }
    
    BOOL in_class = info->mInClass;
    info->mInClass = TRUE;
    
    info->mNumClassFields = 0;
    memset((void*)info->mClassFields, 0, sizeof(sNodeType*)*CLASS_FIELD_MAX);
    memset((void*)info->mClassFieldsNames, 0, sizeof(char*)*CLASS_FIELD_MAX);
    memset((void*)info->mClassFieldsRightValue, 0, sizeof(unsigned int)*CLASS_FIELD_MAX);
    
    BOOL result_type_is_void = FALSE;
    BOOL return_self = TRUE;
    
    char base_struct_name[VAR_NAME_MAX];
    xstrncpy(base_struct_name, struct_name, VAR_NAME_MAX);
    xstrncat(base_struct_name, "p", VAR_NAME_MAX);
    
    xstrncpy(info->impl_struct_name, struct_name, VAR_NAME_MAX);
    xstrncpy(info->impl_struct_name2, base_struct_name, VAR_NAME_MAX);
    
    if(!parse_block(node_block, FALSE, FALSE, result_type_is_void, return_self, FALSE, info)) {
        sNodeBlock_free(node_block);
        return FALSE;
    }
    
    expect_next_character_with_one_forward("}", info);
    parse_impl_end(info);

    info->lv_table = old_table;

    BOOL simple_lambda_param = FALSE;
    BOOL construct_fun = FALSE;
    
    char* fun_name = "initialize";
    
    char* asm_fname = "";
    BOOL lambda_ = FALSE;
    BOOL operator_fun = FALSE;
    BOOL constructor_fun = TRUE;
    int version = -1;
    BOOL immutable_ = FALSE;
    
    int num_fields = info->mNumClassFields;
    sNodeType* fields[STRUCT_FIELD_MAX];
    
    for(i=0; i<num_fields; i++) {
        fields[i] = info->mClassFields[i];
    }
    
    char* fields_names[STRUCT_FIELD_MAX];
    for(i=0; i<num_fields; i++) {
        fields_names[i] = info->mClassFieldsNames[i];
    }
    
    add_fields_to_struct(struct_class, num_fields, fields_names, fields);
    BOOL undefined_body = FALSE;
    sNodeType* node_type = clone_node_type(result_type);
    node_type->mHeap = FALSE;
    create_llvm_struct_type(struct_name, node_type, NULL, undefined_body);
    
    char struct_name2[VAR_NAME_MAX];
    
    xstrncpy(struct_name2, struct_name, VAR_NAME_MAX);
    xstrncat(struct_name2, "p", VAR_NAME_MAX);
    
    char real_fun_name[REAL_FUN_NAME_MAX];
    create_real_fun_name(real_fun_name, REAL_FUN_NAME_MAX, fun_name, struct_name2);

    *node = sNodeTree_create_function(real_fun_name, asm_fname, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, FALSE, var_arg, version, FALSE, -1, fun_name, sline, immutable_);
    
    info->mInClass = in_class;
    gNCSafeMode = safe_mode;
    
    return TRUE;
}

BOOL parse_inline_function(unsigned int* node, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    BOOL operator_fun = FALSE;

    /// method generics ///
    info->mNumMethodGenerics = 0;

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    sNodeType* result_type = NULL;
    if(!parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }

    if(result_type == NULL) {
        return TRUE;
    }

    char struct_name[VAR_NAME_MAX+1];
    if(!parse_word(struct_name, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }
        
    int pointer_num = 0;
    while(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf(info);
        
        pointer_num++;
    }
    
    char fun_name[VAR_NAME_MAX+1];
    if(*info->p == ':' && *(info->p+1) == ':') {
        info->p += 2;
        skip_spaces_and_lf(info);
        
        if(!parse_word(fun_name, VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }
        
        if(strcmp(fun_name, "finalize") != 0 && strcmp(fun_name, "clone") != 0) {
            int k;
            for(k=0; k<pointer_num; k++) {
                xstrncat(struct_name, "p", VAR_NAME_MAX);
            }
        }
        
        
        char buf[VAR_NAME_MAX];
        
        xstrncpy(buf, struct_name, VAR_NAME_MAX);
        xstrncat(buf, "_", VAR_NAME_MAX);
        xstrncat(buf, fun_name, VAR_NAME_MAX);
        
        xstrncpy(fun_name, buf, VAR_NAME_MAX);
    }
    else {
        xstrncpy(fun_name, struct_name, VAR_NAME_MAX);
    }

    if(*info->p != '(') {
        char buf[128];
        snprintf(buf, 128, "require function definition(%c)\n", *info->p);
        parser_err_msg(info, buf);
        return TRUE;
    }

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);
    int num_params = 0;

    /// parse_params ///
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    int i;
    for(i=0; i<num_params; i++) {
        char* name = params[i].mName;

        if(name[0] == '\0') {
            parser_err_msg(info, "Require parametor variable names");
        }
    }

    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    skip_spaces_and_lf(info);

    int sline = info->sline;

    skip_spaces_and_lf(info);
    
    BOOL immutable_ = TRUE;
    if(memcmp(info->p, "mutable", strlen("mutable")) == 0) {
        info->p += strlen("mutable");
        immutable_ = FALSE;
        skip_spaces_and_lf(info);
    }

    if(*info->p == '{') {
        info->p++;
        skip_spaces_and_lf(info);
    
        sBuf buf;
        sBuf_init(&buf);
    
        if(!get_block_text(fun_name, &buf, info, TRUE)) {
            free(buf.mBuf);
            return FALSE;
        };
    
        *node = sNodeTree_create_inline_function(fun_name, params, num_params, result_type, MANAGED buf.mBuf, struct_name, sname, sline, var_arg, immutable_, info);
    }
    else if(*info->p == ';') {
        *node = sNodeTree_create_null(info);
    }
    else {
        parser_err_msg(info, "invalid inline function format");
        return FALSE;
    }
    gNCSafeMode = safe_mode;

    return TRUE;
}

BOOL parse_funcation_call_params(int* num_params, unsigned int* params, sParserInfo* info)
{
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            while(1) {
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                
                char* p = info->p;
                int sline = info->sline;
                
                char label[VAR_NAME_MAX];
                (void)parse_word(label, VAR_NAME_MAX, info, FALSE, FALSE);
                
                if(label[0] != '\0' && *info->p == ':') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    label[0] = '\0';
                    
                    info->p = p;
                    info->sline = sline;
                }
                
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }

                unsigned int node = 0;
                if(!expression(&node, FALSE, info)) {
                    return FALSE;
                }

                if(node == 0) {
                    parser_err_msg(info, "require expression");
                    break;
                }
                
                //gNodes[node].mLabel = GC_strdup(label);
                xstrncpy(gNodes[node].mLabel, label, VAR_NAME_MAX);

                params[*num_params] = node;
                (*num_params)++;

                if(*num_params >= PARAMS_MAX) {
                    parser_err_msg(info, "overflow parametor number for method call");
                    return FALSE;
                }

                if(*info->p == '@') {
                    info->p++;
                    while(xisalnum(*info->p) || *info->p == '_') {
                        info->p++;
                    }
                    skip_spaces_and_lf(info);
                }

                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }

                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(*info->p == '\0') {
                    parser_err_msg(info, "unexpected the source end");
                    break;
                }
                else {
                    char msg[1024];
                    snprintf(msg, 1024, "neo-c requires , or ) for method call. it is %c", *info->p);
                    parser_err_msg(info, msg);
                    break;
                }
            }
        }
    }

    skip_spaces_and_lf(info);

    sNodeType* result_type = NULL;

    char* p = info->p;
    int sline = info->sline;

    char buf[VAR_NAME_MAX];

    parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    if(is_type_name(buf, info)) {
        info->p = p;
        info->sline = sline;

        parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE);
    }
    else {
        info->p = p;
        info->sline = sline;
    }

    if(*info->p == '{') {
        char current_stack_frame_type_name[VAR_NAME_MAX];
        static int n = 0;
        snprintf(current_stack_frame_type_name, VAR_NAME_MAX, "__method_block_stack_frame%d", n);
        n++;
        params[*num_params] = sNodeTree_create_stack(current_stack_frame_type_name, info);
        (*num_params)++;
        
        char sname[PATH_MAX];
        xstrncpy(sname, info->sname, PATH_MAX);
        int sline = info->sline;
        
        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow parametor number for method call");
            return FALSE;
        }

        char* p = info->p;
        if(!skip_block(info)) {
            return FALSE;
        }

        char* p2 = info->p;

        sBuf buf;
        sBuf_init(&buf);

        sBuf_append(&buf, p, p2-p);

        params[*num_params] = sNodeTree_create_method_block(MANAGED buf.mBuf, sname, sline, result_type, current_stack_frame_type_name, info);

        (*num_params)++;
        
        if(*num_params >= PARAMS_MAX) {
            parser_err_msg(info, "overflow parametor number for method call");
            return FALSE;
        }
    }

    return TRUE;
}

BOOL parse_inherit(unsigned int* node, sParserInfo* info) 
{
    if(*info->p == '(') {
        unsigned int params[PARAMS_MAX];
        int num_params = 0;

        if(!parse_funcation_call_params(&num_params, params, info)) 
        {
            return FALSE;
        }

        char* fun_name = "inherit";

        *node = sNodeTree_create_function_call(fun_name, params, num_params, FALSE, TRUE, 0, info);
        
        if(*info->p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);
            
            *node = sNodeTree_create_unwrap(*node, info);
        }
    }

    return TRUE;
}

BOOL parse_come(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    if(strcmp(buf, "join") == 0) {
        *node = sNodeTree_create_join(info);
    }
    else if(strcmp(buf, "select") == 0) {
        if(!parse_select(node, info)) {
            return FALSE;
        }
    }
    else if(strcmp(buf, "pselect") == 0) {
        if(!parse_pselect(node, info)) {
            return FALSE;
        }
    }
    else {
        char* fun_name = buf;

        unsigned int params[PARAMS_MAX];
        int num_params = 0;

        if(!parse_funcation_call_params(&num_params, params, info)) 
        {
            return FALSE;
        }

        *node = sNodeTree_create_come_function_call(fun_name, params, num_params, info);
        
        if(*info->p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);
            
            *node = sNodeTree_create_unwrap(*node, info);
        }
    }
    
    return TRUE;
}

BOOL parse_macro(unsigned int* node, sParserInfo* info)
{
    BOOL safe_mode = gNCSafeMode;
    char buf[VAR_NAME_MAX+1];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    }

    char* p = info->p + 1;

    if(!skip_block(info)) {
        return FALSE;
    }

    sBuf body;
    sBuf_init(&body);

    sBuf_append(&body, p, info->p-p-3);

    append_macro(buf, body.mBuf);

    free(body.mBuf);

    *node = sNodeTree_create_null(info);

    skip_spaces_and_lf(info);
    gNCSafeMode = safe_mode;

    return TRUE;
}

BOOL parse_impl(unsigned int* node, sParserInfo* info)
{
    char struct_name[VAR_NAME_MAX];

    char buf[VAR_NAME_MAX];
    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }

    xstrncpy(struct_name, buf, VAR_NAME_MAX);

    info->mNumGenerics = 0;

    if(*info->p == '<') {
        info->p++;
        skip_spaces_and_lf(info);

        int num_generics = 0;

        while(TRUE) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }

            info->mGenericsTypeNames[num_generics] = strdup(buf);
            num_generics++;

            if(num_generics >= GENERICS_TYPES_MAX)
            {
                parser_err_msg(info, "overflow generics types");
                return FALSE;
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(*info->p == '>') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                parser_err_msg(info, "require , or > character");
                break;
            }
        }

        info->mNumGenerics = num_generics;
    }
    
    char base_struct_name[VAR_NAME_MAX];
    xstrncpy(base_struct_name, struct_name, VAR_NAME_MAX);
    
    if(info->mNumGenerics == 0) {
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            xstrncat(struct_name, "p", VAR_NAME_MAX);
        }
    }

    xstrncpy(info->impl_struct_name, struct_name, VAR_NAME_MAX);
    xstrncpy(info->impl_struct_name2, base_struct_name, VAR_NAME_MAX);
    
    expect_next_character_with_one_forward("{", info);

    if(!expression(node, TRUE, info)) {
        return FALSE;
    }

    return TRUE;
}

void parse_impl_end(sParserInfo* info)
{
    strcpy(info->impl_struct_name, "");
    info->mNumGenerics = 0;
}

BOOL parse_call_macro(unsigned int* node, char* name, sParserInfo* info)
{
    char name2[VAR_NAME_MAX];
    xstrncpy(name2, name, VAR_NAME_MAX);

    char* p = info->p + 1;

    if(*info->p == '(') {
        if(!skip_paren('(', ')', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '{') {
        if(!skip_paren('{', '}', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '[') {
        if(!skip_paren('[', ']', info)) {
            return FALSE;
        }
    }
    else if(*info->p == '<') {
        if(!skip_paren('<', '>', info)) {
            return FALSE;
        }
    }
    else {
        parser_err_msg(info, "Require (,{,[ or <");
        return TRUE;
    }

    sBuf params;
    sBuf_init(&params);

    sBuf_append(&params, p, info->p-p-1);

    skip_spaces_and_lf(info);

    if(!call_macro(node, name2, params.mBuf, info)) {
        return FALSE;
    }

    free(params.mBuf);

    return TRUE;
}

BOOL parse_function_pointer_result_function(unsigned int* node, BOOL* array_pointer_result_function_type, sParserInfo* info)
{
    int sline = info->sline;
    char* function_head = info->p;
    
    char* p2 = info->p;
    int sline2 = info->sline;

    sNodeType* node_type = NULL;
    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, TRUE, TRUE, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }

    sNodeType* result_type = create_node_type_with_class_name("lambda");

    result_type->mResultType = clone_node_type(node_type);

    /// method generics ///
    info->mNumMethodGenerics = 0;

    BOOL operator_fun = FALSE;

    expect_next_character_with_one_forward("(", info);
    expect_next_character_with_one_forward("*", info);

    char fun_name[VAR_NAME_MAX+1];
    if(!parse_word(fun_name, VAR_NAME_MAX, info, FALSE, FALSE))
    {
        return FALSE;
    }

    expect_next_character_with_one_forward("(", info);

    /// params ///
    sParserParam params[PARAMS_MAX];
    memset(params, 0, sizeof(sParserParam)*PARAMS_MAX);

    /// parse_params ///
    int num_params = 0;
    BOOL var_arg = FALSE;
    if(!parse_params(params, &num_params, info, 0, &var_arg))
    {
        return FALSE;
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    xstrncpy(info->fun_name, fun_name, VAR_NAME_MAX);

    /// params ///
    sParserParam params2[PARAMS_MAX];
    memset(params2, 0, sizeof(sParserParam)*PARAMS_MAX);

    expect_next_character_with_one_forward(")", info);
    
    if(*info->p == '[') {
        info->p = p2;
        info->sline = sline2;
        
        *array_pointer_result_function_type = TRUE;
        
        return TRUE;
    }
    else {
        expect_next_character_with_one_forward("(", info);
    
        /// parse_params ///
        int num_params2 = 0;
        BOOL var_arg2 = FALSE;
        if(!parse_params(params2, &num_params2, info, 0, &var_arg2))
        {
            return FALSE;
        }
    
        result_type->mNumParams = num_params2;
    
        int i;
        for(i=0; i<num_params2; i++) {
            result_type->mParamTypes[i] = clone_node_type(params2[i].mType);
        }
    
        char* struct_name = NULL;
    
        if(*info->p == ';') {
            info->p++;
            skip_spaces_and_lf(info);
            
            BOOL immutable_ = TRUE;
    
            *node = sNodeTree_create_external_function(fun_name, asm_fname, params, num_params, var_arg, result_type, struct_name, operator_fun, 0, immutable_, flag_asm_fun_name, info);
        }
        else {
            int version = 0;
            parse_version(&version, info);
    
            int i;
            for(i=0; i<num_params; i++) {
                char* name = params[i].mName;
    
                if(name[0] == '\0') {
                    parser_err_msg(info, "Require parametor variable names");
                }
            }
    
            sNodeBlock* node_block = ALLOC sNodeBlock_alloc();
            expect_next_character_with_one_forward("{", info);
            sVarTable* old_table = info->lv_table;
    
            info->lv_table = init_block_vtable(old_table, FALSE);
    
            sVarTable* block_var_table = info->lv_table;
    
            for(i=0; i<num_params; i++) {
                sParserParam* param = params + i;
    
                BOOL readonly = FALSE;
                if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, FALSE, TRUE))
                {
                    return FALSE;
                }
            }
            
            BOOL result_type_is_void = FALSE;
            if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
                result_type_is_void = TRUE;
            }
    
            if(!parse_block(node_block, FALSE, FALSE, result_type_is_void, FALSE, TRUE, info)) {
                sNodeBlock_free(node_block);
                return FALSE;
            }
    
            if(gNCType) {
                if(*info->p != '\0') {
                    expect_next_character_with_one_forward("}", info);
                }
            }
            else {
                expect_next_character_with_one_forward("}", info);
            }
    
            info->lv_table = old_table;
    
            BOOL lambda_ = FALSE;
    
            BOOL simple_lambda_param = FALSE;
            BOOL construct_fun = FALSE;
            BOOL immutable_ = TRUE;
    
            *node = sNodeTree_create_function(fun_name, asm_fname, params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, struct_name, operator_fun, construct_fun, simple_lambda_param, info, FALSE, var_arg, version, FALSE, -1, fun_name, sline, immutable_);
        }
    
        info->mNumMethodGenerics = 0;
    }

    return TRUE;
}
