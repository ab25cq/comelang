#include "common.h"
#include <ctype.h>

BOOL postposition_operator(unsigned int* node, BOOL enable_assginment, sParserInfo* info)
{
    if(*node == 0) {
        return TRUE;
    }

    while(*info->p) {
        char c = *(info->p+1);
        /// call method or access field ///
        if(((*info->p == '.' && *(info->p+1) != '.')|| (*info->p == '-' && *(info->p+1) == '>')) && !info->no_method_call)
        {
            if(!parse_sharp(info)) {
                return FALSE;
            }
            if(*info->p == '-') {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            else {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(!parse_sharp(info)) {
                return FALSE;
            }

            if(xisdigit(*info->p)) {
                int n = *info->p - '0';
                info->p++;
                skip_spaces_and_lf(info);
                
                if(*info->p == '=' && *(info->p+1) != '=') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    char var_name[VAR_NAME_MAX];
                    snprintf(var_name, VAR_NAME_MAX, "v%d", n);

                    unsigned int right_node = 0;

                    if(!expression(&right_node, FALSE, info)) {
                        return FALSE;
                    }

                    if(right_node == 0) {
                        parser_err_msg(info, "Require right value");
                        *node = 0;
                    }
                    else {
                        *node = sNodeTree_create_store_field(var_name, *node, right_node, TRUE, info);
                    }
                }
                else {
                    char fun_name[VAR_NAME_MAX];
                    snprintf(fun_name, VAR_NAME_MAX, "item%d", n);
    
                    unsigned int params[PARAMS_MAX];
                    int num_params = 0;
    
                    params[0] = *node;
                    num_params++;
    
                    *node = sNodeTree_create_function_call(fun_name, params, num_params, TRUE, FALSE, info->mFunVersion, info);
                    
                    if(*info->p == '!' && *(info->p+1) != '=') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        *node = sNodeTree_create_unwrap(*node, info);
                    }
                }
            }
            else if(xisalpha(*info->p) || *info->p == '_') 
            {
                char buf[VAR_NAME_MAX];

                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) {
                    return FALSE;
                }
                skip_spaces_and_lf(info);

                if(!parse_sharp(info)) {
                    return FALSE;
                }

                BOOL type_name_after_word = FALSE;

                char* p = info->p;
                int sline = info->sline;

                char buf2[VAR_NAME_MAX];

                if(!parse_word(buf2, VAR_NAME_MAX, info, FALSE, FALSE)) {
                    return FALSE;
                }
                

                if(is_type_name(buf2, info)) {
                    type_name_after_word = TRUE;
                }

                info->p = p;
                info->sline = sline;

                /// call methods ///
                if(*info->p == '(' || *info->p == '{' || type_name_after_word) {
                    if(gExternC) {
                        unsigned int obj_node = *node;
                        
                        unsigned int params[PARAMS_MAX];
                        int num_params = 0;

                        if(!parse_funcation_call_params(&num_params, params, info)) 
                        {
                            return FALSE;
                        };

                        *node = sNodeTree_create_load_field(buf, obj_node, info);

                        *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
                    }
                    else {
                        char* fun_name = buf;
                        
                        if(strcmp(fun_name, "catch") == 0) {
                            if(!parse_catch(node, info)) {
                                return FALSE;
                            }
                        }
                        else {
                            unsigned int params[PARAMS_MAX];
                            int num_params = 0;
        
                            params[0] = *node;
                            num_params++;
        
                            if(!parse_funcation_call_params(&num_params, params, info)) 
                            {
                                return FALSE;
                            };
        
                            *node = sNodeTree_create_function_call(fun_name, params, num_params, TRUE, FALSE, info->mFunVersion, info);
                            
                            if(*info->p == '!' && *(info->p+1) != '=') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                
                                *node = sNodeTree_create_unwrap(*node, info);
                            }
                        }
                    }
                }
                /// access fields ///
                else {
                    if(enable_assginment && *info->p == '=' && *(info->p +1) != '=' && *(info->p+1) != '>') {
                        info->p++;
                        skip_spaces_and_lf(info);

                        char var_name[VAR_NAME_MAX];
                        xstrncpy(var_name, buf, VAR_NAME_MAX);
                    
                        unsigned int right_node = 0;

                        if(!expression(&right_node, FALSE, info)) {
                            return FALSE;
                        }

                        if(right_node == 0) {
                            parser_err_msg(info, "Require right value");
                            *node = 0;
                        }
                        else {
                            if(strcmp(var_name, "protocol_obj") == 0) {
                                *node = sNodeTree_create_store_field_of_protocol(*node, right_node, info);
                            }
                            else {
                                *node = sNodeTree_create_store_field(var_name, *node, right_node, TRUE, info);
                            }
                        }
                    }
                    else {
                        unsigned int obj_node = *node;
                        
                        if(*info->p == '+' && *(info->p+1) == '+')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            unsigned int right_node = sNodeTree_create_int_value(1, info);
                            
                            unsigned int nodes[32];
                            int num_nodes = 2;
                            
                            *node = sNodeTree_create_add(field_node, right_node, TRUE, 1, info);
                            nodes[0] = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
                            nodes[1] = sNodeTree_create_sub(field_node, right_node, 1, FALSE, info);
                            *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
                        }
                        else if(*info->p == '-' && *(info->p+1) == '-')
                        {
                            info->p+=2;
                            skip_spaces_and_lf(info);

                            char var_name[VAR_NAME_MAX];
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            unsigned int right_node = sNodeTree_create_int_value(1, info);
                            
                            unsigned int nodes[32];
                            int num_nodes = 2;
                            
                            *node = sNodeTree_create_sub(field_node, right_node, TRUE, 1, info);
                            nodes[0] = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
                            nodes[1] = sNodeTree_create_add(field_node, right_node, 1, FALSE, info);
                            *node = sNodeTree_create_nodes(nodes, num_nodes, TRUE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_add(field_node, right_node, TRUE, 1, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_sub(field_node, right_node, TRUE, 1, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_mult(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_div(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_mod(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_left_shift(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_right_shift(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_and(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_xor(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
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
                            xstrncpy(var_name, buf, VAR_NAME_MAX);

                            unsigned int left_node = *node = sNodeTree_create_load_field(buf, obj_node, info);

                            unsigned int field_node = *node;
                            
                            *node = sNodeTree_create_or(field_node, right_node, TRUE, info);
                            *node = sNodeTree_create_store_field(var_name, obj_node, *node, FALSE, info);
                        }
                        else if(*info->p == '-' && *(info->p+1) == '>' && *(info->p+2) == '(')
                        {
                            info->p+=2;

                            unsigned int params[PARAMS_MAX];
                            int num_params = 1;
                            
                            params[0] = obj_node;

                            if(!parse_funcation_call_params(&num_params, params, info)) 
                            {
                                return FALSE;
                            };

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
                        }
                        else if(*info->p == '=' && *(info->p+1) == '>' && *(info->p+2) == '(')
                        {
                            info->p+=2;
                            
                            unsigned int params[PARAMS_MAX];
                            int num_params = 0;

                            if(!parse_funcation_call_params(&num_params, params, info)) 
                            {
                                return FALSE;
                            };

                            *node = sNodeTree_create_load_field(buf, obj_node, info);

                            *node = sNodeTree_create_lambda_call(*node, params, num_params, info);
                        }
                        else {
                            if(*info->p == '!' && *(info->p+1) != '=') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                
                                *node = sNodeTree_create_load_field(buf, obj_node, info);
                                
                                *node = sNodeTree_create_unwrap(*node, info);
                            }
                            else {
                                *node = sNodeTree_create_load_field(buf, obj_node, info);
                            }
                        }
                    }
                }
            }
            else if(!(c >= '0' && c <= '9')) {
                char msg[1024];
                snprintf(msg, 1024, "require method name or field name after . (%c)", *info->p);
                parser_err_msg(info, msg);
                *node = 0;
                break;
            }
        }
        else if(gNCCome && *info->p == 'a' && *(info->p+1) == 's') {
            info->p+=2;
            skip_spaces_and_lf(info);
            
            sNodeType* node_type = NULL;
            if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE))
            {
                return FALSE;
            }
    
            *node = sNodeTree_create_cast(node_type, *node, info);
        }
        /// access element ///
        else if(*info->p == '[') {
            int num_dimention = 0;
            unsigned int index_node[ARRAY_DIMENTION_MAX];

            while(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);
                
                BOOL getting_refference = info->getting_refference;
                info->getting_refference = FALSE;

                if(!expression(&index_node[num_dimention], TRUE, info)) {
                    return FALSE;
                }
                
                info->getting_refference = getting_refference;

                if(index_node[num_dimention] == 0) {
                    parser_err_msg(info, "Require index value");
                    *node = 0;
                    break;
                }

                num_dimention++;

                if(num_dimention >= ARRAY_DIMENTION_MAX) {
                    parser_err_msg(info, "Ovewflow array dimetion");
                    return FALSE;
                }

                expect_next_character_with_one_forward("]", info);
            }

            if(enable_assginment && *info->p == '=' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);

                unsigned int right_node = 0;

                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }

                if(right_node == 0) {
                    parser_err_msg(info, "Require right value");
                    *node = 0;
                }
                else {
                    *node = sNodeTree_create_store_element(*node, index_node, num_dimention, right_node, info);
                }
            }
            else {
                *node = sNodeTree_create_load_array_element(*node, index_node, num_dimention, info);
            }
            
            if(*info->p == '!' && *(info->p+1) != '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                *node = sNodeTree_create_unwrap(*node, info);
            }
        }
        /// access channel ///
        else if(*info->p == '@') {
            info->p++;
            skip_spaces_and_lf(info);

            int num;
            if(*info->p == '0') {
                info->p++;
                skip_spaces_and_lf(info);

                num = 0;
            }
            else if(*info->p == '1') {
                info->p++;
                skip_spaces_and_lf(info);

                num = 1;
            }
            else {
                parser_err_msg(info, "invalid channel element");
                return FALSE;
            }

            *node = sNodeTree_create_load_channel_element(*node, num, info);
        }
        else if(gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p == '+' && *(info->p+1) == '+')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_plus_plus(*node, info);
        }
        else if(gMultDivPlusPlusEnableNode[gNodes[*node].mNodeType] && *info->p == '-' && *(info->p+1) == '-')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            *node = sNodeTree_create_minus_minus(*node, info);
        }
        else if(enable_assginment && *info->p == '+' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_plus(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '-' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_minus(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '*' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_mult(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '/' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_div(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '%' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_mod(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '<' && *(info->p+1) == '<' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node  = sNodeTree_create_equal_lshift(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '>' && *(info->p+1) == '>' && *(info->p+2) == '=')
        {
            info->p+=3;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_rshift(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '&' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_and(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '^' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_xor(*node, right_node, info);
        }
        else if(enable_assginment && *info->p == '|' && *(info->p+1) == '=')
        {
            info->p+=2;
            skip_spaces_and_lf(info);

            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            };

            *node = sNodeTree_create_equal_or(*node, right_node, info);
        }
        else {
            break;
        }
    }

    if(!parse_sharp(info)) {
        return FALSE;
    }

    return TRUE;
}

BOOL parse_alloca(unsigned int* node, sParserInfo* info)
{
    sNodeType* node_type = NULL;

    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) {
        return FALSE;
    }

    sCLClass* klass = node_type->mClass;

    if(klass) {
        unsigned int object_num = 0;
        if(*info->p == '[') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!expression(&object_num, TRUE, info)) {
                return FALSE;
            }

            expect_next_character_with_one_forward("]", info);
        };

        *node = sNodeTree_create_stack_object(node_type, object_num, info->sname, info->sline, info);
    }
    else {
        parser_err_msg(info, "Invalid type name");
    }

    return TRUE;
}

BOOL parse_sizeof(unsigned int* node, sParserInfo* info)
{
    BOOL no_paren = FALSE;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        no_paren = TRUE;
    }

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        BOOL define_struct_only = FALSE;
        if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) {
            return FALSE;
        }

        if(!no_paren) {
            expect_next_character_with_one_forward(")", info);
        }

        *node = sNodeTree_create_sizeof(node_type, info);
    }
    else {
        int sline = info->sline;
        
        unsigned int nodes[NODES_MAX];
        int num_nodes = 0;
        while(TRUE) {
            if(!expression_node(node, FALSE, info)) {
                return FALSE;
            }
            
            nodes[num_nodes++] = *node;
            
            if(num_nodes >= NODES_MAX) {
                fprintf(stderr, "overflow sizeof expression\n");
                exit(1);
            }
            
            if(*info->p == '\0') {
                fprintf(stderr, "%s %d: unexpected source end close ) for sizeof expression\n", info->sname, sline);
                exit(2);
            }
            else if(no_paren) {
                break;
            }
            else if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
        }

        *node = sNodeTree_create_sizeof_expression(num_nodes, nodes, info);
    }

    return TRUE;
}

