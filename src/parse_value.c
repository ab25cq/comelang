#include "common.h"
#include <ctype.h>

struct sOpenStruct {
    char* mName;
    sBuf mSource;
};

struct sOpenStruct gOpenStruct[OPEN_STRUCT_MAX];

void parser_init()
{
}

void parser_init_onetime()
{
    memset(&gOpenStruct, 0, sizeof(struct sOpenStruct)*OPEN_STRUCT_MAX);
}

void append_open_struct(char* name, char* source, char* sname)
{
    unsigned int hash = get_hash_key(name, OPEN_STRUCT_MAX);
    
    int it = hash;
    
    while(TRUE) {
        if(gOpenStruct[it].mName == NULL) {
            gOpenStruct[it].mName = strdup(name);
            sBuf_init(&gOpenStruct[it].mSource);
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "    /// %s ///", sname);
            sBuf_append_str(&gOpenStruct[it].mSource, buf);
            sBuf_append_str(&gOpenStruct[it].mSource, source);
            break;
        }
        else if(strcmp(gOpenStruct[it].mName, name) == 0) {
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "    /// %s ///", sname);
            sBuf_append_str(&gOpenStruct[it].mSource, buf);
            sBuf_append_str(&gOpenStruct[it].mSource, source);
            break;
        }
        else {
            it++;
            
            if(it >= OPEN_STRUCT_MAX) {
                it = 0;
            }
            else if(it == hash) {
                fprintf(stderr, "overflow open struct\n");
                exit(2);
            }
        }
    }
}

void write_open_struct_to_header(sBuf* header)
{
    int i;
    for(i=0; i<OPEN_STRUCT_MAX; i++) {
        if(gOpenStruct[i].mName) {
            char buf[BUFSIZ];
            snprintf(buf, BUFSIZ, "struct %s\n{\n%s\n};", gOpenStruct[i].mName, gOpenStruct[i].mSource.mBuf);
            
            sBuf_append_str(header, buf);
        }
    }
}

void parser_final()
{
}

BOOL get_number(BOOL minus, unsigned int* node, sParserInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                parser_err_msg(info, "overflow node of number");
                return FALSE;
            }
        };
        *p2 = 0;
        skip_spaces_and_lf(info);
        
        char c = *(info->p+1);

        if(*info->p == '.' && xisdigit(c)) {
            *p2++ = *info->p;
            
            if(p2 - buf >= buf_size) {
                parser_err_msg(info, "overflow node of number");
                return FALSE;
            }
            
            info->p++;
            skip_spaces_and_lf(info);
            
            while(xisdigit(*info->p) || *info->p == '_') {
                if(*info->p ==  '_') {
                    info->p++;
                }
                else {
                    *p2++ = *info->p;
                    info->p++;
                }
    
                if(p2 - buf >= buf_size) {
                    parser_err_msg(info, "overflow node of number");
                    return FALSE;
                }
            };
            
            if(*info->p == 'e') {
                *p2++ = *info->p;
                info->p++;
    
                if(p2 - buf >= buf_size) {
                    parser_err_msg(info, "overflow node of number");
                    return FALSE;
                }
                
                if(*info->p == '+') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        parser_err_msg(info, "overflow node of number");
                        return FALSE;
                    }
                }
                else if(*info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        parser_err_msg(info, "overflow node of number");
                        return FALSE;
                    }
                }
                else {
                    parser_err_msg(info, "invalid float value");
                    return FALSE;
                }
            
                while(xisdigit(*info->p) || *info->p == '_') {
                    if(*info->p ==  '_') {
                        info->p++;
                    }
                    else {
                        *p2++ = *info->p;
                        info->p++;
                    }
        
                    if(p2 - buf >= buf_size) {
                        parser_err_msg(info, "overflow node of number");
                        return FALSE;
                    }
                };
            }
            *p2 = 0;
            skip_spaces_and_lf(info);
            
            if(*info->p == 'f' || *info->p == 'F') {
                info->p++;
                skip_spaces_and_lf(info);
                
                *node = sNodeTree_create_float_value(strtof(buf, NULL), info);
            }
            else if(*info->p == 'l' || *info->p == 'L') {
                info->p++;
                skip_spaces_and_lf(info);
                
                *node = sNodeTree_create_double_value(strtod(buf, NULL), info);
            }
            else {
                *node = sNodeTree_create_double_value(strtod(buf, NULL), info);
            }
        }
        else if(*info->p == 'u' || *info->p == 'U')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                if(*info->p == 'L' || *info->p == 'l')
                {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    unsigned clint64 value = strtoull(buf, NULL, 0);

                    *node = sNodeTree_create_ulong_value(value, info);
                }
                else {
                    unsigned clint64 value = strtoull(buf, NULL, 0);
                    *node = sNodeTree_create_ulong_value(value, info);
                }
            }
            else {
                unsigned int value = strtoul(buf, NULL, 0);
                *node = sNodeTree_create_uint_value(value, info);
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned clint64 value = strtoull(buf, NULL, 0);

                *node = sNodeTree_create_long_value(value, info);
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned clint64 value = strtoull(buf, NULL, 0);

                *node = sNodeTree_create_ulong_value(value, info);
            }
            else {
                unsigned clint64 value = strtoull(buf, NULL, 0);
                *node = sNodeTree_create_long_value(value, info);
            }
        }
        else {
            clint64 value = strtoll(buf, NULL, 0);
            *node = sNodeTree_create_int_value(value, info);
        }
    }
    else {
        parser_err_msg(info, "require digits after + or -");
        *node = 0;
    }

    return TRUE;
}

BOOL get_regex(unsigned int* node, sParserInfo* info)
{
    int sline = info->sline;
    
    sBuf buf;
    sBuf_init(&buf);
    while(TRUE) {
        if(*info->p == '\\' && *(info->p+1) == '/') {
            info->p++;
            sBuf_append_char(&buf, *info->p);
            info->p++;
        }
        else if(*info->p == '/') {
            info->p++;
            break;
        }
        else if(*info->p == '\0') {
            int sline2 = info->sline;
            info->sline = sline;
            parser_err_msg(info, "require closing / for regex");
            info->sline = sline2;
            return FALSE;
        }
        else {
            sBuf_append_char(&buf, *info->p);
            info->p++;
        }
    }
    
    BOOL global = FALSE;
    BOOL ignore_case = FALSE;
    while(*info->p == 'g' || *info->p == 'i') {
        if(*info->p == 'g') {
            info->p++;
            global = TRUE;
        }
        else if(*info->p == 'i') {
            info->p++;
            ignore_case = TRUE;
        }
        else {
            break;
        }
    }
    
    skip_spaces_and_lf(info);
    
    *node = sNodeTree_create_regex_value(buf.mBuf, global, ignore_case, sline, info);
    
    return TRUE;
}

BOOL get_list(unsigned int* node, sParserInfo* info)
{
    unsigned int nodes[LIST_ELEMENT_MAX];
    int num_nodes = 0;
    
    sNodeType* node_type = create_node_type_with_class_name("list");
    
    if(node_type == NULL || node_type->mClass == NULL) {
        parser_err_msg(info, "require incldue neo-c.h");
        return FALSE;
    }
    
    node_type->mNumGenericsTypes = 1;
    node_type->mGenericsTypes[0] = create_node_type_with_class_name("any");
    if(!gNCGC) {
        node_type->mHeap = TRUE;
    }
    
    int object_num = sNodeTree_create_int_value(1, info);
    int num_params = 0;
    unsigned int params[PARAMS_MAX];
    BOOL gc = gNCGC;
    
    unsigned int list_first_value = 0;
    if(!expression(&list_first_value, FALSE, info)) {
        return FALSE;
    }
    
    unsigned int list_object = sNodeTree_create_object(node_type, object_num, num_params, params, list_first_value, 0, 0, NULL, 0, info->sname, info->sline, gc, info);
        
    char* fun_name = "initialize";
    unsigned int params2[PARAMS_MAX];
    int num_params2 = 1;
    BOOL method = TRUE;
    BOOL inherit = FALSE;
    int version = 0;
    
    params2[0] = list_object;
    
    unsigned int func = sNodeTree_create_function_call(fun_name, params2, num_params2, method, inherit, version, info);
    
    char var_name[VAR_NAME_MAX];
    static int list_num = 0;
    snprintf(var_name, VAR_NAME_MAX, "_li%d", list_num++);
    
    BOOL alloc = TRUE;
    BOOL global = FALSE;
    
    unsigned int var_ = sNodeTree_create_store_variable(var_name, func, alloc, global, FALSE, info);

    check_already_added_variable(info->lv_table, var_name, info);
    if(!add_variable_to_table(info->lv_table, var_name, NULL, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, FALSE, FALSE, FALSE))
    {
        fprintf(stderr, "overflow variable table\n");
        exit(2);
    }

    nodes[num_nodes++] = var_;
    
    sNodeType* element_type = NULL;
    
    while(TRUE) {
        unsigned int value = 0;
        if(list_first_value) {
            value = list_first_value;
            list_first_value = 0;
        }
        else {
            if(!expression(&value, FALSE, info)) {
                return FALSE;
            }
        }
        
        char* fun_name = "push_back";
        unsigned int params[PARAMS_MAX];
        int num_params = 2;
        BOOL method = TRUE;
        BOOL inherit = FALSE;
        int version = 0;
        
        params[0] = sNodeTree_create_load_variable(var_name, info);
        params[1] = value;
        
        unsigned int func = sNodeTree_create_function_call(fun_name, params, num_params, method, inherit, version, info);
        
        nodes[num_nodes++] = func;
        
        if(num_nodes >= LIST_ELEMENT_MAX) {
            fprintf(stderr, "list element overflow\n");
            exit(1);
        }
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else {
            parser_err_msg(info, "require , or ] for list value");
            return FALSE;
        }
    }
    
    nodes[num_nodes++] = sNodeTree_create_managed(var_name, info);
    
    if(num_nodes >= LIST_ELEMENT_MAX) {
        fprintf(stderr, "list element overflow\n");
        exit(1);
    }
    
    unsigned int node2 = sNodeTree_create_load_variable(var_name, info);
    node2 = sNodeTree_create_dummy_heap(node2, info);
    
    nodes[num_nodes++] = node2;
    
    if(num_nodes >= LIST_ELEMENT_MAX) {
        fprintf(stderr, "list element overflow\n");
        exit(1);
    }
    
    *node = sNodeTree_create_list(num_nodes, nodes, info);
    
    return TRUE;
}

