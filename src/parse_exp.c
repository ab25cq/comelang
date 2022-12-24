#include "common.h"
#include <ctype.h>

static BOOL expression_node_variable(unsigned int* node, BOOL enable_assginment, int num_bufs, char** bufs, sParserInfo* info)
{
    if(enable_assginment && *info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;

        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        if(right_node == 0) {
            parser_err_msg(info, "Require right value for =");
            *node = 0;
        }
        else {
            if(num_bufs == 1) {
                BOOL global = info->mBlockLevel == 0;
                BOOL alloc = FALSE;
            
                *node = sNodeTree_create_store_variable(bufs[0], right_node, alloc, global, FALSE, info);
            }
            else {
                BOOL global = info->mBlockLevel == 0;
                BOOL alloc = FALSE;
                *node = sNodeTree_create_store_variable_multiple(num_bufs, bufs, right_node, alloc, info);
            }
        }
    }
    else if(*info->p == '+' && *(info->p+1) == '+')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        unsigned int right_node = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
        
        unsigned int nodes[3];
        int num_nodes = 2;
        
        nodes[0] = *node;

        unsigned int left_node2 = sNodeTree_create_load_variable(var_name, info);
        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_sub(left_node2, right_node2, 0, FALSE, info);
        
        nodes[1] = *node;
        
        *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
    }
    else if(*info->p == '-' && *(info->p+1) == '-')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);
        sVar* var_ = get_variable_from_table(info->lv_table, var_name);

        if(var_ && var_->mReadOnly) {
            parser_err_msg(info, "This is readonly variable.");
            *node = 0;
            return TRUE;
        }

        unsigned int right_node = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);

        BOOL global = info->mBlockLevel == 0;
        unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);

        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_add(left_node2, right_node2, 0, FALSE, info);
    }
    else if(enable_assginment && *info->p == '+' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);

        BOOL global = info->mBlockLevel == 0;
        unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);

        *node = sNodeTree_create_sub(left_node2, right_node, 0, FALSE, info);
    }
    else if(enable_assginment && *info->p == '-' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);

        BOOL global = info->mBlockLevel == 0;
        unsigned int left_node2 = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);

        *node = sNodeTree_create_add(left_node2, right_node, 0, FALSE, info);
    }
    else if(enable_assginment && *info->p == '*' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_mult(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '/' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0],  VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_div(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '%' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_mod(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_left_shift(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_right_shift(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '&' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_and(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '^' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_xor(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(enable_assginment && *info->p == '|' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, bufs[0], VAR_NAME_MAX);

        unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

        *node = sNodeTree_create_or(left_node, right_node, 0, info);

        BOOL global = info->mBlockLevel == 0;
        *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, TRUE, info);
    }
    else if(*info->p == '(')
    {
        unsigned int params[PARAMS_MAX];
        int num_params = 0;

        if(!parse_funcation_call_params(&num_params, params, info)) 
        {
            return FALSE;
        };

        *node = sNodeTree_create_load_variable(bufs[0], info);

        *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
    }
    else {
        *node = sNodeTree_create_load_variable(bufs[0], info);
    }
    
    return TRUE;
}

static BOOL expression_node_variable_method_block_parent(unsigned int* node, BOOL enable_assginment, char* buf, sParserInfo* info)
{
    if(enable_assginment && *info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;

        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        if(right_node == 0) {
            parser_err_msg(info, "Require right value for =");
            *node = 0;
        }
        else {
            *node = sNodeTree_create_load_variable("parent", info);
            *node = sNodeTree_create_load_field(buf, *node, info);
            *node = sNodeTree_create_store_value_to_address(*node, right_node, TRUE, NULL, FALSE, info);
        }
    }
    else if(*info->p == '+' && *(info->p+1) == '+')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);
        
        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        unsigned int right_node = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
        
        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        unsigned int left_node2 = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);

        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_sub(left_node2, right_node2, 0, FALSE, info);
    }
    else if(*info->p == '-' && *(info->p+1) == '-')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);
        
        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        unsigned int right_node = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        unsigned int left_node2 = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);

        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_add(left_node2, right_node2, 0, FALSE, info);
    }
    else if(*info->p == '+' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        unsigned int left_node2 = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);

        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_sub(left_node2, right_node2, 0, FALSE, info);
    }
    else if(*info->p == '-' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        unsigned int left_node2 = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);

        unsigned int right_node2 = sNodeTree_create_int_value(1, info);

        *node = sNodeTree_create_add(left_node2, right_node2, 0, FALSE, info);
    }
    else if(*info->p == '*' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_mult(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '/' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_div(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '%' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_mod(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_left_shift(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_right_shift(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '&' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_and(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '^' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);
        
        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_xor(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else if(*info->p == '|' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) {
            return FALSE;
        }

        char var_name[VAR_NAME_MAX];

        xstrncpy(var_name, buf, VAR_NAME_MAX);

        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        unsigned int left_node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);

        *node = sNodeTree_create_or(left_node, right_node, 0, info);

        unsigned int node2 = sNodeTree_create_load_variable("parent", info);
        unsigned int node3 = sNodeTree_create_load_field(buf, node2, info);
        *node = sNodeTree_create_store_value_to_address(node3, *node, TRUE, NULL, FALSE, info);
    }
    else {
        *node = sNodeTree_create_load_variable("parent", info);
        *node = sNodeTree_create_load_field(buf, *node, info);
        *node = sNodeTree_create_dereffernce(*node, TRUE, NULL, info);
    }
    
    return TRUE;
}

BOOL parse_va_arg(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);
    
    unsigned int ap = 0;
    if(!expression(&ap, FALSE, info)) {
        return FALSE;
    }
    
    expect_next_character_with_one_forward(",", info);
    
    sNodeType* node_type;
    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE))
    {
        return FALSE;
    }
    
    expect_next_character_with_one_forward(")", info);
    
    *node = sNodeTree_create_va_arg(ap, node_type, info);
    
    return TRUE;
}

BOOL expression_node(unsigned int* node, BOOL enable_assginment, sParserInfo* info)
{
    if(!parse_sharp(info)) {
        return FALSE;
    }

    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        char* p = info->p;
        int sline = info->sline;
        
        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
        {
            return FALSE;
        }

        if(is_type_name(buf, info) && !get_variable_from_table(info->lv_table, buf) || (*info->p == '(' && *(info->p+1) == '*') && *info->p != '(') {
            info->p = p;
            info->sline = sline;

            sNodeType* node_type = NULL;
            if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
            {
                return FALSE;
            }

            expect_next_character_with_one_forward(")", info);
            
            if(!expression_node(node, TRUE, info)) 
            {
                return FALSE;
            }
            
            if(*node == 0) {
                parser_err_msg(info, "require value for cast");
            };

            *node = sNodeTree_create_cast(node_type, *node, info);
        }
        else {
            info->p = p;
            info->sline = sline;
            
            char* p2 = info->p;
            int sline2 = info->sline;

            if(!gExternC) {
                if(!expression(node, FALSE, info)) {
                    return FALSE;
                }
            }
            else {
                if(!expression(node, TRUE, info)) {
                    return FALSE;
                }
            }
            skip_spaces_and_lf(info);

            if(*node == 0) {
                parser_err_msg(info, "require expression as ( operand");
            }
            
            /// tuple ///
            if(*info->p == ',' && !gExternC) {
                info->p = p2;
                info->sline = sline2;
                
                if(!get_tuple(node, info)) {
                    return FALSE;
                }
            }
            else {
                expect_next_character_with_one_forward(")", info);
            }
        }
    }
    else if(!info->array_initializer && *info->p == '{') {
        sNodeBlock* node_block = NULL;
        BOOL result_type_is_void = TRUE;
        if(!parse_block_easy(ALLOC &node_block, FALSE, result_type_is_void, FALSE, info))
        {
            return FALSE;
        };

        *node = sNodeTree_create_normal_block(node_block, info);
    }
    else if(*info->p == '}' && strcmp(info->impl_struct_name, "") != 0)
    {
        info->p++;
        skip_spaces_and_lf(info);

        parse_impl_end(info);

        *node = sNodeTree_create_null(info);
    }
    else if(*info->p == '*') {
        info->p++;
        skip_spaces_and_lf(info);
        
/*
        BOOL plus_plus = FALSE;
        if(*info->p == '+' && *(info->p+1) == '+') {
            info->p += 2;
            skip_spaces_and_lf(info);
            plus_plus = TRUE;
        }
*/
        
        sNodeType* cast_pointer_type = NULL;
        if(*info->p == '(') {
            char* p_before = info->p;
            int sline_before = info->sline;
            
            info->p++;
            skip_spaces_and_lf(info);
            
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char buf[VAR_NAME_MAX+1];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
    
            if(is_type_name(buf, info) && !get_variable_from_table(info->lv_table, buf)) {
                info->p = p_before2;
                info->sline = sline_before2;
    
                sNodeType* node_type = NULL;
                if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
                {
                    return FALSE;
                }
    
                expect_next_character_with_one_forward(")", info);
                
                if(xisalpha(*info->p)) {
                    cast_pointer_type = clone_node_type(node_type);
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }
            else {
                info->p = p_before;
                info->sline = sline_before;
            }
        }
        
        BOOL store_address = info->store_address;
        info->store_address = TRUE;
        
        BOOL in_derefference = info->in_derefference;
        info->in_derefference = TRUE;
        
        if(!expression_node(node, FALSE, info)) 
        {
            return FALSE;
        }
        
        info->store_address = store_address;
        
        info->in_derefference = in_derefference;

        if(*node == 0) {
            parser_err_msg(info, "require value for *(1)");
        }
        
/*
        if(plus_plus) {
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int right_node = sNodeTree_create_int_value(1, info);
    
            unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
*/
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2 = 0;
            if(!expression(&node2, FALSE, info)) 
            {
                return FALSE;
            }

            if(*node == 0) {
                parser_err_msg(info, "require value for *");
            };

            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '+' && *(info->p+1) == '+')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int right_node = sNodeTree_create_int_value(1, info);
    
            unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '-' && *(info->p+1) == '-')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int right_node = sNodeTree_create_int_value(1, info);
    
            unsigned int node2 = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '+' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '-' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '*' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_mult(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '/' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_div(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '%' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_mod(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_left_shift(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_right_shift(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '&' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_and(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '^' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_xor(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else if(*info->p == '|' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);
    
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
    
            unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
    
            unsigned int node2 = sNodeTree_create_or(left_node, right_node, 0, info);
    
            *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
        }
        else {
            *node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        }
    }
/*
    else if(*info->p == '@') {
        info->p++;
        skip_spaces_and_lf(info);
        
        BOOL in_derefference = info->in_derefference;
        info->in_derefference = TRUE;
        
        if(!expression_node(node, FALSE, info)) 
        {
            return FALSE;
        }
        
        info->in_derefference = in_derefference;

        if(*node == 0) {
            parser_err_msg(info, "require value for @");
        }

        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned int node2 = 0;
            if(!expression(&node2, FALSE, info)) 
            {
                return FALSE;
            }

            if(node2 == 0) {
                parser_err_msg(info, "require right value for =");
            };

            *node = sNodeTree_create_write_channel(*node, node2, info);
        }
        else {
            *node = sNodeTree_create_read_channel(*node, info);
        }
    }
*/
    else if(*info->p == '&') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);
            
            char buf[VAR_NAME_MAX+1];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
            
            *node = sNodeTree_create_label(buf, info);
        }
        else {
            info->getting_refference = TRUE;
            BOOL enable_assignment = FALSE;
            if(!expression_node(node, enable_assignment, info)) {
                return FALSE;
            }
            info->getting_refference = FALSE;
    
            if(*node == 0) {
                parser_err_msg(info, "require value for &");
            };
            
    /*
            if(gNodes[*node].mNodeType == kNodeTypeLoadField) {
                *node = sNodeTree_create_reffernce_load_field(*node, info);
            }
            else {
    */
                *node = sNodeTree_create_reffernce(*node, info);
    //        }
        }
    }
    else if(*info->p == '!') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, TRUE, info)) {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for !");
        };

        *node = sNodeTree_create_logical_denial(*node, 0, 0, info);
    }
    else if(*info->p == '~') {
        info->p++;
        skip_spaces_and_lf(info);

        if(!expression_node(node, TRUE, info))
        {
            return FALSE;
        }

        if(*node == 0) {
            parser_err_msg(info, "require value for operator ~");
        };

        *node = sNodeTree_create_complement(*node, info);
    }
    else if(*info->p == '+' && *(info->p+1) == '+')
    {
        info->p+=2;
        skip_spaces_and_lf(info);
        
        sNodeType* cast_pointer_type = NULL;
        if(*info->p == '(') {
            char* p_before = info->p;
            int sline_before = info->sline;
            
            info->p++;
            skip_spaces_and_lf(info);
            
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char buf[VAR_NAME_MAX+1];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
    
            if(is_type_name(buf, info) && !get_variable_from_table(info->lv_table, buf)) {
                info->p = p_before2;
                info->sline = sline_before2;
    
                sNodeType* node_type = NULL;
                if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
                {
                    return FALSE;
                }
    
                expect_next_character_with_one_forward(")", info);
                
                if(xisalpha(*info->p)) {
                    cast_pointer_type = clone_node_type(node_type);
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }
            else {
                info->p = p_before;
                info->sline = sline_before;
            }
        }

        unsigned int exp = 0;
        if(!expression_node(&exp, FALSE, info)) {
            return FALSE;
        }

        if(gNodes[exp].mNodeType == kNodeTypeLoadVariable)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadVariable.mVarName, VAR_NAME_MAX);

            unsigned int left_node = sNodeTree_create_load_variable(var_name, info);

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);

            BOOL global = info->mBlockLevel == 0;
            *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadField)
        {
            char var_name[VAR_NAME_MAX];
            xstrncpy(var_name, gNodes[exp].uValue.sLoadField.mVarName, VAR_NAME_MAX);

            unsigned int obj_node = gNodes[exp].mLeft;

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_add(exp, right_node, 0, TRUE, info);

            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeDerefference) 
        {
            unsigned int left_node = sNodeTree_create_dereffernce(gNodes[exp].mLeft, FALSE, cast_pointer_type, info);
    
            unsigned int right_node = sNodeTree_create_int_value(1, info);
    
            unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
    
            *node = sNodeTree_create_store_value_to_address(gNodes[exp].mLeft, node2, FALSE, cast_pointer_type, TRUE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadElement)
        {
            unsigned int obj_node = gNodes[exp].mLeft;
            
            int num_dimention = gNodes[exp].uValue.sLoadElement.mArrayDimentionNum;
            unsigned int index_node[ARRAY_DIMENTION_MAX];
            
            int i;
            for(i=0; i<num_dimention; i++) {
                index_node[i] = gNodes[exp].uValue.sLoadElement.mIndex[i];
            }

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_add(exp, right_node, 0, TRUE, info);

            *node = sNodeTree_create_store_element(obj_node, index_node, num_dimention, *node, info);
        }
        else {
            parser_err_msg(info, "Invalid node for ++(1)");

            *node = 0;
            return TRUE;
        }
    }
    else if(*info->p == '-' && *(info->p+1) == '-')
    {
        info->p+=2;
        skip_spaces_and_lf(info);
        
        sNodeType* cast_pointer_type = NULL;
        if(*info->p == '(') {
            char* p_before = info->p;
            int sline_before = info->sline;
            
            info->p++;
            skip_spaces_and_lf(info);
            
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char buf[VAR_NAME_MAX+1];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
    
            if(is_type_name(buf, info) && !get_variable_from_table(info->lv_table, buf)) {
                info->p = p_before2;
                info->sline = sline_before2;
    
                sNodeType* node_type = NULL;
                if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
                {
                    return FALSE;
                }
    
                expect_next_character_with_one_forward(")", info);
                
                if(xisalpha(*info->p)) {
                    cast_pointer_type = clone_node_type(node_type);
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }
            else {
                info->p = p_before;
                info->sline = sline_before;
            }
        }

        unsigned int exp = 0;
        if(!expression_node(&exp, FALSE, info)) {
            return FALSE;
        }

        if(gNodes[exp].mNodeType == kNodeTypeLoadVariable)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadVariable.mVarName, VAR_NAME_MAX);

            unsigned int left_node = sNodeTree_create_load_variable(var_name, info);
            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);

            BOOL global = info->mBlockLevel == 0;
            *node = sNodeTree_create_store_variable(var_name, *node, FALSE, global, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadField)
        {
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, gNodes[exp].uValue.sLoadField.mVarName, VAR_NAME_MAX);

            unsigned int obj_node = gNodes[exp].mLeft;

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_sub(exp, right_node, 0, TRUE, info);

            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeDerefference) 
        {
            unsigned int left_node = sNodeTree_create_dereffernce(gNodes[exp].mLeft, FALSE, cast_pointer_type, info);
    
            unsigned int right_node = sNodeTree_create_int_value(1, info);
    
            unsigned int node2 = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);
            
            *node = sNodeTree_create_store_value_to_address(gNodes[exp].mLeft, node2, FALSE, cast_pointer_type, TRUE, info);
        }
        else if(gNodes[exp].mNodeType == kNodeTypeLoadElement)
        {
            unsigned int obj_node = gNodes[exp].mLeft;
            
            int num_dimention = gNodes[exp].uValue.sLoadElement.mArrayDimentionNum;
            unsigned int index_node[ARRAY_DIMENTION_MAX];
            
            int i;
            for(i=0; i<num_dimention; i++) {
                index_node[i] = gNodes[exp].uValue.sLoadElement.mIndex[i];
            }

            unsigned int right_node = sNodeTree_create_int_value(1, info);

            *node = sNodeTree_create_sub(exp, right_node, 0, TRUE, info);

            *node = sNodeTree_create_store_element(obj_node, index_node, num_dimention, *node, info);
        }
        else {
            char buf[256];
            snprintf(buf, 256, "Invalid node for --(2) %d %d", exp, gNodes[exp].mNodeType);
            parser_err_msg(info, buf);

            *node = 0;
            return TRUE;
        }
    }
    else if(*info->p == '-' && !xisdigit(*(info->p+1)))
    {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int zero_node = sNodeTree_create_int_value(0, info);

        unsigned int right_node = 0;
        if(!expression_node(&right_node, FALSE, info)) {
            return FALSE;
        };

        *node = sNodeTree_create_sub(zero_node, right_node, 0, TRUE, info);
    }
    /// hex number ///
    else if(*info->p == '-' && *(info->p+1) == '0' && (*(info->p+2) == 'x' || *(info->p+2) == 'X')) {
        info->p += 3;

        if(!get_hex_number(node, TRUE, info)) {
            return FALSE;
        }
    }
    /// number ///
    else if((*info->p == '-' && *(info->p+1) != '=' && *(info->p+1) != '-' && *(info->p+1) != '>') || (*info->p == '+' && *(info->p+1) != '=' && *(info->p+1) != '+')) 
    {
        if(*info->p =='+') {
            info->p++;
            skip_spaces_and_lf(info);

            if(xisdigit(*info->p)) {
                if(!get_number(FALSE, node, info)) {
                    return FALSE;
                }
            }
            else {
                if(!expression_node(node, TRUE, info)) {
                    return FALSE;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for -");
                }
            }
        }
        else if(*info->p =='-') {
            info->p++;
            skip_spaces_and_lf(info);

            if(xisdigit(*info->p)) {
                if(!get_number(TRUE, node, info)) {
                    return FALSE;
                }
            }
            else {
                if(!expression_node(node, TRUE, info)) {
                    return FALSE;
                }

                if(*node == 0) {
                    parser_err_msg(info, "require right value for -");
                }
            }
        }
    }
    /// hex number ///
    else if(*info->p == '0' && (*(info->p+1) == 'x' || *(info->p+1) == 'X')) {
        info->p += 2;

        if(!get_hex_number(node, FALSE, info)) {
            return FALSE;
        }
    }
    /// oct number ///
    else if(*info->p == '0' && xisdigit(*(info->p+1))) {
        info->p++;

        if(!get_oct_number(node, info)) {
            return FALSE;
        }
    }
    /// number ///
    else if(xisdigit(*info->p)) {
        if(!get_number(FALSE, node, info)) {
            return FALSE;
        }
    }
    /// regex ///
    else if(*info->p == '/') {
        info->p++;
        
        if(!get_regex(node, info)) {
            return FALSE;
        }
    }
    /// list ///
    else if(*info->p == '[') {
        info->p++;
        skip_spaces_and_lf(info);
        
        char* p = info->p;
        int sline = info->sline;
        
        if(!expression(node, FALSE, info)) {
            return FALSE;
        }
        skip_spaces_and_lf(info);
        
        if(*info->p == ':') {
            info->p = p;
            info->sline = sline;
            
            if(!get_map(node, info)) {
                return FALSE;
            }
        }
        else {
            info->p = p;
            info->sline = sline;
            
            if(!get_list(node, info)) {
                return FALSE;
            }
        }
    }
    /// c string ///
    else if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        sBuf value;
        sBuf_init(&value);

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                if(*info->p == '#') {
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                }
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    int n = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        n = n * 8 + *info->p - '0';
                        info->p++;
                        len++;
                    }
                    
                    sBuf_append_char(&value, n);
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    info->p++;
                    
                    char buf[128];
                    xstrncpy(buf, "0x", 128);
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        char buf2[2];
                        buf2[0] = *info->p;
                        buf2[1] = '\0';
                        info->p++;
                        xstrncat(buf, buf2, 128);
                    }
                    
                    unsigned clint64 n = strtoll(buf, NULL, 0);
                    
                    sBuf_append_char(&value, (char)n);
                }
                else {
                    switch(*info->p) {
                        case '0':
                            sBuf_append_char(&value, '\0');
                            info->p++;
                            break;
    
                        case 'n':
                            sBuf_append_char(&value, '\n');
                            info->p++;
                            break;
    
                        case 't':
                            sBuf_append_char(&value, '\t');
                            info->p++;
                            break;
    
                        case 'r':
                            sBuf_append_char(&value, '\r');
                            info->p++;
                            break;
    
                        case 'v':
                            sBuf_append_char(&value, '\v');
                            info->p++;
                            break;
    
                        case 'f':
                            sBuf_append_char(&value, '\f');
                            info->p++;
                            break;
    
                        case 'a':
                            sBuf_append_char(&value, '\a');
                            info->p++;
                            break;
    
                        case 'b':
                            sBuf_append_char(&value, '\b');
                            info->p++;
                            break;
    
                        case '\\':
                            sBuf_append_char(&value, '\\');
                            info->p++;
                            break;
    
                        default:
                            sBuf_append_char(&value, *info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                parser_err_msg(info, "close \" to make c string value");
                return FALSE;
            }
            else {
                if(*info->p == '\n') info->sline++;

                sBuf_append_char(&value, *info->p);
                info->p++;
            }
            
/*
            if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
*/
        }

        skip_spaces_and_lf(info);

        *node = sNodeTree_create_c_string_value(MANAGED value.mBuf, value.mLen, sline, info);
    }
    /// chararacter ///
    else if(*info->p == '\'') {
        info->p++;

        int c;

        if(*info->p == '\\') {
            info->p++;

            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        xstrncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            xstrncat(buf, buf2, 128);
                        }
                        
                        unsigned clint64 n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            parser_err_msg(info, "close \' to make character value");
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            *node = sNodeTree_create_character_value(c, info);
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '\'') {
        info->p+=2;

        wchar_t c;

        if(*info->p == '\\') {
            info->p++;
            
            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        xstrncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            xstrncat(buf, buf2, 128);
                        }
                        
                        unsigned clint64 n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    parser_err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        parser_err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c = 0;
                    }

                    info->p += size;
                }
            }
            /// ASCII character ///
            else {
                c = *info->p;
                info->p++;
            }
        }

        if(*info->p != '\'') {
            parser_err_msg(info, "close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            *node = sNodeTree_create_wcharacter_value(c, info);
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '"') {
        info->p+=2;

        int sline = info->sline;

        sBuf value;
        sBuf_init(&value);

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    int n = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        n = n * 8 + *info->p - '0';
                        info->p++;
                        len++;
                    }
                    
                    sBuf_append_char(&value, n);
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    info->p++;
                    
                    char buf[128];
                    xstrncpy(buf, "0x", 128);
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        char buf2[2];
                        buf2[0] = *info->p;
                        buf2[1] = '\0';
                        info->p++;
                        xstrncat(buf, buf2, 128);
                    }
                    
                    unsigned clint64 n = strtoll(buf, NULL, 0);
                    
                    sBuf_append_char(&value, (char)n);
                }
                else {
                    switch(*info->p) {
                        case '0':
                            sBuf_append_char(&value, '\0');
                            info->p++;
                            break;
    
                        case 'n':
                            sBuf_append_char(&value, '\n');
                            info->p++;
                            break;
    
                        case 't':
                            sBuf_append_char(&value, '\t');
                            info->p++;
                            break;
    
                        case 'r':
                            sBuf_append_char(&value, '\r');
                            info->p++;
                            break;
    
                        case 'v':
                            sBuf_append_char(&value, '\v');
                            info->p++;
                            break;
    
                        case 'f':
                            sBuf_append_char(&value, '\f');
                            info->p++;
                            break;
    
                        case 'a':
                            sBuf_append_char(&value, '\a');
                            info->p++;
                            break;
    
                        case 'b':
                            sBuf_append_char(&value, '\b');
                            info->p++;
                            break;
    
                        case '\\':
                            sBuf_append_char(&value, '\\');
                            info->p++;
                            break;
    
                        default:
                            sBuf_append_char(&value, *info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                parser_err_msg(info, "close \" to make c string value");
                return FALSE;
            }
            else {
                if(*info->p == '\n') info->sline++;

                sBuf_append_char(&value, *info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);
        
        int len = value.mLen;
        
        wchar_t* wstr = calloc(1, sizeof(wchar_t)*(len+1));
        
        char* str = value.mBuf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            return FALSE;
        }

        *node = sNodeTree_create_wc_string_value(MANAGED wstr, len, sline, info);
    }
    else if(xisalpha(*info->p) || *info->p == '_') {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
        {
            return FALSE;
        }
        
        BOOL define_struct = FALSE;
        BOOL define_union  = FALSE;
        BOOL define_enum = FALSE;
        BOOL static_inline = FALSE;

        if(strcmp(buf, "__extension__") == 0 && *info->p != '(') {
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
        }
        
        if(strcmp(buf, "__typeof__") == 0 && *info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            
            char buf2[VAR_NAME_MAX+1];
            if(!parse_word(buf2, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }
            
            info->p++;
            skip_spaces_and_lf(info);
            
            char buf3[VAR_NAME_MAX+1];
            if(!parse_word(buf3, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }
            
            char buf4[VAR_NAME_MAX+1];
            if(!parse_word(buf4, VAR_NAME_MAX, info, TRUE, FALSE)) {
                return FALSE;
            }
            
            if(strcmp(buf4, "__asm__") == 0) {
                info->p++;
                skip_spaces_and_lf(info);
                
                if(*info->p == '"') {
                    info->p++;
                    
                    char buf5[VAR_NAME_MAX+1];
                    
                    char* p = buf5;
            
                    while(1) {
                        if(*info->p == '"') {
                            info->p++;
                            break;
                        }
                        else if(*info->p == '\0') {
                            parser_err_msg(info, "close \" to make c string value");
                            return FALSE;
                        }
                        else {
                            if(*info->p == '\n') info->sline++;
            
                            *p++ = *info->p;
                            info->p++;
                            
                            if(p - buf5 >= VAR_NAME_MAX) {
                                fprintf(stderr, "overflow buffer in __typeof__\n");
                                exit(2);
                            }
                        }
                    }
                    
                    info->p++;
                    skip_spaces_and_lf(info);
            
                    skip_spaces_and_lf(info);
            
                    *node = sNodeTree_create_dupe_function(buf2, buf5, info);
                    
                    return TRUE;
                }
            }
        }
        else if(strcmp(buf, "__attribute__") == 0) {
            int brace_num = 0;
            while(*info->p == '(') {
                info->p ++;
                skip_spaces_and_lf(info);
                brace_num++;
            }

            while(*info->p != ')') {
                info->p++;
            }

            while(*info->p == ')') {
                info->p ++;
                skip_spaces_and_lf(info);
            }

            p_before = info->p;
            sline_before = info->sline;

            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
        }
        
        BOOL static_ = FALSE;
        
        if(strcmp(buf, "private") == 0) {
            static_ = TRUE;
            
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
        }
        
        /// forwarding parse until terminated union, struct and enum
//        if(strcmp(buf, "struct") == 0) {
        if(strcmp(buf, "struct") == 0 || (gNCCome && ((strcmp(buf, "protocol") == 0 || strcmp(buf, "interface") == 0)))) {
            BOOL protocol_ = strcmp(buf, "protocol") == 0 || strcmp(buf, "interface") == 0;
            
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char struct_name[VAR_NAME_MAX];
            if(*info->p == '{') {
                create_anonymous_name(struct_name, VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL anonymous = FALSE;
                BOOL definition_struct = FALSE;
                BOOL static_ = TRUE;
                if(!parse_struct(node, struct_name, VAR_NAME_MAX, anonymous, &terminated, definition_struct, protocol_, static_, FALSE, TRUE, info)) {
                    return FALSE;
                }

                if(terminated) {
                    parser_err_msg(info, "undefined variable name");
                    return FALSE;
                }
            }
            else {
                xstrncpy(struct_name, "", VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL anonymous = FALSE;
                BOOL definition_struct = FALSE;
                BOOL static_ = TRUE;
                if(!parse_struct(node, struct_name, VAR_NAME_MAX, anonymous, &terminated, definition_struct, protocol_, static_, FALSE, TRUE, info)) {
                    return FALSE;
                }

                if(terminated) {
                    define_struct = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "enum") == 0) {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char enum_name[VAR_NAME_MAX];
            if(*info->p == '{') {
                create_anonymous_name(enum_name, VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL static_ = TRUE;
                if(!parse_enum(node, enum_name, VAR_NAME_MAX, &terminated, static_, info)) {
                    return FALSE;
                }

                if(terminated) {
                    define_enum = TRUE;
                }
            }
            else {
                xstrncpy(enum_name, "", VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL static_ = TRUE;
                if(!parse_enum(node, enum_name, VAR_NAME_MAX, &terminated, static_, info)) {
                    return FALSE;
                }

                if(terminated) {
                    define_enum = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "union") == 0)
        {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            char union_name[VAR_NAME_MAX];
            if(*info->p == '{') {
                create_anonymous_name(union_name, VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL definition_struct = FALSE;
                BOOL static_ = TRUE;
                if(!parse_union(node, union_name, VAR_NAME_MAX, &terminated, definition_struct, static_, info)) {
                    return FALSE;
                }

                if(terminated) {
                    parser_err_msg(info, "undefined variable name");
                    return FALSE;
                }
            }
            else {
                xstrncpy(union_name, "", VAR_NAME_MAX);

                BOOL terminated = FALSE;
                BOOL definition_struct = FALSE;
                BOOL static_ = TRUE;
                if(!parse_union(node, union_name, VAR_NAME_MAX, &terminated, definition_struct, static_, info)) {
                    return FALSE;
                }

                if(terminated) {
                    define_union = TRUE;
                }
            }

            info->p = p_before2;
            info->sline = sline_before2;
        }
        else if(strcmp(buf, "static") == 0 || strcmp(buf, "private") == 0) {
            char* p_before2 = info->p;
            int sline_before2 = info->sline;

            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }

            if(strcmp(buf, "inline") == 0 || strcmp(buf, "__inline") == 0 || strcmp(buf, "__inline__") == 0 || strcmp(buf, "__DARWIN_OS_INLINE") == 0)
            {
                static_inline = TRUE;
            }
            else {
                info->p = p_before2;
                info->sline = sline_before2;
            }
        }
        
        if(strcmp(buf, "__extension__") == 0 && *info->p == '(') {
            if(!expression(node, FALSE, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "public") == 0) {
            if(*info->p == '{') {
                char* head = info->p+1;
                
                if(!skip_block(info)) {
                    return FALSE;
                }
                
                char* tail = info->p;
                
                while(TRUE) {
                    if(*tail == '}') {
                        break;
                    }
                    else {
                        tail--;
                    }
                }
                
                sBuf_append(&gHeader, head, tail -head);
                sBuf_append(&gHeader, "\n\n", 2);
            }
            else {
                char* head = info->p;
                
                while(*info->p && *info->p != '\n') {
                    info->p++;
                }
                
                char* tail = info->p;
                
                sBuf_append(&gHeader, head, tail -head);
                sBuf_append(&gHeader, "\n\n", 2);
                
                skip_spaces_and_lf(info);
            }
            
            *node = sNodeTree_create_null(info);
        }
        else if(strcmp(buf, "open_struct") == 0) {
            char struct_name[VAR_NAME_MAX];
            if(!parse_word(struct_name, VAR_NAME_MAX, info, TRUE, FALSE))
            {
                return FALSE;
            }
            
            if(*info->p == '{') {
                char* head = info->p+1;
                
                if(!skip_block(info)) {
                    return FALSE;
                }
                
                char* tail = info->p;
                
                while(TRUE) {
                    if(*tail == '}') {
                        break;
                    }
                    else {
                        tail--;
                    }
                }
                
                char source[BUFSIZ];
                
                memcpy(source, head, tail - head);
                source[tail-head] = '\0';
                
                append_open_struct(struct_name, source, info->sname);
            }
            
            *node = sNodeTree_create_null(info);
        }
        else if(strcmp(buf, "__PRETTY_FUNCTION__") == 0) {
            *node = sNodeTree_create_c_string_value(MANAGED xstrdup(info->fun_name), strlen(info->fun_name), info->sline, info);
        }
        else if(strcmp(buf, "return") == 0) {
            if(!parse_return(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "__stack__") == 0) {
            char current_stack_frame_type_name[VAR_NAME_MAX];
            static int n = 0;
            snprintf(current_stack_frame_type_name, VAR_NAME_MAX, "__stack%d", n);
            n++;
            *node = sNodeTree_create_stack(current_stack_frame_type_name, info);
        }
/*
        else if(strcmp(buf, "macro") == 0) {
            if(!parse_macro(node, info))
            {
                return FALSE;
            }
        }
*/
        else if(strcmp(buf, "defer") == 0) {
            if(!parse_defer(node, info))
            {
                return FALSE;
            }
        }
        else if(gNCCome && strcmp(buf, "fn") == 0) {
            char* struct_name = NULL;
            if(!parse_come_function(node, struct_name, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "using") == 0) {
            if(memcmp(info->p, "neo-c", strlen("neo-c")) == 0) {
                info->p += strlen("neo-c");
                skip_spaces_and_lf(info);
                
                gExternC = FALSE;
                gNCCome = TRUE;
            }
            else if(*info->p == 'c' || *info->p =='C') {
                info->p++;
                skip_spaces_and_lf(info);
                
                gExternC = TRUE;
            }
            else if(memcmp(info->p, "safe", strlen("safe")) == 0) {
                info->p += strlen("safe");
                skip_spaces_and_lf(info);
                
                gNCSafeMode = TRUE;
            }
            else if(memcmp(info->p, "unsafe", strlen("unsafe")) == 0) {
                info->p += strlen("unsafe");
                skip_spaces_and_lf(info);
                
                gNCSafeMode = FALSE;
            }
            else {
                parser_err_msg(info, "invalid using language");
                return FALSE;
            }
            
            *node = sNodeTree_create_null(info);
        }
        //else if(strcmp(buf, "struct") == 0 && *info->p != '{' && define_struct) {
        else if((strcmp(buf, "struct") == 0 || (strcmp(buf, "protocol") == 0) || strcmp(buf, "interface") == 0) && *info->p != '{' && define_struct) {
            BOOL protocol_ = strcmp(buf, "protocol") == 0 || strcmp(buf, "interface") == 0;
            
            char struct_name[VAR_NAME_MAX];

            xstrncpy(struct_name, "", VAR_NAME_MAX);
            
            BOOL anonymous = FALSE;
            BOOL definition_struct = FALSE;
            if(!parse_struct(node, struct_name, VAR_NAME_MAX, anonymous, NULL, definition_struct, protocol_, static_, FALSE, FALSE, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "union") == 0 && *info->p != '{' && define_union) {
            char union_name[VAR_NAME_MAX];

            xstrncpy(union_name, "", VAR_NAME_MAX);

            BOOL definition_struct = FALSE;
            if(!parse_union(node, union_name, VAR_NAME_MAX, NULL, definition_struct, static_, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "enum") == 0 && define_enum) {
            char enum_name[VAR_NAME_MAX];

            if(*info->p == '{') {
                create_anonymous_name(enum_name, VAR_NAME_MAX);

                if(!parse_enum(node, enum_name, VAR_NAME_MAX, NULL, static_, info)) {
                    return FALSE;
                }
            }
            else {
                xstrncpy(enum_name, "", VAR_NAME_MAX);

                if(!parse_enum(node, enum_name, VAR_NAME_MAX, NULL, static_, info)) {
                    return FALSE;
                }
            }
        }
        else if(!gExternC && strcmp(buf, "template") == 0) {
            if(strcmp(info->impl_struct_name, "") == 0)
            {
                if(!parse_method_generics_function(node, NULL, info)) {
                    return FALSE;
                }
            }
            else {
                if(!parse_method_generics_function(node, info->impl_struct_name, info)) {
                    return FALSE;
                }
            }
        }
        else if(strcmp(buf, "__FUNCTION__") == 0) {
            *node = sNodeTree_create_c_string_value(info->fun_name, strlen(info->fun_name), info->sline, info);
        }
        else if(strcmp(buf, "__LINE__") == 0) {
            *node = sNodeTree_create_int_value(info->sline, info);
        }
        else if(strcmp(buf, "__builtin_va_arg") == 0) {
            if(!parse_va_arg(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "case") == 0) {
            if(!parse_case(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "default") == 0) {
            if(!parse_default(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "if") == 0) {
            if(!parse_if(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "class") == 0) {
            if(!parse_class(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "guard") == 0) {
            if(!parse_guard(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "switch") == 0) {
            if(!parse_switch(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "while") == 0) {
            if(!parse_while(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "do") == 0) {
            if(!parse_do(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "for") == 0) {
            if(!parse_for(node, info)) {
                return FALSE;
            }
        }
        else if(!gExternC && strcmp(buf, "true") == 0) {
            *node = sNodeTree_create_true(info);
        }
        else if(!gExternC && strcmp(buf, "false") == 0) {
            *node = sNodeTree_create_false(info);
        }
        else if(!gExternC && strcmp(buf, "null") == 0) {
            *node = sNodeTree_create_null(info);
        }
        else if(!gExternC && strcmp(buf, "clone") == 0) {
            if(!parse_clone(node, info)) {
                return FALSE;
            }
        }
        else if(!gExternC && strcmp(buf, "new") == 0) {
            if(!parse_new(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "auto") == 0) {
            if(!parse_var(node, info, FALSE)) {
                return FALSE;
            }
        }
        else if(gNCCome && strcmp(buf, "var") == 0) {
            if(!parse_var(node, info, FALSE)) {
                return FALSE;
            }
        }
        else if(gNCCome && strcmp(buf, "val") == 0) {
            if(!parse_var(node, info, TRUE)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "throw") == 0) {
            if(!parse_throw(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "auto_immutable") == 0) {
            if(!parse_var(node, info, TRUE)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "come") == 0) {
            if(!parse_come(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "delete") == 0) {
            if(!parse_delete(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "borrow") == 0) {
            if(!parse_borrow(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "nomove") == 0) {
            if(!parse_nomove(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "nullable") == 0) {
            if(!parse_nullable(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "nonullable") == 0) {
            if(!parse_nonullable(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "dummy_heap") == 0) {
            if(!parse_dummy_heap(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "managed") == 0) {
            if(!parse_managed(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "isheap") == 0) {
            if(!parse_is_heap(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "alloca") == 0 || strcmp(buf, "__builtin_alloca") == 0) {
            if(!parse_alloca(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "sizeof") == 0) 
        {
            if(!parse_sizeof(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "__func__") == 0) 
        {
            *node = sNodeTree_create_func_name(info);
        }
        else if(strcmp(buf, "__sline__") == 0) 
        {
            *node = sNodeTree_create_sline(info);
        }
        else if(strcmp(buf, "__sname__") == 0) 
        {
            *node = sNodeTree_create_sname(info);
        }
        else if(strcmp(buf, "__caller_sline__") == 0) 
        {
            *node = sNodeTree_create_caller_sline(info);
        }
        else if(strcmp(buf, "__caller_sname__") == 0) 
        {
            *node = sNodeTree_create_caller_sname(info);
        }
        else if(strcmp(buf, "__alignof__") == 0 || strcmp(buf, "_Alignof") == 0) 
        {
            if(!parse_alignof(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "clone") == 0) {
            if(!parse_clone(node, info)) {
                return FALSE;
            }
        }
        else if(info->mBlockLevel == 0 && strcmp(buf, "impl") == 0) {
            if(!parse_impl(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "inherit") == 0 && *info->p == '(') {
            if(!parse_inherit(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "typedef") == 0) {
            if(!parse_typedef(node, static_, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "is_gc_heap") == 0) {
            if(!parse_is_gc_heap(node, info)) {
                return FALSE;
            }
        }
        else if(strcmp(buf, "break") == 0) {
            *node = sNodeTree_create_break_expression(info);
        }
        else if(strcmp(buf, "continue") == 0) {
            *node = sNodeTree_create_continue_expression(info);
        }
        else if(strcmp(buf, "extern") == 0) {
            char* definition_top = info->p;
            char* p = info->p;
            int sline = info->sline;

            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
            
            sNodeType* result_type = NULL;
            char name[VAR_NAME_MAX+1];
            BOOL function_pointer_result_function = FALSE;
            if(!parse_type(&result_type, info, name, FALSE, FALSE, &function_pointer_result_function, FALSE, TRUE, FALSE, FALSE, FALSE))
            {
                return FALSE;
            }

            if(function_pointer_result_function) {
                info->p = p;
                info->sline = sline;

                BOOL array_result_function = FALSE;
                if(!parse_function_pointer_result_function(node, &array_result_function, info)) {
                    return FALSE;
                }
                
                if(array_result_function) {
                    sNodeType* result_type = NULL;
                    if(!parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, TRUE, TRUE, FALSE, FALSE, FALSE))
                    {
                        return FALSE;
                    }
                    
                    expect_next_character_with_one_forward("(", info);
                    expect_next_character_with_one_forward("*", info);
                    
                    if(!parse_word(name, VAR_NAME_MAX, info, TRUE, FALSE))
                    {
                        return FALSE;
                    }
                    
                    char* struct_name = NULL;
                    if(!parse_function(node, result_type, name, struct_name, definition_top, info)) {
                        return FALSE;
                    }
                }
            }
            else if(name[0] != '\0') {
                BOOL extern_ = TRUE;
                if(!parse_variable(node, result_type, name, extern_, info, definition_top, FALSE)) 
                {
                    return FALSE;
                }
            }
            else {
                unsigned int nodes[NODES_MAX];
                memset(nodes, 0, sizeof(unsigned int)*NODES_MAX);
                int num_nodes = 0;
                
                BOOL first = TRUE;

                while(TRUE) {
                    sNodeType* result_type2;
                    if(first) {
                        result_type2 = clone_node_type(result_type);
                    }
                    else {
                        result_type2 = clone_node_type(result_type);
                    }

                    if(!parse_variable_name(name, VAR_NAME_MAX, info, result_type2, TRUE, FALSE))
                    {
                        return FALSE;
                    }

                    if(*info->p == '(') {
                        char* struct_name = NULL;
                        if(!parse_function(node, result_type2, name, struct_name, definition_top, info)) {
                            return FALSE;
                        }
                    }
                    else {
                        BOOL extern_ = TRUE;
                        if(!parse_variable(node, result_type2, name, extern_, info, definition_top, FALSE)) {
                            return FALSE;
                        }
                    }

                    nodes[num_nodes++] = *node;

                    if(num_nodes >= NODES_MAX) {
                        fprintf(stderr, "overflow define variable max");
                        return FALSE;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        break;
                    }
                    if(first) {
                        result_type->mPointerNum -= result_type->mOriginalPointerNum;
                        first = FALSE;
                    }
                }

                if(num_nodes > 1) {
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
            }
        }
        else if(static_inline || strcmp(buf, "inline") == 0 || strcmp(buf, "__inline") == 0 || strcmp(buf, "__inline__") == 0|| strcmp(buf, "__DARWIN_OS_INLINE") == 0) 
        {
            if(!parse_inline_function(node, info)) 
            {
                return FALSE;
            }
        }
        else if(strcmp(buf, "goto") == 0) {
            if(!parse_goto(node, info)) {
                return FALSE;
            }
        }
        else if(*info->p == ':' && !info->in_case && !info->in_conditional_operator) {
            if(!parse_label(node, buf, info)) {
                return FALSE;
            }
        }
        else if(*info->p == '!' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces_and_lf(info);
            
            char var_name[VAR_NAME_MAX];

            xstrncpy(var_name, buf, VAR_NAME_MAX);

            *node = sNodeTree_create_load_variable(var_name, info);
            
            *node = sNodeTree_create_unwrap(*node, info);
        }
/*
        else if(*info->p == '@' && (*(info->p+1) == '(' || *(info->p+1) == '{' || *(info->p+1) == '[' || *(info->p+1) == '<'))
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(!parse_call_macro(node, buf, info)) {
                return FALSE;
            }
        }
*/
        /// local variable ///
        else if(get_variable_from_table(info->lv_table, buf))
        {
            char* p = info->p;
            int sline = info->sline;
                
            int num_bufs = 0;
            char bufs[64][VAR_NAME_MAX];
            
            xstrncpy(bufs[0], buf, VAR_NAME_MAX);
            num_bufs++;
            
            while(TRUE) {
                if(*info->p == ',' && info->comma_op) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    (void)parse_word(bufs[num_bufs], VAR_NAME_MAX, info, FALSE, FALSE);
                    
                    num_bufs++;
                    
                    if(num_bufs >= 64) {
                        fprintf(stderr, "%s %d: overflow multiple assignment\n", info->sname, info->sline);
                        exit(1);
                    }
                }
                else {
                    break;
                }
            }
            
            if(num_bufs > 1 && *info->p == '=') {
                char* bufs2[64];
                
                int j;
                for(j = 0; j<num_bufs; j++) {
                    bufs2[j] = bufs[j];
                }
                if(!expression_node_variable(node, enable_assginment, num_bufs, bufs2, info)) {
                    return FALSE;
                }
            }
            else {
                info->p = p;
                info->sline = sline;
                
                char* bufs2[64];
                
                int j;
                for(j = 0; j<num_bufs; j++) {
                    bufs2[j] = bufs[j];
                }
                if(!expression_node_variable(node, enable_assginment, num_bufs, bufs2, info)) {
                    return FALSE;
                }
            }
        }
        /// load method block parent ///
        else if(info->lv_table_method_block_parent && get_variable_from_table(info->lv_table_method_block_parent, buf)) {
            if(!expression_node_variable_method_block_parent(node, enable_assginment, buf, info)) {
                return FALSE;
            }
        }
        else if(gNCHeader || is_type_name(buf, info) || strcmp(buf, "typeof") == 0) 
        {
            info->p = p_before;
            info->sline = sline_before;
            
            char* definition_top = info->p;

            char* p = info->p;
            int sline = info->sline;

            char buf_before[VAR_NAME_MAX];

            xstrncpy(buf_before, buf, VAR_NAME_MAX);

            sNodeType* result_type = NULL;
            char name[VAR_NAME_MAX+1];
            BOOL function_pointer_result_function = FALSE;
            if(!parse_type(&result_type, info, name, FALSE, FALSE, &function_pointer_result_function, FALSE, TRUE, FALSE, FALSE, FALSE)) 
            {
                return FALSE;
            }
            if(function_pointer_result_function) {
                info->p = p;
                info->sline = sline;

                BOOL array_result_function = FALSE;
                if(!parse_function_pointer_result_function(node, &array_result_function, info)) {
                    return FALSE;
                }
                
                if(array_result_function) {
                    sNodeType* result_type = NULL;
                    if(!parse_type(&result_type, info, NULL, FALSE, FALSE, NULL, TRUE, TRUE, FALSE, FALSE, FALSE))
                    {
                        return FALSE;
                    }
                    
                    expect_next_character_with_one_forward("(", info);
                    expect_next_character_with_one_forward("*", info);
                    
                    if(!parse_word(name, VAR_NAME_MAX, info, TRUE, FALSE))
                    {
                        return FALSE;
                    }
                    
                    char* struct_name = NULL;
                    if(!parse_function(node, result_type, name, struct_name, definition_top, info)) {
                        return FALSE;
                    }
                }
            }
            else if(strcmp(name, "lambda") == 0) {
                char buf[VAR_NAME_MAX];
                (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                if(!parse_lambda(node, result_type, info)) {
                    return FALSE;
                }
            }
            else if(name[0] != '\0') {
                if(result_type->mArrayPointer) {
                    if(*info->p == '=') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        unsigned int right_node = 0;
                        if(!expression(&right_node, TRUE, info)) {
                            return FALSE;
                        }
                        
                        BOOL global = info->mBlockLevel == 0;
                        BOOL alloc = TRUE;
                        check_already_added_variable(info->lv_table, name, info);
                        if(!add_variable_to_table(info->lv_table, name, result_type, FALSE, gNullLVALUE, -1, global, FALSE, FALSE, FALSE))
                        {
                            fprintf(stderr, "overflow variable table\n");
                            exit(2);
                        }
                        *node = sNodeTree_create_store_variable(name, right_node, alloc, global, FALSE, info);
                    }
                }
                else {
                    BOOL extern_ = FALSE;
                    if(!parse_variable(node, result_type, name, extern_, info, definition_top, FALSE)) 
                    {
                        return FALSE;
                    }
                }
            }
            else if(*info->p == '(' || *info->p == '{') {
                char* fun_name = buf_before;

                unsigned int params[PARAMS_MAX];
                int num_params = 0;

                if(!parse_funcation_call_params(&num_params, params, info)) 
                {
                    return FALSE;
                }

                if(strcmp(fun_name, "va_start") == 0) {
                    num_params = 1;
                };

                *node = sNodeTree_create_function_call(fun_name, params, num_params, FALSE, FALSE, info->mFunVersion, info);
                
                if(*info->p == '!' && *(info->p+1) != '=') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    *node = sNodeTree_create_unwrap(*node, info);
                }
            }
            else {
                unsigned int nodes[NODES_MAX];
                memset(nodes, 0, sizeof(unsigned int)*NODES_MAX);
                int num_nodes = 0;
                
                int pointer_num_default = result_type->mPointerNum - result_type->mOriginalPointerNum;

                while(TRUE) {
                    sNodeType* result_type2 = clone_node_type(result_type);

                    if(!parse_variable_name(name, VAR_NAME_MAX, info, result_type2, TRUE, FALSE))
                    {
                        return FALSE;
                    }

                    if(*info->p == '(') {
                        char* struct_name = NULL;
                        if(strcmp(info->impl_struct_name, "") != 0)
                        {
                            struct_name = info->impl_struct_name;
                            
                            if(strcmp(name, "finalize") == 0 || strcmp(name, "clone") == 0) {
                                struct_name = info->impl_struct_name2;
                            }
                        }

                        if(info->mNumGenerics > 0) {
                            if(!parse_generics_function(node, result_type2, name, struct_name, info)) {
                                return FALSE;
                            }
                        }
                        else {
                            if(info->mInClass) {
                                char name2[VAR_NAME_MAX];
                                xstrncpy(name2, info->impl_struct_name, VAR_NAME_MAX);
                                if(strcmp(name, "finalize") == 0 || strcmp(name, "clone") == 0) {
                                    xstrncat(name2, "_", VAR_NAME_MAX);
                                }
                                else {
                                    xstrncat(name2, "p_", VAR_NAME_MAX);
                                }
                                xstrncat(name2, name, VAR_NAME_MAX);
                                
                                if(!parse_function(node, result_type2, name2, struct_name, definition_top, info)) {
                                    return FALSE;
                                }
                            }
                            else {
                                if(!parse_function(node, result_type2, name, struct_name, definition_top, info)) {
                                    return FALSE;
                                }
                            }
                        }
                    }
                    else {
                        BOOL extern_ = FALSE;
                        if(!parse_variable(node, result_type2, name, extern_, info, definition_top, FALSE)) {
                            return FALSE;
                        }
                    }

                    nodes[num_nodes++] = *node;

                    if(num_nodes >= NODES_MAX) {
                        fprintf(stderr, "overflow define variable max");
                        return FALSE;
                    }

                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        break;
                    }
                    result_type->mPointerNum = pointer_num_default;
                }

                if(num_nodes > 1) {
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
            }
        }
/*
        else if(get_function_from_table(buf) && *info->p == '(') {
            char* fun_name = buf;

            unsigned int params[PARAMS_MAX];
            int num_params = 0;

            if(!parse_funcation_call_params(&num_params, params, info)) 
            {
                return FALSE;
            }

            if(strcmp(fun_name, "va_start") == 0) {
                num_params = 1;
            };

            *node = sNodeTree_create_function_call(fun_name, params, num_params, FALSE, FALSE, info->mFunVersion, info);
            
            if(*info->p == '!' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                *node = sNodeTree_create_unwrap(*node, info);
            }
        }
*/
        else if(info->mBlockLevel == 0 && *info->p == '(') {
            char* definition_top = info->p;
            sNodeType* result_type = create_node_type_with_class_name("int");
            
            char* struct_name = NULL;
            if(!parse_function(node, result_type, buf, struct_name, definition_top, info))
            {
                return FALSE;
            }
        }
        else if(*info->p == '(') {
            char* fun_name = buf;

            unsigned int params[PARAMS_MAX];
            int num_params = 0;

            if(!parse_funcation_call_params(&num_params, params, info)) 
            {
                return FALSE;
            }

            if(strcmp(fun_name, "va_start") == 0) {
                num_params = 1;
            };

            *node = sNodeTree_create_function_call(fun_name, params, num_params, FALSE, FALSE, info->mFunVersion, info);
            
            if(*info->p == '!' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                *node = sNodeTree_create_unwrap(*node, info);
            }
        }
        else {
            *node = sNodeTree_create_load_function(buf, info, sline_before);
        }
    }
    else if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!expression(node, TRUE, info)) {
            return FALSE;
        }
        skip_spaces_and_lf(info);
    }
    else if(*info->p == '=' && *(info->p+1) != '=') {
    }
    else if(*info->p == '+' && *(info->p+1) == '+') {
    }
    else if(*info->p == '-' && *(info->p+1) == '-') {
    }
    else if(*info->p == '+' && *(info->p+1) == '=') {
    }
    else if(*info->p == '-' && *(info->p+1) == '=') {
    }
    else if(*info->p == '*' && *(info->p+1) == '=') {
    }
    else if(*info->p == '/' && *(info->p+1) == '=') {
    }
    else if(*info->p == '%' && *(info->p+1) == '=') {
    }
    else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=') {
    }
    else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=') {
    }
    else if(*info->p == '&' && *(info->p+1) == '=') {
    }
    else if(*info->p == '^' && *(info->p+1) == '=') {
    }
    else if(*info->p == '|' && *(info->p+1) == '=') {
    }
    else {
        char msg[1024];
        snprintf(msg, 1024, "invalid character (character code %d) (%c)", *info->p, *info->p);
        parser_err_msg(info, msg);

        if(*info->p == '\n') info->sline++;
        info->p++;
        skip_spaces_and_lf(info);
        
        *node = 0;
    }
    
    
    sNodeType* cast_pointer_type = NULL;
    
    if(!info->in_derefference && *info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);
        
        unsigned int right_node = 0;
        if(!expression(&right_node, FALSE, info)) 
        {
            return FALSE;
        }

        if(right_node == 0) {
            parser_err_msg(info, "require right value for =");
        };
        
        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            *node = sNodeTree_create_store_value_to_derefference(*node, right_node, info);
        }
        else if(gNodes[*node].mNodeType == kNodeTypeNodes) {
            unsigned int nodes[32];
            int num_nodes = 0;
            
            num_nodes = gNodes[*node].uValue.sNodes.mNumNodes;
            
            int j;
            int n = 0;
            for(j=0; j< num_nodes-1; j++) {
                nodes[j] = gNodes[*node].uValue.sNodes.mNodes[j];
                n++;
            }
            left_node = gNodes[*node].uValue.sNodes.mNodes[num_nodes-1];
            
            if(gNodes[left_node].mNodeType == kNodeTypeDerefference) {
                *node = sNodeTree_create_store_value_to_derefference(left_node, right_node, info);
                
                node[n] = *node;
                n++;
            }
            else {
                left_node = sNodeTree_create_reffernce(left_node, info);
                *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
                
                nodes[n] = *node;
                n++;
            }
            
            *node = sNodeTree_create_nodes(nodes, n, TRUE, info);
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
            *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
        }
    }
    else if(gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p == '+' && *(info->p+1) == '+')
    {
        info->p+=2;
        skip_spaces_and_lf(info);
        
        unsigned int node1 = *node;
        
        unsigned int node2 = sNodeTree_create_int_value(1, info);

        unsigned int right_node = sNodeTree_create_add(node1, node2, 0, TRUE, info);
        unsigned int right_node2 = sNodeTree_create_sub(node1, node2, 0, TRUE, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
            
            unsigned int nodes[32];
            int num_nodes = 2;
            
            nodes[0] = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
            nodes[1] = right_node2;
            *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
        }
/*
        else if(gNodes[*node].mNodeType == kNodeTypeLoadField) {
            left_node = *node;
            
            char* field_name = gNodes[*node].uValue.sLoadField.mVarName;
            
            unsigned int nodes[32];
            int num_nodes = 2;
            
            nodes[0] = sNodeTree_create_store_field(field_name, left_node, right_node, TRUE, info);
            nodes[1] = right_node2;
            *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
        }
*/
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
            
            unsigned int nodes[32];
            int num_nodes = 2;
            
            nodes[0] = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
            nodes[1] = right_node2;
            *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
        }
    }
    else if(gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p == '-' && *(info->p+1) == '-')
    {
        info->p+=2;
        skip_spaces_and_lf(info);
        
        unsigned int node1 = *node;

        unsigned int node2 = sNodeTree_create_int_value(1, info);

        unsigned int right_node = sNodeTree_create_sub(node1, node2, 0, TRUE, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '+' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_add(node1, node2, 0, TRUE, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '-' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_sub(node1, node2, 0, TRUE, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '*' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_mult(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '/' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_div(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '%' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_mod(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_left_shift(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
    {
        info->p+=3;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_right_shift(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '&' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_and(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '^' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_xor(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(!info->in_derefference && *info->p == '|' && *(info->p+1) == '=')
    {
        info->p+=2;
        skip_spaces_and_lf(info);

        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        unsigned int node1 = *node;

        unsigned int right_node = sNodeTree_create_or(node1, node2, 0, info);

        unsigned int left_node;
        if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
            left_node = *node;
        }
        else {
            left_node = sNodeTree_create_reffernce(*node, info);
        }
        
        *node = sNodeTree_create_store_value_to_address(left_node, right_node, FALSE, cast_pointer_type, FALSE, info);
    }
    else if(gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p == '(') {
        unsigned int params[PARAMS_MAX];
        int num_params = 0;

        if(!parse_funcation_call_params(&num_params, params, info)) 
        {
            return FALSE;
        };

        *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
    }
    
/*
    if(gNodes[*node].mNodeType == kNodeTypeDerefference) {
        if(gNodes[gNodes[*node].mLeft].mNodeType == kNodeTypeFunctionCall) {
            sNodeType* cast_pointer_type = NULL;
            
            if(*info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
    
                unsigned int node2 = 0;
                if(!expression(&node2, FALSE, info)) 
                {
                    return FALSE;
                }
    
                if(*node == 0) {
                    parser_err_msg(info, "require value for *(5)");
                };
    
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '+' && *(info->p+1) == '+')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int right_node = sNodeTree_create_int_value(1, info);
        
                unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '-' && *(info->p+1) == '-')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int right_node = sNodeTree_create_int_value(1, info);
        
                unsigned int node2 = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '+' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_add(left_node, right_node, 0, TRUE, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '-' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_sub(left_node, right_node, 0, TRUE, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '*' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_mult(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '/' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_div(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '%' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_mod(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
            {
                info->p+=3;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_left_shift(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
            {
                info->p+=3;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_right_shift(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '&' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_and(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '^' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_xor(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
            else if(*info->p == '|' && *(info->p+1) == '=')
            {
                info->p+=2;
                skip_spaces_and_lf(info);
        
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
        
                unsigned int left_node = sNodeTree_create_dereffernce(*node, FALSE, cast_pointer_type, info);
        
                unsigned int node2 = sNodeTree_create_or(left_node, right_node, 0, info);
        
                *node = sNodeTree_create_store_value_to_address(*node, node2, FALSE, cast_pointer_type, FALSE, info);
            }
        }
    }
*/
    

    /// post position expression ///
    if(!postposition_operator(node, enable_assginment, info))
    {
        return FALSE;
    }

    if(!parse_sharp(info)) {
        return FALSE;
    }
    
    return TRUE;
}