BOOL parse_alignof(unsigned int* node, sParserInfo* info)
{
    BOOL no_paren = FALSE;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    else {
        no_paren = TRUE;
    }

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) {
            return FALSE;
        }

        if(!no_paren) {
            expect_next_character_with_one_forward(")", info);
        }

        *node = sNodeTree_create_alignof(node_type, info);
    }
    else {
        if(!expression_node(node, FALSE, info)) {
            return FALSE;
        }

        if(!no_paren) {
            expect_next_character_with_one_forward(")", info);
        }

        *node = sNodeTree_create_alignof_expression(*node, info);
    }

    return TRUE;
}

BOOL parse_new(unsigned int* node, sParserInfo* info)
{
    sNodeType* node_type = NULL;

    BOOL gc = gNCGC;

    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'G' && *(info->p+1) == 'C') {
            info->p+=2;
            skip_spaces_and_lf(info);
        }

        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
        }

        gc = TRUE;
    }

    if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, TRUE, FALSE)) {
        return FALSE;
    }

    sCLClass* klass = node_type->mClass;
    
    if(klass) {
        if(klass->mProtocol && *info->p == '(') {
            unsigned int params[PARAMS_MAX];
            int num_params = 0;

            if(!parse_funcation_call_params(&num_params, params, info)) 
            {
                return FALSE;
            }
    
            *node = sNodeTree_create_object(node_type, 0, num_params, params, 0, 0, 0, NULL, 0, info->sname, info->sline, gc, info);
        }
        else {
            unsigned int object_num = 0;
            if(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);
    
                if(!expression(&object_num, TRUE, info)) {
                    return FALSE;
                }
    
                expect_next_character_with_one_forward("]", info);
            }
            
            if(*info->p == '(') {
                unsigned int params[PARAMS_MAX];
                int num_params = 1;
                
                params[0] = sNodeTree_create_object(node_type, object_num, 0, NULL, 0, 0, 0, NULL, 0, info->sname, info->sline, gc, info);
    
                if(!parse_funcation_call_params(&num_params, params, info)) 
                {
                    return FALSE;
                }
        
                char* fun_name = "initialize";
        
                *node = sNodeTree_create_function_call(fun_name, params, num_params, TRUE, FALSE, 0, info);
                
                if(*info->p == '!' && *(info->p+1) != '=') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    *node = sNodeTree_create_unwrap(*node, info);
                }
            }
            else {
                *node = sNodeTree_create_object(node_type, object_num, 0, NULL, 0, 0, 0, NULL, 0, info->sname, info->sline, gc, info);
            }
            
        }
    }
    else {
        parser_err_msg(info, "Invalid type name");
    }

    return TRUE;
}