BOOL get_map(unsigned int* node, sParserInfo* info)
{
    unsigned int nodes[LIST_ELEMENT_MAX];
    int num_nodes = 0;
    
    sCLClass* map_klass = get_class("map");
    sNodeType* node_type = create_node_type_with_class_pointer(map_klass);
    
    if(node_type == NULL || node_type->mClass == NULL) {
        parser_err_msg(info, "require incldue neo-c.h");
        return FALSE;
    }
    
    int object_num = sNodeTree_create_int_value(1, info);
    int num_params = 0;
    unsigned int params[PARAMS_MAX];
    BOOL gc = gNCGC;
    
    unsigned int map_first_key = 0;
    if(!expression(&map_first_key, FALSE, info)) {
        return FALSE;
    }
    
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);
    }
    
    unsigned int map_first_value = 0;
    if(!expression(&map_first_value, FALSE, info)) {
        return FALSE;
    }
    
    unsigned int map_object = sNodeTree_create_object(node_type, object_num, num_params, params, 0, map_first_key, map_first_value, NULL, 0, info->sname, info->sline, gc, info);
    
    char* fun_name = "initialize";
    unsigned int params2[PARAMS_MAX];
    int num_params2 = 1;
    BOOL method = TRUE;
    BOOL inherit = FALSE;
    int version = 0;
    
    params2[0] = map_object;
    
    unsigned int func = sNodeTree_create_function_call(fun_name, params2, num_params2, method, inherit, version, info);
    
    char var_name[VAR_NAME_MAX];
    static int list_num = 0;
    snprintf(var_name, VAR_NAME_MAX, "_ma%d", list_num++);
    
    BOOL alloc = TRUE;
    BOOL global = FALSE;
    
    unsigned int var_ = sNodeTree_create_store_variable(var_name, func, alloc, global, FALSE, info);

    check_already_added_variable(info->lv_table, var_name, info);
    if(!add_variable_to_table(info->lv_table, var_name, NULL, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, FALSE, FALSE, FALSE))
    {
        fprintf(stderr, "overflow variable table\n");
        exit(2);
    }

    nodes[num_nodes++] = var_;
    
    sNodeType* element_type = NULL;
    
    int n = 0;
    
    while(TRUE) {
        unsigned int key = 0;
        if(map_first_key) {
            key = map_first_key;
            map_first_key = 0;
        }
        else {
            if(!expression(&key, FALSE, info)) {
                return FALSE;
            }
        }
        
        if(*info->p == ':') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        unsigned int value = 0;
        if(map_first_value) {
            value = map_first_value;
            map_first_value = 0;
        }
        else {
            if(!expression(&value, FALSE, info)) {
                return FALSE;
            }
        }
        
        char* fun_name = "insert";
        unsigned int params[PARAMS_MAX];
        int num_params = 3;
        BOOL method = TRUE;
        BOOL inherit = FALSE;
        int version = 0;
        
        params[0] = sNodeTree_create_load_variable(var_name, info);
        params[1] = key;
        params[2] = value;
        
        unsigned int func = sNodeTree_create_function_call(fun_name, params, num_params, method, inherit, version, info);
        
        nodes[num_nodes++] = func;
        
        if(num_nodes >= LIST_ELEMENT_MAX) {
            fprintf(stderr, "map element overflow\n");
            exit(1);
        }
        
        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == ']') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        else {
            parser_err_msg(info, "require , or } for map value");
            return FALSE;
        }
        
        n++;
    }
    
    nodes[num_nodes++] = sNodeTree_create_managed(var_name, info);
    
    if(num_nodes >= LIST_ELEMENT_MAX) {
        fprintf(stderr, "list element overflow\n");
        exit(1);
    }
    
    unsigned int node2 = sNodeTree_create_load_variable(var_name, info);
    node2 = sNodeTree_create_dummy_heap(node2, info);
    
    nodes[num_nodes++] = node2;
    
    if(num_nodes >= LIST_ELEMENT_MAX) {
        fprintf(stderr, "list element overflow\n");
        exit(1);
    }
    
    *node = sNodeTree_create_map(num_nodes, nodes, info);
    
    return TRUE;
}

BOOL get_tuple(unsigned int* node, sParserInfo* info)
{
    unsigned int nodes[TUPLE_ELEMENT_MAX];
    int num_nodes = 0;
    
    while(TRUE) {
        unsigned int node2 = 0;
        if(!expression(&node2, FALSE, info)) {
            return FALSE;
        }
        
        nodes[num_nodes] = node2;
        num_nodes++;
        
        if(num_nodes >= TUPLE_ELEMENT_MAX) {
            fprintf(stderr, "tuple element max overflow\n");
            exit(2);
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
    }
    
    int object_num = sNodeTree_create_int_value(1, info);
    int num_params = 0;
    unsigned int params[PARAMS_MAX];
    BOOL gc = gNCGC;
    
    int num_tuples = num_nodes;
    
    sNodeType* node_type = create_node_type_with_class_name("any");
    
    unsigned int tuple_object = sNodeTree_create_object(node_type, object_num, num_params, params, 0, 0, 0, nodes, num_tuples, info->sname, info->sline, gc, info);
    
    char* fun_name = "initialize";
    unsigned int params2[PARAMS_MAX];
    int num_params2 = num_tuples+1;
    BOOL method = TRUE;
    BOOL inherit = FALSE;
    int version = 0;
    
    params2[0] = tuple_object;
    
    int i;
    for(i=0; i<num_tuples; i++) {
        params2[i+1] = nodes[i];
    }
    
    *node = sNodeTree_create_function_call(fun_name, params2, num_params2, method, inherit, version, info);
    
    return TRUE;
}

BOOL parse_struct(unsigned int* node, char* struct_name, int size_struct_name, BOOL anonymous, BOOL* terminated, BOOL definition_struct, BOOL protocol_, BOOL static_, BOOL open, BOOL forwarding_parse, sParserInfo* info) 
{
    BOOL static_before = info->static_;
    info->static_ = static_;
    char* head = info->p;
    
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    int sline = info->sline;

    int num_fields = 0;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields[STRUCT_FIELD_MAX];

    BOOL in_struct = info->in_struct;
    info->in_struct = TRUE;

    /// already get struct name ///
    if(strcmp(struct_name, "") == 0) {
        char buf[VAR_NAME_MAX];

        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
            info->in_struct = in_struct;
            return FALSE;
        }

        xstrncpy(struct_name, buf, size_struct_name);
    }

    info->mNumGenerics = 0;

    /// undefined struct ///
    if(*info->p == ';') {
        sCLClass* struct_class = get_class(struct_name);

        if(struct_class == NULL && !forwarding_parse) {
            struct_class = alloc_struct(struct_name, anonymous, TRUE, NULL, protocol_);


            sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);
            BOOL undefined_struct = TRUE;
            *node = sNodeTree_struct(struct_type, info, sname, sline, undefined_struct);
        }
        else {
            *node = sNodeTree_create_null(info);
        }

        xstrncpy(info->parse_struct_name, struct_name, VAR_NAME_MAX);

        info->in_struct = in_struct;
        
        char* tail = info->p;
        
        if(strcmp(info->sname, gFName) == 0 && !info->static_) {
            if(protocol_) {
                sBuf_append_str(&gHeader, "protocol ");
            }
            else {
                sBuf_append_str(&gHeader, "struct ");
            }
            
            sBuf_append(&gHeader, head, tail -head);
        }
        
        if(terminated) {
            *terminated = TRUE;
        }
        
        return TRUE;
    }

    if(*info->p == '*') {
        if(terminated) {
            *terminated = FALSE;
            info->in_struct = in_struct;
            return TRUE;
        }
    }

    if(xisalpha(*info->p) || *info->p == '_') {
        if(terminated) {
            *terminated = FALSE;
            info->in_struct = in_struct;
            return TRUE;
        }
    }

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
    
    sCLClass* parent_class = NULL;
/*
    if(*info->p == ':') {
        info->p++;
        skip_spaces_and_lf(info);
        
        char buf[VAR_NAME_MAX];

        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
            info->in_struct = in_struct;
            return FALSE;
        }
        
        parent_class = get_class(buf);
        
        if(parent_class == NULL) {
            parser_err_msg(info, "parent class not found");
            return FALSE;
        }
    }
*/

    sCLClass* struct_class = get_class(struct_name);

    if(struct_class == NULL) {
        struct_class = alloc_struct(struct_name, anonymous, TRUE, parent_class, protocol_);
    }
    
    if(gNCHeader) {
        if(!skip_block(info)) {
            return FALSE;
        }
    }
    else {
        expect_next_character_with_one_forward("{", info);
        
        if(protocol_)  {
            sNodeType* node_type = create_node_type_with_class_name("protocol_obj_t");
    
            fields[num_fields] = node_type;
            field_names[num_fields] = strdup("_protocol_obj");
    
            num_fields++;
            
            sNodeType* node_type2 = create_node_type_with_class_name("lambda");
            node_type2->mNumParams = 1;
            node_type2->mParamTypes[0] = create_node_type_with_class_name("void*");
            node_type2->mResultType = create_node_type_with_class_name("void");
            node_type2->mPointerNum = 1;
    
            fields[num_fields] = node_type2;
            field_names[num_fields] = strdup("finalize");
    
            num_fields++;
            
            sNodeType* node_type3 = create_node_type_with_class_name("lambda");
            node_type3->mNumParams = 1;
            node_type3->mParamTypes[0] = create_node_type_with_class_name("void*");
            node_type3->mResultType = create_node_type_with_class_name("void*");
            if(!gNCGC) {
                node_type3->mResultType->mHeap = TRUE;
            }
            node_type3->mPointerNum = 1;
    
            fields[num_fields] = node_type3;
            field_names[num_fields] = strdup("clone");
    
            num_fields++;
        }
    
        xstrncpy(info->parse_struct_name, struct_name, VAR_NAME_MAX);
        
        int n = 0;
        while(TRUE) {
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    info->in_struct = in_struct;
                    return FALSE;
                }
            }
            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                info->in_struct = in_struct;
                return FALSE;
            }
    
            sNodeType* field = NULL;
            char buf[VAR_NAME_MAX];
            
            if(!parse_type(&field, info, buf, FALSE, TRUE, NULL, FALSE, TRUE, FALSE, FALSE, protocol_)) {
                info->in_struct = in_struct;
                return FALSE;
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                info->in_struct = in_struct;
                return FALSE;
            }
    
            char saved_buf[VAR_NAME_MAX];
            xstrncpy(saved_buf, buf, VAR_NAME_MAX);
    
            sNodeType* saved_field = clone_node_type(field);
    
            fields[num_fields] = field;
            
            if(protocol_ && type_identify_with_class_name(field, "lambda")) {
                if(field->mNumParams == 0) {
                    field->mParamTypes[0] = create_node_type_with_class_name("protocol_obj_t");
                    field->mNumParams++;
                }
                else if(!type_identify_with_class_name(field->mParamTypes[0], "protocol_obj_t"))
                {
                    int i;
                    for(i=0; i<field->mNumParams; i++) {
                        field->mParamTypes[field->mNumParams-i] = field->mParamTypes[field->mNumParams-i-1];
                    }
                    
                    field->mParamTypes[0] = create_node_type_with_class_name("protocol_obj_t");
                    field->mNumParams++;
                }
            }
    
            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
    
                if(buf[0] == '\0') {
                    create_anonymous_name(buf, VAR_NAME_MAX);
                }
            }
            else if(buf[0] == '\0') {
                if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                {
                    info->in_struct = in_struct;
                    return FALSE;
                }
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                info->in_struct = in_struct;
                return FALSE;
            }
    
            field_names[num_fields] = strdup(buf);
    
            num_fields++;
    
            if(num_fields >= STRUCT_FIELD_MAX) {
                parser_err_msg(info, "overflow struct field");
    
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                info->in_struct = in_struct;
                return FALSE;
            }
    
            if(*info->p == ',') {
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    char buf2[VAR_NAME_MAX];
                    xstrncpy(buf2, saved_buf, VAR_NAME_MAX);
    
                    sNodeType* field2 = clone_node_type(saved_field);
    
                    fields[num_fields] = field2;
    
                    if(buf2[0] == '\0') {
                        if(!parse_variable_name(buf2, VAR_NAME_MAX, info, field2, FALSE, FALSE))
                        {
                            int i;
                            for(i=0; i<num_fields; i++) {
                                free(field_names[i]);
                            }
                            info->in_struct = in_struct;
                            return FALSE;
                        }
                    }
    
                    field_names[num_fields] = strdup(buf2);
    
                    num_fields++;
    
                    if(num_fields >= STRUCT_FIELD_MAX) {
                        parser_err_msg(info, "overflow struct field");
                        int i;
                        for(i=0; i<num_fields; i++) {
                            free(field_names[i]);
                        }
                        info->in_struct = in_struct;
                        return FALSE;
                    }
                }
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                info->in_struct = in_struct;
                return FALSE;
            }
    
            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
    
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    int i;
                    for(i=0; i<num_fields; i++) {
                        free(field_names[i]);
                    }
                    info->in_struct = in_struct;
                    return FALSE;
                }
    
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            }
        }
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        info->in_struct = in_struct;
        return FALSE;
    }

    if(*info->p == ';') {
        if(!definition_struct) {
            info->p++;
            skip_spaces_and_lf(info);
        }

        if(terminated) {
            *terminated = TRUE;
            info->in_struct = in_struct;
            return TRUE;
        }
    }
    
    char* tail = info->p;
    
    if(strcmp(info->sname, gFName) == 0 && !info->static_) {
        if(protocol_) {
            sBuf_append_str(&gHeader, "protocol ");
        }
        else {
            sBuf_append_str(&gHeader, "struct ");
        }
    
        sBuf_append(&gHeader, head, tail -head);
    }
    
    if(!gNCHeader) {
        if(terminated == NULL) {
/*
            if(open) {
                add_fields_to_open_class(struct_class, num_fields, field_names, fields);
            }
            else {
*/
                add_fields_to_struct(struct_class, num_fields, field_names, fields);
//            }
        }
    
        int i;
        for(i=0; i<num_fields; i++) {
            free(field_names[i]);
        }
    
        sNodeType* struct_type = create_node_type_with_class_pointer(struct_class);
    
        BOOL undefined_struct = FALSE;
/*
        if(open) {
            *node = sNodeTree_open_class(struct_type, info, sname, sline, undefined_struct);
        }
        else {
*/
            *node = sNodeTree_struct(struct_type, info, sname, sline, undefined_struct);
//        }
            
    }
    else {
        *node = sNodeTree_create_null(info);
    }
    
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        info->in_struct = in_struct;
        return FALSE;
    }

    info->mNumGenerics = 0;

    info->in_struct = in_struct;
    info->static_ = static_before;

    return TRUE;
}