BOOL parse_var(unsigned int* node, sParserInfo* info, BOOL readonly)
{
    int num_vars = 0;
    char buf[64][VAR_NAME_MAX];
    
    BOOL class_fields = FALSE;

    if(!parse_word(buf[num_vars], VAR_NAME_MAX, info, TRUE, FALSE)) {
        return FALSE;
    }
    
    num_vars++;
    
    while(*info->p == ',') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!parse_word(buf[num_vars], VAR_NAME_MAX, info, TRUE, FALSE)) {
            return FALSE;
        }
        num_vars++;
        
        if(num_vars >= 64) {
            fprintf(stderr, "%s %d: overflow var number\n", info->sname, info->sline);
            exit(1);
        }
    }
    
    int i;
    for(i=0; i<num_vars; i++) {
        sNodeType* node_type = NULL;
        check_already_added_variable(info->lv_table, buf[i], info);
        if(!add_variable_to_table(info->lv_table, buf[i], node_type, readonly, gNullLVALUE, -1, info->mBlockLevel == 0, FALSE, FALSE, FALSE))
        {
            fprintf(stderr, "overflow variable table\n");
            exit(2);
        }
    }

    /// assign the value to a variable ///
    if(*info->p == '=' && *(info->p+1) != '=') {
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
            if(num_vars == 1) {
                BOOL global = info->mBlockLevel == 0;
                *node = sNodeTree_create_store_variable(buf[0], right_node, TRUE, global, FALSE, info);
            }
            else {
                BOOL global = info->mBlockLevel == 0;
                
                char* buf2[64];
                
                int j;
                for(j = 0; j<num_vars; j++) {
                    buf2[j] = buf[j];
                }
                *node = sNodeTree_create_store_variable_multiple(num_vars, buf2, right_node, TRUE, info);
            }
        }
    }
    else {
        char msg[1024];
        snprintf(msg, 1024, "%s should be initialized", buf[i]);
        parser_err_msg(info, msg);

        *node = 0;
    }

    return TRUE;
}