BOOL parse_union(unsigned int* node, char* union_name, int size_union_name, BOOL* terminated, BOOL definition_struct, BOOL static_, sParserInfo* info) 
{
    BOOL static_before = info->static_;
    info->static_ = static_;
    
    char* head = info->p;
    
    char sname[PATH_MAX];
    xstrncpy(sname, info->sname, PATH_MAX);

    int sline = info->sline;

    int num_fields = 0;
    char* field_names[STRUCT_FIELD_MAX];
    sNodeType* fields[STRUCT_FIELD_MAX];

    /// already get name ///
    if(strcmp(union_name, "") == 0) {
        char buf[VAR_NAME_MAX];

        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
            return FALSE;
        }

        xstrncpy(union_name, buf, size_union_name);
    }

    /// undefined union ///
    if(*info->p == ';') {
        if(terminated) {
            *terminated = TRUE;
            return TRUE;
        }

        sCLClass* union_class = alloc_union(union_name, FALSE, FALSE);

        xstrncpy(info->parse_struct_name, union_name, VAR_NAME_MAX);

        sNodeType* union_type = create_node_type_with_class_pointer(union_class);
        BOOL undefined_union = TRUE;
        *node = sNodeTree_union(union_type, info, sname, sline, undefined_union);

        return TRUE;
    }

    if(*info->p == '*') {
        if(terminated) {
            *terminated = FALSE;
            info->in_struct = FALSE;
            return TRUE;
        }
    }

    if(xisalpha(*info->p) || *info->p == '_') {
        if(terminated) {
            *terminated = FALSE;
            return TRUE;
        }
    }

    sCLClass* union_class = get_class(union_name);
    
    if(union_class == NULL) {
        union_class = alloc_union(union_name, FALSE, FALSE);
    }

    if(gNCHeader) {
        if(!skip_block(info)) {
            return FALSE;
        }
    }
    else {
        expect_next_character_with_one_forward("{", info);
    
        xstrncpy(info->parse_struct_name, union_name, VAR_NAME_MAX);
    
        int n = 0;
        while(TRUE) {
            if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
    
            sNodeType* field = NULL;
            char buf[VAR_NAME_MAX];
            if(!parse_type(&field, info, buf, FALSE, TRUE, NULL, FALSE, TRUE, FALSE, FALSE, FALSE)) {
                return FALSE;
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
    
            char saved_buf[VAR_NAME_MAX];
            xstrncpy(saved_buf, buf, VAR_NAME_MAX);
    
            sNodeType* saved_field = clone_node_type(field);
    
            fields[num_fields] = field;
    
            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
    
                if(strcmp(buf, "") == 0) {
                    create_anonymous_name(buf, VAR_NAME_MAX);
                }
            }
            else if(buf[0] == '\0') {
                if(!parse_variable_name(buf, VAR_NAME_MAX, info, field, FALSE, FALSE))
                {
                    return FALSE;
                }
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
    
            field_names[num_fields] = strdup(buf);
    
            num_fields++;
    
            if(num_fields >= STRUCT_FIELD_MAX) {
                parser_err_msg(info, "overflow struct field");
    
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }
    
            if(*info->p == ',') {
                while(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    char buf2[VAR_NAME_MAX];
                    xstrncpy(buf2, saved_buf, VAR_NAME_MAX);
    
                    sNodeType* field2 = clone_node_type(saved_field);
    
                    fields[num_fields] = field2;
    
                    if(buf2[0] == '\0') {
                        if(!parse_variable_name(buf2, VAR_NAME_MAX, info, field2, FALSE, FALSE))
                        {
                            int i;
                            for(i=0; i<num_fields; i++) {
                                free(field_names[i]);
                            }
                            return FALSE;
                        }
                    }
    
                    field_names[num_fields] = strdup(buf2);
    
                    num_fields++;
    
                    if(num_fields >= STRUCT_FIELD_MAX) {
                        parser_err_msg(info, "overflow struct field");
                        int i;
                        for(i=0; i<num_fields; i++) {
                            free(field_names[i]);
                        }
                        return FALSE;
                    }
                }
            }
    
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                int i;
                for(i=0; i<num_fields; i++) {
                    free(field_names[i]);
                }
                return FALSE;
            }
    
            if(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
    
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(*info->p == '#') {
                if(!parse_sharp(info)) {
                    int i;
                    for(i=0; i<num_fields; i++) {
                        free(field_names[i]);
                    }
                    return FALSE;
                }
    
                if(*info->p == '}') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
            }
        }
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    if(*info->p == ';') {
        if(!definition_struct) {
            info->p++;
            skip_spaces_and_lf(info);
        }

        if(terminated) {
            *terminated = TRUE;
            return TRUE;
        }
    }
    
    if(strcmp(info->sname, gFName) == 0 && !info->static_) {
        char* tail = info->p;
        
        sBuf_append_str(&gHeader, "union ");
        sBuf_append(&gHeader, head, tail -head);
    }

    if(terminated == NULL) {
        add_fields_to_union(union_class, num_fields, field_names, fields);
    }

    int i;
    for(i=0; i<num_fields; i++) {
        free(field_names[i]);
    }

    sNodeType* union_type = create_node_type_with_class_pointer(union_class);

    BOOL undefined_union = FALSE;

    *node = sNodeTree_union(union_type, info, sname, sline, undefined_union);

    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }
    
    info->static_ = static_before;

    return TRUE;
}

BOOL parse_enum(unsigned int* node, char* name, int name_size, BOOL* terminated, BOOL static_, sParserInfo* info) 
{
    BOOL static_before = info->static_;
    info->static_ = static_;
    
    char* head = info->p;
    
    /// already get enum name ///
    if(strcmp(name, "") == 0) {
        char buf[VAR_NAME_MAX];

        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE)) {
            return FALSE;
        }
        
        if(is_type_name(buf, info)) {
            if(terminated) {
                *terminated = FALSE;
                return TRUE;
            }
        }

        xstrncpy(name, buf, name_size);
    }
    
    int num_element = 0;
    char** element_names = calloc(1, sizeof(char*)*ENUM_ELEMENT_MAX);
    int* element_values = calloc(1, sizeof(int)*ENUM_ELEMENT_MAX);
    
    if(gNCHeader) {
        if(!skip_block(info)) {
            return FALSE;
        }
    }
    else {
        if(!parse_sharp(info)) {
            return FALSE;
        }
        
/*
        BOOL alpha = FALSE;
        if(xisalpha(*info->p)) {
            alpha = TRUE;
        }
        else {
*/
            expect_next_character_with_one_forward("{", info);
//        }
        
        if(!parse_sharp(info)) {
            return FALSE;
        }
    
        int value = 0;
    
        while(TRUE) {
            if(!parse_sharp(info)) {
                return FALSE;
            }
            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
            if(!parse_sharp(info)) {
                return FALSE;
            }
    
            char var_name[VAR_NAME_MAX];
            if(!parse_word(var_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
            if(!parse_sharp(info)) {
                return FALSE;
            }
            
            if(*info->p == '=') {
                info->p++;
                skip_spaces_and_lf(info);
                
                if(!parse_sharp(info)) {
                    return FALSE;
                }
    
                unsigned int node2;
                if(!expression(&node2, FALSE, info)) {
                    return FALSE;
                }
                
                if(terminated == NULL) {
                    if(!get_const_value_from_node(&value, node2, info)) {
                        fprintf(stderr, "%s %d: can't create const value(x)\n", info->sname, info->sline);
    
                        *node = sNodeTree_create_null(info);
                    }
                }
                
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
    
            if(terminated == NULL) {
                sVar* var_ = get_variable_from_this_table_only(info->lv_table, var_name);
    
                if(var_ == NULL) {
                    unsigned int right_node = sNodeTree_create_int_value(value, info);
    
                    BOOL alloc_ = TRUE;
                    BOOL global = info->mBlockLevel == 0;
                    unsigned int node = sNodeTree_create_store_variable(var_name, right_node, alloc_, global, FALSE, info);
    
                    sNodeType* result_type = create_node_type_with_class_name("int");
                    result_type->mConstant = TRUE;
    
                    check_already_added_variable(info->lv_table, var_name, info);
                    BOOL readonly = TRUE;
                    if(!add_variable_to_table(info->lv_table, var_name, result_type, readonly, gNullLVALUE, -1, info->mBlockLevel == 0, result_type->mConstant, FALSE, FALSE))
                    {
                        fprintf(stderr, "overflow variable table\n");
                        exit(2);
                    }
    
                    sCompileInfo cinfo;
    
                    memset(&cinfo, 0, sizeof(sCompileInfo));
                    cinfo.pinfo = info;
    
                    if(!compile(node, &cinfo)) {
                        return FALSE;
                    }
    
                    dec_stack_ptr(1, &cinfo);
                }
            }
            
            if(!parse_sharp(info)) {
                return FALSE;
            }
    
            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            while(*info->p == '#') {
                if(!parse_sharp(info)) {
                    return FALSE;
                }
            }
    
            element_values[num_element] = value;
            element_names[num_element] = strdup(var_name);
    
            if(num_element >= ENUM_ELEMENT_MAX) {
                fprintf(stderr, "overflow enum element number\n");
                exit(2);
            }
    
            num_element++;
            
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
/*
            if(alpha) {
                break;
            }
*/
            
            if(!parse_sharp(info)) {
                return FALSE;
            }
    
            value++;
        }
    }

    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);

        if(terminated) {
            *terminated = TRUE;

            return TRUE;
        }
    }
    
    if(strcmp(info->sname, gFName) == 0 && !info->static_) {
        char* tail = info->p;
        
        sBuf_append_str(&gHeader, "enum ");
        sBuf_append(&gHeader, head, tail -head);
    }

    *node = sNodeTree_create_null(info);

    (void)alloc_enum(name, num_element, element_names, element_values);

    int k;
    for(k=0; k<num_element; k++) {
        free(element_names[k]);
    }
    free(element_names);
    free(element_values);
    
    info->static_ = static_before;

    return TRUE;
}

BOOL parse_typedef(unsigned int* node, BOOL static_, sParserInfo* info)
{
    char buf[VAR_NAME_MAX+1];
    
    BOOL static_before = info->static_;
    info->static_ = static_;
    
    char* head = info->p;
    
    buf[0] = '\0';

    sNodeType* node_type = NULL;
    if(!parse_type(&node_type, info, buf, TRUE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
        return FALSE;
    }

    char asm_fname[VAR_NAME_MAX];
    BOOL flag_asm_fun_name = FALSE;
    if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
        return FALSE;
    }

    sNodeType* node_type2 = clone_node_type(node_type);

    int num_nodes = 0;
    unsigned int nodes[NODES_MAX];
    memset(nodes, 0, sizeof(unsigned int)*NODES_MAX);

    if(buf[0] == '\0') {
        while(1) {
            sNodeType* node_type3 = clone_node_type(node_type2);
            
            if(!parse_variable_name(buf, VAR_NAME_MAX, info, node_type3, FALSE, FALSE))
            {
                return FALSE;
            }

            if(*info->p == ',') {
                info->p++;
                skip_spaces_and_lf(info);

                *node = sNodeTree_create_typedef(buf, node_type3, info);
                nodes[num_nodes++] = *node;

                if(num_nodes >= NODES_MAX) {
                    fprintf(stderr, "overflow define variable max");
                    return FALSE;
                }
            }
            else {
                *node = sNodeTree_create_typedef(buf, node_type3, info);
                nodes[num_nodes++] = *node;

                if(num_nodes >= NODES_MAX) {
                    fprintf(stderr, "overflow define variable max");
                    return FALSE;
                }
                break;
            }
        }
    }
    else {
        *node = sNodeTree_create_typedef(buf, node_type2, info);
        nodes[num_nodes++] = *node;

        if(num_nodes >= NODES_MAX) {
            fprintf(stderr, "overflow define variable max");
            return FALSE;
        }
    }

    BOOL in_macro = FALSE;
    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);

    if(!parse_typedef_attribute(info))
    {
        return FALSE;
    };
    
/*
    if(*info->p == ';') {
        info->p++;
        skip_spaces_and_lf(info);
    }
*/
    
    if(strcmp(info->sname, gFName) == 0 && !info->static_) {
        char* tail = info->p;
        
        sBuf_append_str(&gHeader, "typedef ");
        sBuf_append(&gHeader, head, tail -head);
        sBuf_append_char(&gHeader, ';');
        sBuf_append_char(&gHeader, '\n');
    }
    
    info->static_ = static_before;

    return TRUE;
}

void create_lambda_name(char* lambda_name, size_t size_lambda_name, char* module_name)
{
    static int num_lambda_name = 0;
    xstrncpy(lambda_name, "lambda", size_lambda_name);

    char buf[128];
    snprintf(buf, 128, "%d", num_lambda_name++);

    xstrncat(lambda_name, buf, size_lambda_name);
}

BOOL parse_lambda(unsigned int* node, sNodeType* result_type, sParserInfo* info)
{
    int sline = info->sline;
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

    sNodeBlock* node_block = ALLOC sNodeBlock_alloc();

    sVarTable* old_table = info->lv_table;

    info->lv_table = init_block_vtable(NULL, FALSE);
    sVarTable* block_var_table = info->lv_table;

    int i;
    for(i=0; i<num_params; i++) {
        sParserParam* param = params + i;

        BOOL readonly = TRUE;
        if(!add_variable_to_table(info->lv_table, param->mName, param->mType, readonly, gNullLVALUE, -1, FALSE, param->mType->mConstant, FALSE, FALSE))
        {
            return FALSE;
        }
    }

    expect_next_character_with_one_forward("{", info);

    BOOL single_expression = FALSE;
    BOOL result_type_is_void = FALSE;
    
    if(type_identify_with_class_name(result_type, "void") && result_type->mPointerNum == 0) {
        result_type_is_void = TRUE;
    }
    
    if(!parse_block(node_block, FALSE, single_expression, result_type_is_void, FALSE, TRUE, info)) {
        sNodeBlock_free(node_block);
        return FALSE;
    }

    if(!single_expression) {
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

    char fun_name[VAR_NAME_MAX];
    create_lambda_name(fun_name, VAR_NAME_MAX, info->module_name);

    BOOL lambda_ = TRUE;
    BOOL simple_lambda_param = FALSE;
    BOOL construct_fun = FALSE;
    BOOL operator_fun = FALSE;

    result_type->mStatic = TRUE;
    BOOL immutable_ = TRUE;

    *node = sNodeTree_create_function(fun_name, "", params, num_params, result_type, MANAGED node_block, lambda_, block_var_table, NULL, operator_fun, construct_fun, simple_lambda_param, info, FALSE, FALSE, 0, FALSE, -1, fun_name, sline, immutable_);

    return TRUE;
}


BOOL is_type_name(char* buf, sParserInfo* info)
{
    if(strcmp(buf, "") == 0) {
        return FALSE;
    }

    sCLClass* klass = get_class(buf);
    sNodeType* node_type = get_typedef(buf);

    int i;
    BOOL generics_type_name = FALSE;
    for(i=0; i<info->mNumGenerics; i++) {
        if(strcmp(buf, info->mGenericsTypeNames[i]) == 0)
        {
            generics_type_name = TRUE;
        }
    }
    
/*
    sNodeType* tyd = get_typedef(buf);
    
    if(tyd) {
        return TRUE;
    }
*/

    BOOL method_type_name = FALSE;
    for(i=0; i<info->mNumMethodGenericsTypes; i++) {
        if(strcmp(buf, info->mMethodGenericsTypeNames[i]) == 0)
        {
            method_type_name = TRUE;
        }
    }

    return klass || node_type || generics_type_name || method_type_name || strcmp(buf, "const") == 0 || strcmp(buf, "immutable") == 0 || strcmp(buf, "static") == 0 || strcmp(buf, "private") == 0 || (strcmp(buf, "struct") == 0 && *info->p == '{') || (strcmp(buf, "protocol") == 0 && *info->p == '{') || strcmp(buf, "protocol") == 0 || (strcmp(buf, "struct") == 0) || (strcmp(buf, "union") == 0) || (strcmp(buf, "union") == 0 && *info->p == '{') || (strcmp(buf, "unsigned") == 0) || (strcmp(buf, "signed") == 0) || (strcmp(buf, "__signed") == 0) ||(strcmp(buf, "short") == 0) || (strcmp(buf, "long") == 0) || (strcmp(buf, "signed") == 0) || (strcmp(buf, "register") == 0) || (strcmp(buf, "volatile") == 0) || strcmp(buf, "enum") == 0 || strcmp(buf, "__signed__") == 0 || (strcmp(buf, "__extension__") == 0 && *info->p != '(') || (strcmp(buf, "__uniq__") == 0)|| strcmp(buf, "typeof") == 0|| strcmp(buf, "_Noreturn") == 0 || strcmp(buf, "_Alignas") == 0 || strcmp(buf, "_Nullable") == 0 || strcmp(buf, "exception") == 0;
}

BOOL is_premitive_type(char* buf, sParserInfo* info)
{
    sCLClass* klass = get_class(buf);

    if(klass == NULL) {
        return FALSE;
    }

    return klass->mFlags & CLASS_FLAGS_PRIMITIVE;
}

void create_exception_result_value(unsigned int* node, BOOL throw_, sParserInfo* info)
{
    unsigned int nodes[TUPLE_ELEMENT_MAX];
    int num_nodes = 0;
    
    nodes[num_nodes] = *node;
    num_nodes++;
    
    if(throw_) {
        nodes[num_nodes] = sNodeTree_create_false(info);
        num_nodes++;
    }
    else {
        nodes[num_nodes] = sNodeTree_create_true(info);
        num_nodes++;
    }
    
    int object_num = sNodeTree_create_int_value(1, info);
    int num_params = 0;
    unsigned int params[PARAMS_MAX];
    BOOL gc = gNCGC;
    
    int num_tuples = num_nodes;
    
    sNodeType* node_type = clone_node_type(info->function_result_type);
    node_type->mPointerNum--;
    
    unsigned int tuple_object = sNodeTree_create_object(node_type, object_num, num_params, params, 0, 0, 0, nodes, num_tuples, info->sname, info->sline, gc, info);
    
    char* fun_name = "initialize";
    unsigned int params2[PARAMS_MAX];
    int num_params2 = num_tuples+1;
    BOOL method = TRUE;
    BOOL inherit = FALSE;
    int version = 0;
    
    params2[0] = tuple_object;
    
    int i;
    for(i=0; i<num_tuples; i++) {
        params2[i+1] = nodes[i];
    }
    
    *node = sNodeTree_create_function_call(fun_name, params2, num_params2, method, inherit, version, info);
}

BOOL parse_return(unsigned int* node, sParserInfo* info)
{
    *node = 0;
    
    BOOL omit_paren = TRUE;
    BOOL no_return = FALSE;
    
    char* p = info->p;
    int sline = info->sline;
    
    if(*info->p == ';') {
        no_return = TRUE;
    }
    else if(*info->p == '(') {
        info->no_output_err_msg = TRUE;
        
        unsigned int node2 = 0;
        expression(&node2, TRUE, info);
        
        info->no_output_err_msg = FALSE;
        
        if(*info->p == ';') {
            omit_paren = TRUE;
        }
        else {
            omit_paren = FALSE;
        }
        
        info->p = p;
        info->sline = sline;
        
    }

    if(no_return) {
    }
    else if(omit_paren) {
        if(!expression(node, TRUE, info)) {
            return FALSE;
        }
        if(info->exception_result_type_function) {
            create_exception_result_value(node, FALSE, info);
        }
    }
    else {
        expect_next_character_with_one_forward("(", info);
        if(!expression(node, TRUE, info)) {
            return FALSE;
        }
        expect_next_character_with_one_forward(")", info);
        
        if(info->exception_result_type_function) {
            create_exception_result_value(node, FALSE, info);
        }
    }

    *node = sNodeTree_create_return(*node, info);

    return TRUE;
}

BOOL parse_struct_initializer(int* num_elements, struct sStructInitializer* elements, sCLClass* klass, sParserInfo* info)
{
    BOOL array_initializer = info->array_initializer;
    info->array_initializer = TRUE;
    
    int sline = info->sline;
    
    unsigned int no_name_elements[INIT_ARRAY_MAX];
    int num_no_name_elements = 0;

    unsigned int right_node;
    while(TRUE) {
        if(*info->p == '.') {
            info->p++;
            skip_spaces_and_lf(info);
            
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
            
            expect_next_character_with_one_forward("=", info);
            
            if(*info->p == '{') {
                info->p++;
                skip_spaces_and_lf(info);
                
                int num_elements2 = 0;
                struct sStructInitializer elements2[INIT_ARRAY_MAX];
                
                if(!parse_struct_initializer(&num_elements2, elements2, NULL, info))
                {
                    return FALSE;
                }
                
                elements[*num_elements].mName = strdup(buf);
                elements[*num_elements].mNode = 0;
                elements[*num_elements].mNumStructElement = num_elements2;
                elements[*num_elements].mStructElement = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                memcpy(elements[*num_elements].mStructElement, elements2, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                
                (*num_elements)++;
                
                if(*num_elements >= INIT_ARRAY_MAX) {
                    fprintf(stderr, "overflow struct initializer number\n");
                    exit(2);
                }
            }
            else {
                unsigned int right_node = 0;
                if(!expression(&right_node, FALSE, info)) {
                    return FALSE;
                }
                
                elements[*num_elements].mName = strdup(buf);
                elements[*num_elements].mNode = right_node;
                elements[*num_elements].mNumStructElement = 0;
                (*num_elements)++;
                if(*num_elements >= INIT_ARRAY_MAX) {
                    fprintf(stderr, "overflow struct initializer number\n");
                    exit(2);
                }
            }
        }
        else { 
            unsigned int right_node = 0;
            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }
            
            no_name_elements[num_no_name_elements++] = right_node;
            
            if(num_no_name_elements >= INIT_ARRAY_MAX) {
                fprintf(stderr, "overflow struct initializer number\n");
                exit(2);
            }
        }

        if(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(*info->p == '\0') {
            info->sline = sline;
            parser_err_msg(info, "In the struct initialization, the parser has arraived at the source end");
            return FALSE;
        }
        else if(*info->p == '}') {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    
    int k;
    for(k=0; k<num_no_name_elements; k++) {
        int i;
        for(i=0; i<klass->mNumFields; i++) {
            char* field_name = klass->mFieldName[i];
            
            BOOL found = FALSE;
            int j;
            for(j=0; j<*num_elements; j++) {
                if(strcmp(field_name, elements[j].mName) == 0) {
                    found = TRUE;
                }
            }
            
            if(!found) {
                elements[*num_elements].mName = strdup(field_name);
                elements[*num_elements].mNode = no_name_elements[k];
                elements[*num_elements].mNumStructElement = 0;
                (*num_elements)++;
                
                if(*num_elements >= INIT_ARRAY_MAX) {
                    fprintf(stderr, "overflow struct initializer number\n");
                    exit(2);
                }
                break;
            }
        }
    }
    
    info->array_initializer = array_initializer;
    
    return TRUE;
}

BOOL parse_variable(unsigned int* node, sNodeType* result_type, char* name, BOOL extern_, sParserInfo* info, char* definition_top, BOOL readonly)
{
    if(strcmp(info->sname, gFName) == 0 && !result_type->mStatic && info->mBlockLevel == 0) {
        char* tail = info->p;
        
        sBuf_append_str(&gHeader, "extern ");
        sBuf_append(&gHeader, definition_top, tail - definition_top);
        sBuf_append_char(&gHeader, ';');
        sBuf_append_char(&gHeader, '\n');
    }
    
    if(strcmp(name, "self") == 0 && info->mInClass && *info->p == '.') {
        info->p++;
        skip_spaces_and_lf(info);
        
        char var_name[VAR_NAME_MAX];
        if(!parse_word(var_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
        {
            return FALSE;
        }
        
        if(*info->p == '=' && *(info->p+1) != '=') {
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
                *node = sNodeTree_create_load_variable("self", info);
                *node = sNodeTree_create_store_field(var_name, *node, right_node, TRUE, info);
            }
        }
        else {
            *node = sNodeTree_create_null(info);
        }
        
        info->mClassFields[info->mNumClassFields] = clone_node_type(result_type);
        info->mClassFieldsNames[info->mNumClassFields] = strdup(var_name);
        info->mNumClassFields++;
        
        if(info->mNumClassFields >= CLASS_FIELD_MAX) {
            fprintf(stderr, "overflow fields number\n");
            exit(2);
        }
        
        return TRUE;
    }
    
    /// assign the value to a variable ///
    if(*info->p == '=' && *(info->p+1) != '=') {
        info->p++;
        skip_spaces_and_lf(info);
        
        char* p = info->p;
        int sline = info->sline;
        
        BOOL struct_initializer = FALSE;
        BOOL struct_initializer2 = FALSE;
        
        BOOL struct_initializer_pointer = FALSE;
        if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);
            struct_initializer_pointer = TRUE;
        }
        
        if(((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) || (result_type->mClass->mFlags & CLASS_FLAGS_UNION)) && *info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            
            char* p2 = info->p;
            int sline2 = info->sline;
            
            char buf[VAR_NAME_MAX];
            (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
            
            if(is_type_name(buf, info)) {
                info->p = p2;
                info->sline = sline2;
                
                sNodeType* node_type = NULL;
                char buf[VAR_NAME_MAX];
                if(!parse_type(&node_type, info, NULL, FALSE, TRUE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                    return FALSE;
                }
                
                if(*info->p == ')') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    if(*info->p == '{') {
                        struct_initializer = TRUE;
                    }
                }
            }
        }
        else if(((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) || (result_type->mClass->mFlags & CLASS_FLAGS_UNION)) && result_type->mPointerNum == 0 && *info->p == '{' && result_type->mOmitArrayNum) 
        {
            info->p++;
            skip_spaces_and_lf(info);
            
            info->p++; // {
            skip_spaces_and_lf(info);
            
            if(*info->p == '.') {
                struct_initializer2 = TRUE;
            }
        }
        else if(((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) && result_type->mPointerNum == 0 || (result_type->mClass->mFlags & CLASS_FLAGS_UNION)) && *info->p == '{') 
        {
            info->p++;
            skip_spaces_and_lf(info);
            
            if(*info->p == '.') {
                struct_initializer2 = TRUE;
            }
            else if(result_type->mArrayDimentionNum > 0 && info->mBlockLevel > 0) {
                struct_initializer2 = TRUE;
            }
        }
        else {
            struct_initializer_pointer = FALSE;
        }
        
        info->p = p;
        info->sline = sline;
        
        if(info->mBlockLevel > 0 && (struct_initializer || struct_initializer2)) {
            if(result_type->mArrayDimentionNum > 1) {
                parser_err_msg(info, "neo-c don't support this format");
                return FALSE;
            }
            else if(struct_initializer && result_type->mArrayDimentionNum > 0) {
                parser_err_msg(info, "neo-c don't support this format");
                return FALSE;
            }
            else if(struct_initializer2 && (result_type->mArrayDimentionNum == 1 || result_type->mOmitArrayNum)) {
                unsigned int nodes[INIT_ARRAY_MAX+128];
                int num_nodes = 0;
                
                nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                
                sCLClass* klass = result_type->mClass;
                unsigned int array_node = sNodeTree_create_load_variable(name, info);
                
                if(result_type->mOmitArrayNum) {
                    char* p = info->p;
                    int sline = info->sline;
                    
                    info->p++;
                    skip_spaces_and_lf(info);
                    int n = 0;
                    while(TRUE) {
                        int num_elements = 0;
                        struct sStructInitializer elements[INIT_ARRAY_MAX];
                        
                        expect_next_character_with_one_forward("{", info);
                        
                        if(!parse_struct_initializer(&num_elements, elements, NULL, info))
                        {
                            return FALSE;
                        }
                        
                        n++;
                        
                        if(*info->p == ',') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                    }
                    
                    result_type->mArrayDimentionNum = 1;
                    result_type->mArrayNum[0] = n;
                    result_type->mPointerNum--;
                    
                    info->p = p;
                    info->sline = sline;
                }
                
                expect_next_character_with_one_forward("{", info);
                
                int i;
                for(i=0; i<result_type->mArrayNum[0]; i++) {
                    int num_elements = 0;
                    struct sStructInitializer elements[INIT_ARRAY_MAX];
                    
                    expect_next_character_with_one_forward("{", info);
                    
                    if(!parse_struct_initializer(&num_elements, elements, result_type->mClass, info))
                    {
                        return FALSE;
                    }
                    
                    int num_dimention = 1;
                    unsigned int index_node[1];
                    index_node[0] = sNodeTree_create_int_value(i, info);
                    
                    unsigned int element_node = sNodeTree_create_load_array_element(array_node, index_node, num_dimention, info);
                    
                    int l;
                    for(l=0; l<klass->mNumFields; l++) {
                        char* var_name = klass->mFieldName[l];
                        
                        int j;
                        for(j=0; j<num_elements; j++) {
                            struct sStructInitializer* struct_initializer = &elements[j];
                            
                            if(strcmp(struct_initializer->mName, var_name) == 0) {
                                unsigned int right_node = struct_initializer->mNode;
                            
                                nodes[num_nodes++] = sNodeTree_create_store_field(var_name, element_node, right_node, TRUE, info);
            
                                if(num_nodes >= INIT_ARRAY_MAX+128) {
                                    fprintf(stderr, "overflow array initializer number\n");
                                    exit(2);
                                }
                            }
                        }
                    }
                    
                    if(i == result_type->mArrayNum[0] -1) {
                    }
                    else {
                        if(*info->p == '}') {
                            i++;
                            break;
                        }
                        else {
                            expect_next_character_with_one_forward(",", info);
                        }
                    }
                }
/*
                for(; i<result_type->mArrayNum[0]; i++) {
                    int num_dimention = 1;
                    unsigned int index_node[1];
                    index_node[0] = sNodeTree_create_int_value(i, info);
                    
                    sNodeType* result_type2 = clone_node_type(result_type);
                    result_type2->mArrayDimentionNum = 0;
                    
                    unsigned int right_node = sNodeTree_create_null_value(result_type2, info);

                    nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                }
*/
                expect_next_character_with_one_forward("}", info);
                
                BOOL in_macro = FALSE;
                *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
            }
            else if(struct_initializer || struct_initializer2) {
                if(struct_initializer) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    sNodeType* node_type = NULL;
                    char buf[VAR_NAME_MAX];
                    if(!parse_type(&node_type, info, NULL, FALSE, TRUE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                        return FALSE;
                    }
                    
                    expect_next_character_with_one_forward(")", info);
                    expect_next_character_with_one_forward("{", info);
                }
                else {
                    expect_next_character_with_one_forward("{", info);
                }
                
                int num_elements = 0;
                struct sStructInitializer elements[INIT_ARRAY_MAX];
            
                
                if(!parse_struct_initializer(&num_elements, elements, NULL, info))
                {
                    return FALSE;
                }
                
                unsigned int nodes[INIT_ARRAY_MAX+128];
                int num_nodes = 0;
                
                nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                
                sCLClass* klass = result_type->mClass;
                
                unsigned int array_node = sNodeTree_create_load_variable(name, info);
                
                int i;
                for(i=0; i<klass->mNumFields; i++) {
                    char* var_name = klass->mFieldName[i];
                    
                    int j;
                    for(j=0; j<num_elements; j++) {
                        struct sStructInitializer* struct_initializer = &elements[j];
                        
                        if(strcmp(struct_initializer->mName, var_name) == 0) {
                            unsigned int right_node = struct_initializer->mNode;
                        
                            nodes[num_nodes++] = sNodeTree_create_store_field(var_name, array_node, right_node, TRUE, info);
        
                            if(num_nodes >= INIT_ARRAY_MAX+128) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
                }
                
                BOOL in_macro = FALSE;
                *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
            }
        }
        else if(struct_initializer || struct_initializer_pointer || struct_initializer2) {
            if(struct_initializer_pointer) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            sNodeType* node_type = NULL;
            if(struct_initializer2) {
                expect_next_character_with_one_forward("{", info);
                node_type = clone_node_type(result_type);
            }
            else {
                info->p++;
                skip_spaces_and_lf(info);
                
                char buf[VAR_NAME_MAX];
                if(!parse_type(&node_type, info, NULL, FALSE, TRUE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                    return FALSE;
                }
                
                expect_next_character_with_one_forward(")", info);
                expect_next_character_with_one_forward("{", info);
            }
            
            int num_elements = 0;
            struct sStructInitializer elements[INIT_ARRAY_MAX];
            if(!parse_struct_initializer(&num_elements, elements, result_type->mClass, info))
            {
                return FALSE;
            }
            
            if(info->mBlockLevel == 0) {
                if(struct_initializer_pointer) {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
                    
                    char name2[VAR_NAME_MAX];
                    snprintf(name2, VAR_NAME_MAX, "_%s", name);
                    
                    check_already_added_variable(info->lv_table, name2, info);
                    sNodeType* node_type2 = clone_node_type(node_type);
                    node_type2->mConstant = TRUE;
                    if(!add_variable_to_table(info->lv_table, name2, node_type2, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, TRUE, FALSE, FALSE))
                    {
                        fprintf(stderr, "overflow variable table\n");
                        exit(2);
                    }
                    
                    unsigned int node2 = sNodeTree_create_define_variable(name2, extern_, info->mBlockLevel == 0, info);
                    
                    struct sStructInitializer* elements2;
                    elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    
                    unsigned int left_node = node2;
                    
                    *node = sNodeTree_create_struct_initializer(name2, node_type, num_elements, elements2, left_node, info);
    
                    nodes[num_nodes++] = *node;
                    
                    unsigned int right_node = sNodeTree_create_load_variable(name2, info);
                    right_node = sNodeTree_create_reffernce(right_node, info);
                    
                    BOOL alloc = TRUE;
                    BOOL global = TRUE;
                    unsigned int node3 = sNodeTree_create_store_variable(name, right_node, alloc, global, FALSE, info);
    
                    nodes[num_nodes++] = node3;
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else {
                    *node = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                    
                    struct sStructInitializer* elements2;
                    elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    
                    unsigned int left_node = *node;
                    *node = sNodeTree_create_struct_initializer(name, node_type, num_elements, elements2, left_node, info);
                }
            }
            else {
                parser_err_msg(info, "not support this format");
                return FALSE;
            }
        }
        else if((result_type->mArrayDimentionNum > 0 || result_type->mOmitArrayNum || ((result_type->mClass->mFlags & CLASS_FLAGS_UNION) && result_type->mPointerNum == 0 && info->mBlockLevel == 0) || ((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) && result_type->mPointerNum == 0) && ((type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) || (type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) || *info->p == '{') ) && result_type->mNoArrayPointerNum == 0) {
            if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) {
                if(*info->p == '{') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
            }
            else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) {
                if(*info->p == '{') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
            }
            else {
                expect_next_character_with_one_forward("{", info);
            }
            
            BOOL store_each_element[INIT_ARRAY_MAX];
            unsigned int store_each_element_index[INIT_ARRAY_MAX];
            unsigned int store_each_element_index2[INIT_ARRAY_MAX];
            unsigned int store_each_element_index3[INIT_ARRAY_MAX];
            unsigned int initialize_array_values[INIT_ARRAY_MAX];
            int num_initialize_array_value = 0;
            
            memset(store_each_element, 0, sizeof(BOOL)*INIT_ARRAY_MAX);
            memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index2, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index3, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            
            info->array_initializer = TRUE;

            int num_dimention = result_type->mArrayDimentionNum;
            
            int nest = 1;

            struct sStructInitializer* struct_elements[INIT_ARRAY_MAX];
            int num_struct_elements_array[INIT_ARRAY_MAX];
            int num_struct_elements = 0;
            
            if(result_type->mOmitArrayNum == FALSE) {
                if(!add_variable_to_table(info->lv_table, name, result_type, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, TRUE, FALSE, FALSE))
                {
                    fprintf(stderr, "overflow variable table\n");
                    exit(2);
                }
            }

            unsigned int right_node = 0;
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(TRUE) {
                    if(*info->p == '{') {
                        while(*info->p == '{') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest++;
                        }
                    }
                    
                    if(*info->p == '.') {
                        nest--;
                        int num_elements = 0;
                        struct sStructInitializer elements[INIT_ARRAY_MAX];
                        if(!parse_struct_initializer(&num_elements, elements, NULL, info))
                        {
                            return FALSE;
                        }
                        
                        struct sStructInitializer* elements2;
                        elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                        memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                        
                        struct_elements[num_struct_elements] = elements2;
                        num_struct_elements_array[num_struct_elements] = num_elements;
                        num_struct_elements++;
                        
                        if(num_struct_elements >= INIT_ARRAY_MAX) {
                            fprintf(stderr, "overflow array initializer\n");
                            exit(1);
                        }
                    }
                    else if(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        info->no_method_call = TRUE;
                        
                        unsigned int index_node = 0;
                        if(!expression(&index_node, FALSE, info)) {
                            return FALSE;
                        }
                        
                        info->no_method_call = FALSE;
                        
                        if(*info->p == '.' && *(info->p+1) == '.' && *(info->p+2) == '.')
                        {
                            info->p += 3;
                            skip_spaces_and_lf(info);
                            
                            unsigned int index_node2 = 0;
                            if(!expression(&index_node2, FALSE, info)) {
                                return FALSE;
                            }
                            
                            expect_next_character_with_one_forward("]", info);
                            
                            int head = 0;
                            if(!get_const_value_from_node(&head, index_node, info))
                            {
                                parser_err_msg(info, "Require Consta Value for array size");
                                return TRUE;
                            }
                            
                            int tail = 0;
                            if(!get_const_value_from_node(&tail, index_node2, info))
                            {
                                parser_err_msg(info, "Require Consta Value for array size");
                                return TRUE;
                            }
                            
                            right_node = 0;
                            
                            expect_next_character_with_one_forward("=", info);
            
                            if(!expression(&right_node, FALSE, info)) {
                                return FALSE;
                            }
                            
                            int i;
                            for(i=head; i<=tail; i++) {
                                store_each_element[num_initialize_array_value] = TRUE;
                                store_each_element_index[num_initialize_array_value] = sNodeTree_create_uint_value(i, info);
                                initialize_array_values[num_initialize_array_value++] = right_node;
            
                                if(num_initialize_array_value >= INIT_ARRAY_MAX) {
                                    fprintf(stderr, "overflow array initializer number\n");
                                    exit(2);
                                }
                            }
                        }
                        else {
                            store_each_element[num_initialize_array_value] = TRUE;
                            store_each_element_index[num_initialize_array_value] = index_node;
                            
                            expect_next_character_with_one_forward("]", info);
                            
                            if(*info->p == '[') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                
                                unsigned int index_node = 0;
                                if(!expression(&index_node, FALSE, info)) {
                                    return FALSE;
                                }
                                
                                store_each_element_index2[num_initialize_array_value] = index_node;
                                
                                expect_next_character_with_one_forward("]", info);
                                
                                if(num_dimention == 1) {
                                    parser_err_msg(info, "Invalid array dimention");
                                    return FALSE;
                                }
                                
                                if(*info->p == '[') {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    
                                    unsigned int index_node = 0;
                                    if(!expression(&index_node, FALSE, info)) {
                                        return FALSE;
                                    }
                                    
                                    store_each_element_index3[num_initialize_array_value] = index_node;
                                    
                                    expect_next_character_with_one_forward("]", info);
                                    
                                    if(num_dimention != 3) {
                                        parser_err_msg(info, "Invalid array dimention");
                                        return FALSE;
                                    }
                                }
                            }
                            expect_next_character_with_one_forward("=", info);
                            
                            right_node = 0;
            
                            if(!expression(&right_node, FALSE, info)) {
                                return FALSE;
                            }
                            
                            initialize_array_values[num_initialize_array_value++] = right_node;
        
                            if(num_initialize_array_value >= INIT_ARRAY_MAX) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
                    else { 
                        right_node = 0;
        
                        if(!expression(&right_node, FALSE, info)) {
                            return FALSE;
                        }
        
                        if(right_node == 0) {
                            parser_err_msg(info, "Require right value for {}");
                            *node = 0;
                        }
                        else {
                            initialize_array_values[num_initialize_array_value++] = right_node;
        
                            if(num_initialize_array_value >= INIT_ARRAY_MAX) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        if(!parse_sharp(info)) {
                            return FALSE;
                        }
                        
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                        
                        if(!parse_sharp(info)) {
                            return FALSE;
                        }
                    }
                    else if(*info->p == '\0') {
                        info->sline = sline;
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        if(!parse_sharp(info)) {
                            return FALSE;
                        }
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) {
                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        break;
                    }
                    else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) {
                        if(!parse_sharp(info)) {
                            return FALSE;
                        }
                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        break;
                    }
                    
                    if(!parse_sharp(info)) {
                        return FALSE;
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        if(!parse_sharp(info)) {
                            return FALSE;
                        }
                        
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                    }
                }
            }
            
/*
            if(result_type->mArrayDimentionNum == 1) {
                BOOL initialize_array_values2[INIT_ARRAY_MAX];
                BOOL store_each_element2[INIT_ARRAY_MAX];
                unsigned int store_each_element2_index[INIT_ARRAY_MAX];
                unsigned int store_each_element2_index2[INIT_ARRAY_MAX];
                unsigned int store_each_element2_index3[INIT_ARRAY_MAX];
                
                memset(store_each_element2, 0, sizeof(BOOL)*INIT_ARRAY_MAX);
                memset(initialize_array_values2, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
                memset(store_each_element2_index, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
                memset(store_each_element2_index2, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
                memset(store_each_element2_index3, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
                
                int l;
                int n = 0;
                for(l=0; l<num_initialize_array_value; l++) {
                    if(!store_each_element[l]) {
                        store_each_element2[n] = FALSE;
                        initialize_array_values2[n] = initialize_array_values[l];
                        store_each_element2_index[n] = 0;
                        store_each_element2_index2[n] = 0;
                        store_each_element2_index3[n] = 0;
                        n++;
                    }
                }
                for(l=0; l<num_initialize_array_value; l++) {
                    if(store_each_element[l]) {
                        store_each_element2[n] = TRUE;
                        initialize_array_values2[n] = initialize_array_values[l];
                        store_each_element2_index[n] = store_each_element_index[l];
                        store_each_element2_index2[n] = store_each_element_index2[l];
                        store_each_element2_index3[n] = store_each_element_index3[l];
                        n++;
                    }
                }
            }
*/
            
/*
            if(result_type->mArrayDimentionNum == 1 && num_initialize_array_value > 0 && !type_identify_with_class_name(result_type, "char"))
            {
                unsigned int initialize_array_values2[INIT_ARRAY_MAX];
                int i;
                for(i=0;i<result_type->mArrayNum[0]; i++) {
                    BOOL found = FALSE;
                    int j;
                    for(j=0; j<num_initialize_array_value; j++) {
                        unsigned int index_node = store_each_element_index[j];
                        unsigned int value = initialize_array_values[j];
                        
                        if(store_each_element[j]) {
                            int index = -1;
                            if(!get_const_value_from_node(&index, index_node, info))
                            {
                                return FALSE;
                            }
                            
                            if(i == index) {
                                found = TRUE;
                                initialize_array_values2[i] = value;
                            }
                        }
                    }
                    if(!found) {
                        if(store_each_element[i]) {
                            sNodeType* element_type = clone_node_type(result_type);
                            element_type->mArrayDimentionNum = 0;
                            initialize_array_values2[i] = sNodeTree_create_null_value(element_type, info);
                        }
                        else if(i < num_initialize_array_value) {
                            initialize_array_values2[i] = initialize_array_values[i];
                        }
                        else {
                            sNodeType* element_type = clone_node_type(result_type);
                            element_type->mArrayDimentionNum = 0;
                            initialize_array_values2[i] = sNodeTree_create_null_value(element_type, info);
                        }
                    }
                }
                for(i=0;i<result_type->mArrayNum[0]; i++) {
                    initialize_array_values[i] = initialize_array_values2[i];
                }
                
                num_initialize_array_value = result_type->mArrayNum[0];
            }
*/
            
            if(result_type->mOmitArrayNum) {
                if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1) {
                    if(num_initialize_array_value == 1 && gNodes[initialize_array_values[0]].mNodeType == kNodeTypeCString) {
                        result_type->mArrayNum[0] = gNodes[right_node].uValue.sString.mLen + 1;
                    }
                    else {
                        result_type->mArrayNum[0] = num_initialize_array_value;
                    }
                }
                else if(num_struct_elements > 0) {
                    result_type->mArrayNum[0] = num_struct_elements;
                }
                else if((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT)) {
                    sCLClass* klass = result_type->mClass;
                    
                    int n = 0;
                    int i;
                    for(i=0; i<klass->mNumFields; i++) {
                        sNodeType* field = klass->mFields[i];
                        if(field->mArrayDimentionNum > 1) {
                            parser_err_msg(info, "no suport array intializer format");
                            return FALSE;
                        }
                        else if(field->mArrayDimentionNum == 1) {
                            n += field->mArrayNum[0];
                        }
                        else {
                            n ++;
                        }
                    }
                    result_type->mArrayNum[0] = num_initialize_array_value / n;
                    
                    if(result_type->mArrayNum[0] == 0) {
                        result_type->mArrayNum[0]++;
                    }
                }
                else {
                    result_type->mArrayNum[0] = num_initialize_array_value;
                }
                result_type->mPointerNum--;
                result_type->mArrayDimentionNum++;
                result_type->mOmitArrayNum = FALSE;
                
                num_dimention = result_type->mArrayDimentionNum;
                
                if(!add_variable_to_table(info->lv_table, name, result_type, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, TRUE, FALSE, FALSE))
                {
                    fprintf(stderr, "overflow variable table\n");
                    exit(2);
                }
            }
            
            info->array_initializer = FALSE;

            if(info->mBlockLevel == 0) {
                *node = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);

                *node = sNodeTree_create_array_initializer(name, num_initialize_array_value, initialize_array_values, *node, num_struct_elements, num_struct_elements_array, store_each_element, store_each_element_index, struct_elements, info);
            }
            else if(result_type->mClass->mFlags & CLASS_FLAGS_STRUCT && result_type->mPointerNum == 0) {
                if(result_type->mArrayDimentionNum == 1) {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
    
                    nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                    
                    unsigned int array_node = sNodeTree_create_load_variable(name, info);
                    
                    int array_num = result_type->mArrayNum[0];
    
                    sCLClass* klass = result_type->mClass;
                    int num_fields = klass->mNumFields;
                    
                    int n = 0;
                    
                    int i;
                    for(i=0; i<array_num; i++) {
                        unsigned int index_node[INIT_ARRAY_MAX];
                        index_node[0] = sNodeTree_create_int_value(i, info);
                        
                        int num_dimention = 1;
                        unsigned int struct_node = sNodeTree_create_load_array_element(array_node, index_node, num_dimention, info);
                        
                        int j;
                        for(j=0; j<num_fields; j++) {
                            char* var_name = klass->mFieldName[j];
                            unsigned int right_node = initialize_array_values[n++];
        
                            nodes[num_nodes++] = sNodeTree_create_store_field(var_name, struct_node, right_node, TRUE, info);
        
                            if(num_nodes >= INIT_ARRAY_MAX+128) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(result_type->mArrayDimentionNum > 0) {
                    parser_err_msg(info, "neo-c don't support this format");
                    return FALSE;
                }
                else {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
    
                    nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
    
                    unsigned int array_node = sNodeTree_create_load_variable(name, info);
                    
                    sCLClass* klass = result_type->mClass;
    
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        if(i >= klass->mNumFields) {
                            parser_err_msg(info, "overflow struct initializer number");
                            return FALSE;
                        }
                        
                        char* var_name = klass->mFieldName[i];
                        unsigned int right_node = initialize_array_values[i];
    
                        nodes[num_nodes++] = sNodeTree_create_store_field(var_name, array_node, right_node, TRUE, info);
    
                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
            }
            else {
                unsigned int nodes[INIT_ARRAY_MAX+128];
                int num_nodes = 0;

                nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);

                unsigned int array_node = sNodeTree_create_load_variable(name, info);

                if(num_dimention == 1) {
                    if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0 && num_initialize_array_value == 1 && gNodes[initialize_array_values[0]].mNodeType == kNodeTypeCString) 
                    {
                        unsigned int node = initialize_array_values[0];

                        char* str = gNodes[node].uValue.sString.mString;

                        if(strlen(str)+1 >= INIT_ARRAY_MAX) {
                            parser_err_msg(info, "invalid array initializer(1)");
                            return FALSE;
                        }

                        int i;
                        for(i=0; i<strlen(str); i++) {
                            initialize_array_values[i] = sNodeTree_create_character_value(str[i], info);
                        }
                        initialize_array_values[i] = sNodeTree_create_character_value('\0', info);

                        num_initialize_array_value = strlen(str)+1;
                    }
                    
                    BOOL initialize_indexes[INIT_ARRAY_MAX];
                    
                    memset(initialize_indexes, 0, sizeof(BOOL)*INIT_ARRAY_MAX);
                    
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];
                        
                        if(store_each_element[i]) {
                            int n = 0;
                            if(!get_const_value_from_node(&n, store_each_element_index[i], info)) {
                                return FALSE;
                            }
                            
                            index_node[0] = sNodeTree_create_int_value(n, info);
                            unsigned int right_node = initialize_array_values[i];
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                            
                            initialize_indexes[n] = TRUE;
                        }
                        else {
                            index_node[0] = sNodeTree_create_int_value(i, info);
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                            initialize_indexes[i] = TRUE;
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }
                    
                    for(i=0; i<result_type->mArrayNum[0]; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];
                        
                        if(initialize_indexes[i]) {
                        }
                        else {
                            index_node[0] = sNodeTree_create_int_value(i, info);
                            sNodeType* result_type2 = clone_node_type(result_type);
                            result_type2->mArrayDimentionNum = 0;
                            unsigned int right_node = sNodeTree_create_null_value(result_type2, info);
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);

                            if(num_nodes >= INIT_ARRAY_MAX+128) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
                    
/*
                    if(i < result_type->mArrayNum[0]) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];
                        
                        for(; i<result_type->mArrayNum[0]; i++) {
                            index_node[0] = sNodeTree_create_int_value(i, info);
                            sNodeType* result_type2 = clone_node_type(result_type);
                            result_type2->mArrayDimentionNum = 0;
                            unsigned int right_node = sNodeTree_create_null_value(result_type2, info);
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                    }
*/

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(num_dimention == 2) {
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];

                        if(store_each_element[i]) {
                            index_node[0] = store_each_element_index[i];
                            index_node[1] = store_each_element_index2[i];
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                        else {
                            index_node[0] = sNodeTree_create_int_value(i/result_type->mArrayNum[1], info);
                            index_node[1] = sNodeTree_create_int_value(i%result_type->mArrayNum[1], info);
    
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(num_dimention == 3) {
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];

                        if(store_each_element[i]) {
                            index_node[0] = store_each_element_index[i];
                            index_node[1] = store_each_element_index2[i];
                            index_node[2] = store_each_element_index3[i];
                            
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                        else {
                            int n = result_type->mArrayNum[1]*result_type->mArrayNum[2];
    
                            index_node[0] = sNodeTree_create_int_value(i/n, info);
                            index_node[1] = sNodeTree_create_int_value((i/result_type->mArrayNum[2])%result_type->mArrayNum[1], info);
                            index_node[2] = sNodeTree_create_int_value(i%result_type->mArrayNum[2], info);
    
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else {
                    char buf[128];
                    snprintf(buf, 128, "invalid array dimetion %d\n", num_dimention);
                    
                    parser_err_msg(info, buf);
                }
            }
        }
        else if(info->mBlockLevel > 0 && struct_initializer) {
            expect_next_character_with_one_forward("{", info);
            
            int num_elements = 0;
            struct sStructInitializer elements[INIT_ARRAY_MAX];
            if(!parse_struct_initializer(&num_elements, elements, NULL, info))
            {
                return FALSE;
            }
            
            unsigned int nodes[INIT_ARRAY_MAX+128];
            int num_nodes = 0;
            
            nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
            
            sCLClass* klass = result_type->mClass;
            
            unsigned int array_node = sNodeTree_create_load_variable(name, info);
            
            int i;
            for(i=0; i<klass->mNumFields; i++) {
                char* var_name = klass->mFieldName[i];
                
                int j;
                for(j=0; j<num_elements; j++) {
                    struct sStructInitializer* struct_initializer = &elements[j];
                    
                    if(strcmp(struct_initializer->mName, var_name) == 0) {
                        unsigned int right_node = struct_initializer->mNode;
                    
                        nodes[num_nodes++] = sNodeTree_create_store_field(var_name, array_node, right_node, TRUE, info);
    
                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }
                }
            }
            
            BOOL in_macro = FALSE;
            *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
        }
        else if(struct_initializer || struct_initializer_pointer) {
            if(struct_initializer_pointer) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            info->p++;
            skip_spaces_and_lf(info);
            
            sNodeType* node_type = NULL;
            char buf[VAR_NAME_MAX];
            if(!parse_type(&node_type, info, NULL, FALSE, TRUE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                return FALSE;
            }
            
            expect_next_character_with_one_forward(")", info);
            expect_next_character_with_one_forward("{", info);
            
            int num_elements = 0;
            struct sStructInitializer elements[INIT_ARRAY_MAX];
            if(!parse_struct_initializer(&num_elements, elements, NULL, info))
            {
                return FALSE;
            }
            
            if(info->mBlockLevel == 0) {
                if(struct_initializer_pointer) {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
                    
                    char name2[VAR_NAME_MAX];
                    snprintf(name2, VAR_NAME_MAX, "_%s", name);
                    
                    check_already_added_variable(info->lv_table, name2, info);
                    sNodeType* node_type2 = clone_node_type(node_type);
                    node_type2->mConstant = TRUE;
                    if(!add_variable_to_table(info->lv_table, name2, node_type2, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, TRUE, FALSE, FALSE))
                    {
                        fprintf(stderr, "overflow variable table\n");
                        exit(2);
                    }
                    
                    unsigned int node2 = sNodeTree_create_define_variable(name2, extern_, info->mBlockLevel == 0, info);
                    
                    struct sStructInitializer* elements2;
                    elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    
                    unsigned int left_node = node2;
                    
                    *node = sNodeTree_create_struct_initializer(name2, node_type, num_elements, elements2, left_node, info);
    
                    nodes[num_nodes++] = *node;
                    
                    unsigned int right_node = sNodeTree_create_load_variable(name2, info);
                    right_node = sNodeTree_create_reffernce(right_node, info);
                    
                    BOOL alloc = TRUE;
                    BOOL global = TRUE;
                    unsigned int node3 = sNodeTree_create_store_variable(name, right_node, alloc, global, FALSE, info);
    
                    nodes[num_nodes++] = node3;
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else {
                    *node = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                    
                    struct sStructInitializer* elements2;
                    elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                    
                    unsigned int left_node = *node;
                    *node = sNodeTree_create_struct_initializer(name, node_type, num_elements, elements2, left_node, info);
                }
            }
            else {
                parser_err_msg(info, "not support this format");
                return FALSE;
            }
        }
        else if(result_type->mNoArrayPointerNum == 0 && (result_type->mArrayDimentionNum > 0 || result_type->mOmitArrayNum || ((result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) && result_type->mPointerNum == 0) && ((type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) || (type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) || *info->p == '{')))
        {
            if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) {
                if(*info->p == '{') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
            }
            else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) {
                if(*info->p == '{') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
            }
            else {
                expect_next_character_with_one_forward("{", info);
            }
            
            BOOL store_each_element[INIT_ARRAY_MAX];
            unsigned int store_each_element_index[INIT_ARRAY_MAX];
            unsigned int store_each_element_index2[INIT_ARRAY_MAX];
            unsigned int store_each_element_index3[INIT_ARRAY_MAX];
            unsigned int initialize_array_values[INIT_ARRAY_MAX];
            int num_initialize_array_value = 0;
            
            memset(store_each_element, 0, sizeof(BOOL)*INIT_ARRAY_MAX);
            memset(initialize_array_values, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index2, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            memset(store_each_element_index3, 0, sizeof(unsigned int)*INIT_ARRAY_MAX);
            
            info->array_initializer = TRUE;

            int num_dimention = result_type->mArrayDimentionNum;
            
            int nest = 1;

            struct sStructInitializer* struct_elements[INIT_ARRAY_MAX];
            int num_struct_elements_array[INIT_ARRAY_MAX];
            int num_struct_elements = 0;

            unsigned int right_node = 0;
            if(*info->p == '}') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(TRUE) {
                    if(*info->p == '{') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest++;
                    }
                    
                    if(*info->p == '.') {
                        nest--;
                        int num_elements = 0;
                        struct sStructInitializer elements[INIT_ARRAY_MAX];
                        if(!parse_struct_initializer(&num_elements, elements, result_type->mClass, info))
                        {
                            return FALSE;
                        }
                        
                        struct sStructInitializer* elements2;
                        elements2 = calloc(1, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                        memcpy(elements2, elements, sizeof(struct sStructInitializer)*INIT_ARRAY_MAX);
                        
                        struct_elements[num_struct_elements] = elements2;
                        num_struct_elements_array[num_struct_elements] = num_elements;
                        num_struct_elements++;
                        
                        if(num_struct_elements >= INIT_ARRAY_MAX) {
                            fprintf(stderr, "overflow array initializer\n");
                            exit(1);
                        }
                    }
                    else if(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        unsigned int index_node = 0;
                        if(!expression(&index_node, FALSE, info)) {
                            return FALSE;
                        }
                        
                        store_each_element[num_initialize_array_value] = TRUE;
                        store_each_element_index[num_initialize_array_value] = index_node;
                        
                        expect_next_character_with_one_forward("]", info);
                        
                        if(*info->p == '[') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            
                            unsigned int index_node = 0;
                            if(!expression(&index_node, FALSE, info)) {
                                return FALSE;
                            }
                            
                            store_each_element_index2[num_initialize_array_value] = index_node;
                            
                            expect_next_character_with_one_forward("]", info);
                            
                            if(num_dimention == 1) {
                                parser_err_msg(info, "Invalid array dimention");
                                return FALSE;
                            }
                            
                            if(*info->p == '[') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                
                                unsigned int index_node = 0;
                                if(!expression(&index_node, FALSE, info)) {
                                    return FALSE;
                                }
                                
                                store_each_element_index3[num_initialize_array_value] = index_node;
                                
                                expect_next_character_with_one_forward("]", info);
                                
                                if(num_dimention != 3) {
                                    parser_err_msg(info, "Invalid array dimention");
                                    return FALSE;
                                }
                            }
                        }
                        expect_next_character_with_one_forward("=", info);
                        
                        right_node = 0;
        
                        if(!expression(&right_node, FALSE, info)) {
                            return FALSE;
                        }
                        
                        initialize_array_values[num_initialize_array_value++] = right_node;
    
                        if(num_initialize_array_value >= INIT_ARRAY_MAX) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }
                    else { 
                        right_node = 0;
        
                        if(!expression(&right_node, FALSE, info)) {
                            return FALSE;
                        }
        
                        if(right_node == 0) {
                            parser_err_msg(info, "Require right value for {}");
                            *node = 0;
                        }
                        else {
                            initialize_array_values[num_initialize_array_value++] = right_node;
        
                            if(num_initialize_array_value >= INIT_ARRAY_MAX) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(*info->p == '\0') {
                        info->sline = sline;
                        parser_err_msg(info, "In the array initialization, the parser has arraived at the source end");
                        return FALSE;
                    }
                    else if(*info->p == '}') {
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                    }
                    else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0) {
                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        break;
                    }
                    else if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1 && result_type->mOmitArrayNum) {
                        if(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        break;
                    }
                    
                    if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        while(*info->p == '}') {
                            info->p++;
                            skip_spaces_and_lf(info);
                            nest--;
                        }
                        if(nest == 0) {
                            break;
                        }
                    }
                }
            }
            
            if(result_type->mOmitArrayNum) {
                if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 1) {
                    if(num_initialize_array_value == 1 && gNodes[initialize_array_values[0]].mNodeType == kNodeTypeCString) {
                        result_type->mArrayNum[0] = gNodes[right_node].uValue.sString.mLen + 1;
                    }
                    else {
                        result_type->mArrayNum[0] = num_initialize_array_value;
                    }
                }
                else if(num_struct_elements > 0) {
                    result_type->mArrayNum[0] = num_struct_elements;
                }
                else if(result_type->mClass->mFlags & CLASS_FLAGS_STRUCT) {
                    result_type->mArrayNum[0] = num_initialize_array_value / result_type->mClass->mNumFields;
                }
                else {
                    result_type->mArrayNum[0] = num_initialize_array_value;
                }
                result_type->mPointerNum--;
                result_type->mArrayDimentionNum++;
                
                num_dimention = result_type->mArrayDimentionNum;
            }
            
            info->array_initializer = FALSE;

            if(info->mBlockLevel == 0) {
                if(!add_variable_to_table(info->lv_table, name, result_type, FALSE, gNullLVALUE, -1, info->mBlockLevel == 0, TRUE, FALSE, FALSE))
                {
                    fprintf(stderr, "overflow variable table\n");
                    exit(2);
                }
                *node = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);

                *node = sNodeTree_create_array_initializer(name, num_initialize_array_value, initialize_array_values, *node, num_struct_elements, num_struct_elements_array, store_each_element, store_each_element_index, struct_elements, info);
            }
            else if(result_type->mClass->mFlags & CLASS_FLAGS_STRUCT && result_type->mPointerNum == 0) {
                if(result_type->mArrayDimentionNum == 1) {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
    
                    nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
                    
                    unsigned int array_node = sNodeTree_create_load_variable(name, info);
                    
                    int array_num = result_type->mArrayNum[0];
    
                    sCLClass* klass = result_type->mClass;
                    int num_fields = klass->mNumFields;
                    
                    int n = 0;
                    
                    int i;
                    for(i=0; i<array_num; i++) {
                        unsigned int index_node[INIT_ARRAY_MAX];
                        index_node[0] = sNodeTree_create_int_value(i, info);
                        
                        int num_dimention = 1;
                        unsigned int struct_node = sNodeTree_create_load_array_element(array_node, index_node, num_dimention, info);
                        
                        int j;
                        for(j=0; j<num_fields; j++) {
                            char* var_name = klass->mFieldName[j];
                            unsigned int right_node = initialize_array_values[n++];
        
                            nodes[num_nodes++] = sNodeTree_create_store_field(var_name, struct_node, right_node, TRUE, info);
        
                            if(num_nodes >= INIT_ARRAY_MAX+128) {
                                fprintf(stderr, "overflow array initializer number\n");
                                exit(2);
                            }
                        }
                    }
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(result_type->mArrayDimentionNum > 0) {
                    parser_err_msg(info, "neo-c don't support this format");
                    return FALSE;
                }
                else {
                    unsigned int nodes[INIT_ARRAY_MAX+128];
                    int num_nodes = 0;
    
                    nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
    
                    unsigned int array_node = sNodeTree_create_load_variable(name, info);
                    
                    sCLClass* klass = result_type->mClass;
    
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        if(i >= klass->mNumFields) {
                            parser_err_msg(info, "overflow struct initializer number");
                            return FALSE;
                        }
                        
                        char* var_name = klass->mFieldName[i];
                        unsigned int right_node = initialize_array_values[i];
    
                        nodes[num_nodes++] = sNodeTree_create_store_field(var_name, array_node, right_node, TRUE, info);
    
                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }
    
                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
            }
            else {
                unsigned int nodes[INIT_ARRAY_MAX+128];
                int num_nodes = 0;

                nodes[num_nodes++] = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);

                unsigned int array_node = sNodeTree_create_load_variable(name, info);

                if(num_dimention == 1) {
                    if(type_identify_with_class_name(result_type, "char") && result_type->mPointerNum == 0 && num_initialize_array_value == 1 && gNodes[initialize_array_values[0]].mNodeType == kNodeTypeCString) 
                    {
                        unsigned int node = initialize_array_values[0];

                        char* str = gNodes[node].uValue.sString.mString;

                        if(strlen(str)+1 >= INIT_ARRAY_MAX) {
                            parser_err_msg(info, "invalid array initializer(2)");
                            return FALSE;
                        }

                        int i;
                        for(i=0; i<strlen(str); i++) {
                            initialize_array_values[i] = sNodeTree_create_character_value(str[i], info);
                        }
                        initialize_array_values[i] = sNodeTree_create_character_value('\0', info);

                        num_initialize_array_value = strlen(str)+1;
                    }

                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];
                        
                        if(store_each_element[i]) {
                            index_node[0] = store_each_element_index[i];
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                        else {
                            index_node[0] = sNodeTree_create_int_value(i, info);
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(num_dimention == 2) {
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];

                        if(store_each_element[i]) {
                            index_node[0] = store_each_element_index[i];
                            index_node[1] = store_each_element_index2[i];
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                        else {
                            index_node[0] = sNodeTree_create_int_value(i/result_type->mArrayNum[1], info);
                            index_node[1] = sNodeTree_create_int_value(i%result_type->mArrayNum[1], info);
    
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else if(num_dimention == 3) {
                    int i;
                    for(i=0; i<num_initialize_array_value; i++) {
                        unsigned int index_node[ARRAY_DIMENTION_MAX];

                        if(store_each_element[i]) {
                            index_node[0] = store_each_element_index[i];
                            index_node[1] = store_each_element_index2[i];
                            index_node[2] = store_each_element_index3[i];
                            
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }
                        else {
                            int n = result_type->mArrayNum[1]*result_type->mArrayNum[2];
    
                            index_node[0] = sNodeTree_create_int_value(i/n, info);
                            index_node[1] = sNodeTree_create_int_value((i/result_type->mArrayNum[2])%result_type->mArrayNum[1], info);
                            index_node[2] = sNodeTree_create_int_value(i%result_type->mArrayNum[2], info);
    
                            unsigned int right_node = initialize_array_values[i];
    
                            nodes[num_nodes++] = sNodeTree_create_store_element(array_node, index_node, num_dimention, right_node, info);
                        }

                        if(num_nodes >= INIT_ARRAY_MAX+128) {
                            fprintf(stderr, "overflow array initializer number\n");
                            exit(2);
                        }
                    }

                    BOOL in_macro = FALSE;
                    *node = sNodeTree_create_nodes(nodes, num_nodes, in_macro, info);
                }
                else {
                    char buf[128];
                    snprintf(buf, 128, "invalid array dimetion %d\n", num_dimention);
                    
                    parser_err_msg(info, buf);
                }
            }
        }
        else {
            check_already_added_variable(info->lv_table, name, info);
            if(!add_variable_to_table(info->lv_table, name, result_type, readonly, gNullLVALUE, -1, info->mBlockLevel == 0, result_type->mConstant, FALSE, FALSE))
            {
                fprintf(stderr, "overflow variable table\n");
                exit(2);
            }
            
            unsigned int right_node = 0;

            if(!expression(&right_node, FALSE, info)) {
                return FALSE;
            }

            if(right_node == 0) {
                parser_err_msg(info, "Require right value for =");
                *node = 0;
            }
            else {
                BOOL global = info->mBlockLevel == 0;
                *node = sNodeTree_create_store_variable(name, right_node, TRUE, global, FALSE, info);
            }
        }
    }
    else {
        *node = sNodeTree_create_define_variable(name, extern_, info->mBlockLevel == 0, info);
    }
    
    if(get_variable_from_this_table_only(info->lv_table, name) == NULL) {
        check_already_added_variable(info->lv_table, name, info);
        if(!add_variable_to_table(info->lv_table, name, result_type, readonly, gNullLVALUE, -1, info->mBlockLevel == 0, result_type->mConstant, FALSE, FALSE))
        {
            fprintf(stderr, "overflow variable table\n");
            exit(2);
        }
    }
    
    return TRUE;
}


BOOL get_hex_number(unsigned int* node, BOOL minus, sParserInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            parser_err_msg(info, "overflow node of number");
            return FALSE;
        }
    };
    *p = 0;
    skip_spaces_and_lf(info);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned clint64 value = strtoull(buf, NULL, 0);

                if(minus) {
                    *node = sNodeTree_create_ulong_value(-value, info);
                }
                else {
                    *node = sNodeTree_create_ulong_value(value, info);
                }
            }
            else {
                unsigned clint64 value = strtoull(buf, NULL, 0);
                if(minus) {
                    *node = sNodeTree_create_ulong_value(-value, info);
                }
                else {
                    *node = sNodeTree_create_ulong_value(value, info);
                }
            }
        }
        else {
            unsigned int value = strtoull(buf, NULL, 0);
            if(minus) {
                *node = sNodeTree_create_uint_value(-value, info);
            }
            else {
                *node = sNodeTree_create_uint_value(value, info);
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned clint64 value = strtoull(buf, NULL, 0);
            if(minus) {
                *node = sNodeTree_create_long_value(-value, info);
            }
            else {
                *node = sNodeTree_create_long_value(value, info);
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned clint64 value = strtoull(buf, NULL, 0);
            if(minus) {
                *node = sNodeTree_create_ulong_value(-value, info);
            }
            else {
                *node = sNodeTree_create_ulong_value(value, info);
            }
        }
        else {
            unsigned clint64 value = strtoull(buf, NULL, 0);
            if(minus) {
                *node = sNodeTree_create_long_value(-value, info);
            }
            else {
                *node = sNodeTree_create_long_value(value, info);
            }
        }
    }
    else {
        unsigned clint64 value = strtoll(buf, NULL, 0);
        if(minus) {
            *node = sNodeTree_create_int_value(-value, info);
        }
        else {
            *node = sNodeTree_create_int_value(value, info);
        }
    }

    return TRUE;
}

BOOL get_oct_number(unsigned int* node, sParserInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p++;
        }

        if(p - buf >= buf_size-1) {
            parser_err_msg(info, "overflow node of number");
            return FALSE;
        }
    };

    *p = 0;
    skip_spaces_and_lf(info);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned clint64 value = strtoull(buf, NULL, 0);

                *node = sNodeTree_create_ulong_value(value, info);
            }
            else {
                unsigned clint64 value = strtoull(buf, NULL, 0);
                *node = sNodeTree_create_ulong_value(value, info);
            }
        }
        else {
            unsigned int value = strtoul(buf, NULL, 0);
            *node = sNodeTree_create_uint_value(value, info);
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned clint64 value = strtoull(buf, NULL, 0);
            *node = sNodeTree_create_long_value(value, info);
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned clint64 value = strtoull(buf, NULL, 0);
            *node = sNodeTree_create_ulong_value(value, info);
        }
        else {
            unsigned clint64 value = strtoull(buf, NULL, 0);
            *node = sNodeTree_create_long_value(value, info);
        }
    }
    else {
        unsigned clint64 value = strtoull(buf, NULL, 0);
        *node = sNodeTree_create_int_value(value, info);
    }

    return TRUE;
}