BOOL parse_is_gc_heap(unsigned int* node, sParserInfo* info)
{
    *node = 0;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);
        
        if(!expression(node, FALSE, info)) {
            return FALSE;
        }
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
        }
    }

    if(*node == 0) {
        parser_err_msg(info, "Require expression for is_gc_heap");
        return TRUE;
    };

    *node = sNodeTree_create_is_gc_heap(*node, info);

    return TRUE;
}

BOOL parse_clone(unsigned int* node, sParserInfo* info)
{
    BOOL gc = gNCGC;
    if(*info->p == '(') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'G' && *(info->p+1) == 'C') {
            info->p += 2;
            skip_spaces_and_lf(info);
        }

        if(*info->p == ')') {
            info->p++;
            skip_spaces_and_lf(info);
        }

        gc = TRUE;
    }

    if(!expression(node, FALSE, info)) {
        return FALSE;
    }

    if(*node == 0) {
        parser_err_msg(info, "Require expression for clone");
        return TRUE;
    };

    *node = sNodeTree_create_clone(*node, gc, info);

    return TRUE;
}

BOOL parse_borrow(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_borrow(object_node, info);

    return TRUE;
}

BOOL parse_dummy_heap(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_dummy_heap(object_node, info);

    return TRUE;
}

BOOL parse_managed(unsigned int* node, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];

    if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
    {
        return FALSE;
    };

    *node = sNodeTree_create_managed(buf, info);

    return TRUE;
}

BOOL parse_delete(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    }

    *node = sNodeTree_create_delete(object_node, info);

    return TRUE;
}

BOOL parse_is_heap(unsigned int* node, sParserInfo* info)
{
    expect_next_character_with_one_forward("(", info);

    char* p_before = info->p;
    int sline_before = info->sline;

    char buf[VAR_NAME_MAX+1];
    (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);

    info->p = p_before;
    info->sline = sline_before;

    if(is_type_name(buf, info)) {
        sNodeType* node_type = NULL;

        if(!parse_type(&node_type, info, NULL, FALSE, FALSE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) {
            return FALSE;
        }

        expect_next_character_with_one_forward(")", info);

        *node = sNodeTree_create_is_heap(node_type, info);
    }

    return TRUE;
}

BOOL parse_nomove(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_nomove(object_node, info);

    return TRUE;
}

BOOL parse_nullable(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_nullable(object_node, info);
    
    return TRUE;

    return TRUE;
}

BOOL parse_nonullable(unsigned int* node, sParserInfo* info)
{
    unsigned int object_node;
    if(!expression(&object_node, FALSE, info)) {
        return FALSE;
    };

    *node = sNodeTree_create_nonullable(object_node, info);
    
    return TRUE;
}

