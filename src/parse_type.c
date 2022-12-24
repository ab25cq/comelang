#include "common.h"
#include <ctype.h>

BOOL parse_type(sNodeType** result_type, sParserInfo* info, char* func_pointer_name, BOOL definition_typedef, BOOL definition_struct, BOOL* function_pointer_result_function, BOOL definition_function_pointer_result_function, BOOL tuple_type_name, BOOL parse_parametor_type_name, BOOL in_new, BOOL parse_interface)
{
    if(func_pointer_name) {
        func_pointer_name[0] = '\0';
    }

    BOOL uniq = FALSE;

    if(parse_cmp(info->p, "__extension__") == 0)
    {
        info->p += 13;
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "__uniq__") == 0)
    {
        uniq = TRUE;
        info->p += 8;
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "_Noreturn") == 0)
    {
        info->p += 9;
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "_Nullable") == 0)
    {
        info->p += strlen("_Nullable");
        skip_spaces_and_lf(info);
    }
    if(parse_cmp(info->p, "_Alignas") == 0)
    {
        info->p += 8;
        skip_spaces_and_lf(info);

        expect_next_character_with_one_forward("(", info);
        while(xisdigit(*info->p)) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        expect_next_character_with_one_forward(")", info);
    }


    char type_name[VAR_NAME_MAX];

    *result_type = NULL;

    BOOL nullable_ = FALSE;
    BOOL constant = FALSE;
    BOOL register_ = FALSE;
    BOOL volatile_ = FALSE;
    BOOL static_ = FALSE;
    BOOL channel = FALSE;
    BOOL immutable_ = FALSE;
    int pointer_num = 0;
    int typedef_pointer_num = 0;
    BOOL heap = FALSE;
    BOOL no_heap = FALSE;
    BOOL refference = FALSE;
    BOOL exception_ = FALSE;
    
    BOOL unsigned_ = FALSE;
    BOOL long_ = FALSE;
    BOOL short_ = FALSE;
    BOOL long_long = FALSE;
    BOOL signed_ = FALSE;

    while(TRUE) {
        char* p_before = info->p;
        int sline_before = info->sline;

        if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
        {
            return FALSE;
        }

        if(strcmp(type_name, "const") == 0) {
            constant = TRUE;
        }
        else if(strcmp(type_name, "unsigned") == 0) {
            unsigned_ = TRUE;
        }
        else if(strcmp(type_name, "signed") == 0 || strcmp(type_name, "__signed__") == 0 || strcmp(type_name, "__signed") == 0) {
            unsigned_ = FALSE;
            signed_ = TRUE;
        }
        else if(strcmp(type_name, "register") == 0) {
            register_ = TRUE;
        }
        else if(strcmp(type_name, "volatile") == 0) {
            volatile_ = TRUE;
        }
        else if(strcmp(type_name, "immutable") == 0) {
            immutable_ = TRUE;
        }
        else if(strcmp(type_name, "static") == 0 || strcmp(type_name, "private") == 0) {
            static_ = TRUE;
        }
        else if(strcmp(type_name, "exception") == 0) {
            exception_ = TRUE;
        }
        else {
            info->p = p_before;
            info->sline = sline_before;
            break;
        }
    }

    BOOL only_signed_unsigned = FALSE;
    if(unsigned_ || signed_) {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX+1];
        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
        {
            return FALSE;
        }

        if(is_premitive_type(buf, info)) {
            info->p = p_before;
            info->sline = sline_before;

            if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
        }
        else {
            info->p = p_before;
            info->sline = sline_before;

            only_signed_unsigned = TRUE;
        }
    }
    else {
        if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
        {
            return FALSE;
        }
    }

    if(only_signed_unsigned) {
        *result_type = create_node_type_with_class_name("int");
    }
    else {
        if(strcmp(type_name, "long") == 0) {
            if(parse_cmp(info->p, "unsigned") == 0)
            {
                long_ = TRUE;
                unsigned_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }
            }
            else if(parse_cmp(info->p, "int") == 0 || parse_cmp(info->p, "double") == 0) 
            {
                long_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }
            }
            else if(parse_cmp(info->p, "long") == 0) {
                long_ = TRUE;

                if(!parse_word(type_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
                {
                    return FALSE;
                }

                if(strcmp(type_name, "long") == 0) {
                    char* p = info->p;
                    int sline = info->sline;

                    if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
                    {
                        return FALSE;
                    }

                    long_long = TRUE;

                    if(strcmp(type_name, "int") == 0)
                    {
                        long_long = TRUE;
                    }
                    else if(!is_type_name(type_name, info))
                    {
                        info->p = p;
                        info->sline = sline;

                        *result_type = create_node_type_with_class_name("int");

                        long_long = TRUE;
                    }
                    else {
                        long_long = TRUE;
                        
                        *result_type = create_node_type_with_class_name("int");

                        info->p = p;
                        info->sline = sline;
                    }
                }
            }
        }
        else if(strcmp(type_name, "short") == 0)
        {
            char* p = info->p;
            int sline = info->sline;

            if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
            {
                return FALSE;
            }

            if(strcmp(type_name, "int") == 0)
            {
                short_ = TRUE;
            }
            else if(!is_type_name(type_name, info))
            {
                info->p = p;
                info->sline = sline;

                *result_type = create_node_type_with_class_name("int");

                short_ = TRUE;
            }
            else {
                info->p = p;
                info->sline = sline;

                *result_type = create_node_type_with_class_name("int");

                short_ = TRUE;
            }
        }
        else if(strcmp(type_name, "struct") == 0 || strcmp(type_name, "protocol") == 0)
        {
            BOOL protocol_ = strcmp(type_name, "protocol") == 0;
            
            if(xisalpha(*info->p) || *info->p == '_') {
                char struct_name[VAR_NAME_MAX];

                if(!parse_word(struct_name, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == '{') {
                    unsigned int node = 0;
                    BOOL anonymous = FALSE;
                    BOOL static_ = info->static_;
                    if(!parse_struct(&node, struct_name, VAR_NAME_MAX, anonymous, NULL, definition_struct, protocol_, static_, FALSE, FALSE, info)) {
                        return FALSE;
                    }

                    sCompileInfo cinfo;

                    memset(&cinfo, 0, sizeof(sCompileInfo));
                    cinfo.pinfo = info;

                    if(!compile(node, &cinfo)) {
                        return FALSE;
                    }
                }
                else {
                    sCLClass* klass = get_class(struct_name);

                    if(klass == NULL) {
                        BOOL anonymous = FALSE;
                        klass = alloc_struct(struct_name, anonymous, TRUE, NULL, protocol_);

                        sNodeType* struct_type = create_node_type_with_class_pointer(klass);
                        BOOL undefined_struct = TRUE;
                        unsigned int node = sNodeTree_struct(struct_type, info, info->sname, info->sline, undefined_struct);

                        sCompileInfo cinfo;

                        memset(&cinfo, 0, sizeof(sCompileInfo));
                        cinfo.pinfo = info;

                        if(!compile(node, &cinfo)) {
                            return FALSE;
                        }
                    }
                }

                xstrncpy(type_name,  struct_name, VAR_NAME_MAX);
            }
            else if(*info->p == '{') {
                char struct_name[VAR_NAME_MAX];

                create_anonymous_name(struct_name, VAR_NAME_MAX);

                unsigned int node = 0;
                BOOL anonymous = TRUE;
                BOOL static_ = info->static_;
                if(!parse_struct(&node, struct_name, VAR_NAME_MAX, anonymous, NULL, definition_struct, protocol_, static_, FALSE, FALSE, info)) {
                    return FALSE;
                }

                sCompileInfo cinfo;

                memset(&cinfo, 0, sizeof(sCompileInfo));
                cinfo.pinfo = info;

                if(!compile(node, &cinfo)) {
                    return FALSE;
                }

                xstrncpy(type_name, struct_name, VAR_NAME_MAX);
            }
            else {
                parser_err_msg(info, "invalid struct\n");
                return FALSE;
            }
        }
        else if(strcmp(type_name, "union") == 0) {
            if(xisalpha(*info->p) || *info->p == '_') {
                char union_name[VAR_NAME_MAX];

                if(!parse_word(union_name, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == '{') {
                    unsigned int node = 0;
                    BOOL anonymous = FALSE;
                    BOOL static_ = info->static_;
                    if(!parse_union(&node, union_name, VAR_NAME_MAX, NULL, definition_struct, static_, info)) {
                        return FALSE;
                    }

                    sCompileInfo cinfo;

                    memset(&cinfo, 0, sizeof(sCompileInfo));
                    cinfo.pinfo = info;

                    if(!compile(node, &cinfo)) {
                        return FALSE;
                    }
                }
                else {
                    sCLClass* klass = get_class(union_name);

                    if(klass == NULL && gNCHeader) {
                        return FALSE;
                    }
                }

                xstrncpy(type_name,  union_name, VAR_NAME_MAX);
            }
            else if(*info->p == '{') {
                char union_name[VAR_NAME_MAX];

                create_anonymous_name(union_name, VAR_NAME_MAX);

                unsigned int node = 0;
                BOOL anonymous = TRUE;
                BOOL static_ = info->static_;
                if(!parse_union(&node, union_name, VAR_NAME_MAX, NULL, definition_struct, static_, info)) {
                    return FALSE;
                }

                sCompileInfo cinfo;

                memset(&cinfo, 0, sizeof(sCompileInfo));
                cinfo.pinfo = info;

                if(!compile(node, &cinfo)) {
                    return FALSE;
                }

                xstrncpy(type_name, union_name, VAR_NAME_MAX);
            }
            else {
                parser_err_msg(info, "invalid union\n");
                return FALSE;
            }
        }
        else if(strcmp(type_name, "enum") == 0) 
        {
            if(xisalpha(*info->p) || *info->p == '_') {
                char enum_name[VAR_NAME_MAX];

                if(!parse_word(enum_name, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == '{') {
                    unsigned int node = 0;
                    BOOL static_ = info->static_;
                    if(!parse_enum(&node, enum_name, VAR_NAME_MAX, NULL, static_, info)) {
                        return FALSE;
                    }

/*
                    sCompileInfo cinfo;

                    memset(&cinfo, 0, sizeof(sCompileInfo));
                    cinfo.pinfo = info;

                    if(!compile(node, &cinfo)) {
                        return FALSE;
                    }
*/
                }
            }
            else if(*info->p == '{') {
                char enum_name[VAR_NAME_MAX];

                create_anonymous_name(enum_name, VAR_NAME_MAX);

                unsigned int node = 0;
                BOOL static_ = info->static_;
                if(!parse_enum(&node, enum_name, VAR_NAME_MAX, NULL, static_, info)) {
                    return FALSE;
                }

/*
                sCompileInfo cinfo;

                memset(&cinfo, 0, sizeof(sCompileInfo));
                cinfo.pinfo = info;

                if(!compile(node, &cinfo)) {
                    return FALSE;
                }
*/
            }
            else {
                parser_err_msg(info, "invalid enum\n");
                return FALSE;
            }

            *result_type = create_node_type_with_class_name("int");
        }

        int i;
        for(i=0; i<info->mNumGenerics; i++) {
            if(strcmp(type_name, info->mGenericsTypeNames[i]) == 0)
            {
                char buf[VAR_NAME_MAX+1];
                snprintf(buf, VAR_NAME_MAX, "generics%d", i);

                *result_type = create_node_type_with_class_name(buf);
            }
        }

        if(*result_type == NULL) {
            for(i=0; i<info->mNumMethodGenerics; i++) {
                if(strcmp(type_name, info->mMethodGenericsTypeNames[i]) == 0)
                {
                    char buf[VAR_NAME_MAX+1];
                    snprintf(buf, VAR_NAME_MAX, "mgenerics%d", i);

                    *result_type = create_node_type_with_class_name(buf);
                }
            }
        }

        if(*result_type == NULL) {
#ifdef __DARWIN__
            if(strcmp(type_name, "va_list") == 0) {
                *result_type = create_node_type_with_class_name(type_name);
            }
            else {
                if(strcmp(type_name, "__current__") == 0) {
                    static int n = 0;
                    snprintf(type_name, VAR_NAME_MAX, "__current_stackframe%d", n);
                    n++;
                    
                    create_current_stack_frame_struct(type_name, info->lv_table);
                }

                *result_type = get_typedef(type_name);
            }
#else
            if(strcmp(type_name, "__current__") == 0) {
                static int n = 0;
                snprintf(type_name, VAR_NAME_MAX, "__current_stackframe%d", n);
                n++;
            
                create_current_stack_frame_struct(type_name, info->lv_table);
            }

            *result_type = get_typedef(type_name);
#endif

            if(*result_type != NULL) {
                xstrncpy((*result_type)->mOriginalTypeName, type_name, VAR_NAME_MAX);

                if(strcmp(CLASS_NAME((*result_type)->mClass), "long") == 0)
                {
                    long_long = TRUE;
                }

                channel = (*result_type)->mChannel;
                nullable_ = (*result_type)->mNullable;
                no_heap = (*result_type)->mNoHeap;
                refference = (*result_type)->mRefference;
                heap = (*result_type)->mHeap;
                constant = (*result_type)->mConstant;
                unsigned_ = (*result_type)->mUnsigned;
                register_ = (*result_type)->mRegister;
                volatile_ = (*result_type)->mVolatile;
                //static_ = (*result_type)->mStatic;
                //pointer_num = 0;
                //(*result_type)->mPointerNum;
                pointer_num = (*result_type)->mPointerNum;
                //typedef_pointer_num = (*result_type)->mPointerNum;
                immutable_ = (*result_type)->mImmutable;
                
                xstrncpy((*result_type)->mTypeName, type_name, VAR_NAME_MAX);
            }
        }

        if(*result_type == NULL) {
            sCLClass* klass = get_class(type_name);
            
            if(klass) {
                *result_type = create_node_type_with_class_name(type_name);
            }
            else if((*info->p == ',' || *info->p == ')') && parse_parametor_type_name) 
            {
                *result_type = create_node_type_with_class_name("int");
                
                xstrncpy(func_pointer_name, type_name, VAR_NAME_MAX);
            }
        }
    }

    if(strcmp(type_name, "typeof") == 0 && *info->p == '(')
    {
        info->p++;
        skip_spaces_and_lf(info);

        unsigned int node = 0;
        if(!expression(&node, TRUE, info)) {
            return FALSE;
        };

        *result_type = create_node_type_with_class_name("TYPEOF");

        expect_next_character_with_one_forward(")", info);

        (*result_type)->mTypeOfExpression = node;
    }

    if(*result_type == NULL || (*result_type)->mClass == NULL) {
        *result_type = create_node_type_with_class_name("int");
    }

#if defined(__ISH__) || defined(__32BIT_CPU__)
    if(!long_long && type_identify_with_class_name((*result_type), "long"))
    {
        *result_type = create_node_type_with_class_name("int");
    }
#endif

    if(long_long && type_identify_with_class_name((*result_type), "int"))
    {
        *result_type = create_node_type_with_class_name("long");
    }

    if(long_ && type_identify_with_class_name((*result_type), "int"))
    {
        if(sizeof(long int) == 4) {
            *result_type = create_node_type_with_class_name("int");
        }
        else {
            *result_type = create_node_type_with_class_name("long");
        }
    }

    if((long_ || long_long ) && type_identify_with_class_name((*result_type), "double"))
    {
        *result_type = create_node_type_with_class_name("long_double");
    }

    if(short_ && type_identify_with_class_name((*result_type), "int"))
    {
        *result_type = create_node_type_with_class_name("short");
    }
    
    if(definition_typedef && func_pointer_name) {
        if(xisalpha(*info->p) || *info->p == '_' || *info->p == '*' || *info->p == '(') 
        {
            char* p_before = info->p;
            int sline_before = info->sline;

            while(1) {
                if(*info->p == '*') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (*result_type)->mPointerNum++;
                }
                else if(*info->p == '%') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(!gExternC && !gNCGC) {
                        (*result_type)->mHeap = TRUE;
                    }
                }
                else {
                    break;
                }
            }

            if(*info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '^') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(parse_cmp(info->p, "_Nullable") == 0) {
                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }
            if(parse_cmp(info->p, "_Nonnull") == 0) {
                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            if(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == ')') {
                xstrncpy(func_pointer_name, "fun", VAR_NAME_MAX);
            }
            else {
                if(!parse_word(func_pointer_name, VAR_NAME_MAX, info, FALSE, FALSE))
                {
                    return FALSE;
                }
            }

            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }

            if(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);
                
                int n = 0;
                BOOL none_array_num = FALSE;
                
                if(*info->p == ']') {
                    none_array_num = TRUE;
                }
                else {
                    unsigned int node2 = 0;
                    if(!expression(&node2, FALSE, info)) {
                        return FALSE;
                    }
                    
                    if(!get_const_value_from_node(&n, node2, info)) {
                        return FALSE;
                    }
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    char buf[128];
                    snprintf(buf, 128, "require ] for array pointer variable name %c", *info->p);
                    parser_err_msg(info, buf);
                    return TRUE;
                }
                
                if(none_array_num) {
                    (*result_type)->mPointerNum = pointer_num + 1;
                    (*result_type)->mArrayDimentionNum = 0;
//                    (*result_type)->mOmitArrayNum = TRUE;
                }
                else {
                    (*result_type)->mPointerNum = pointer_num;
                    (*result_type)->mArrayDimentionNum = 1;
                    (*result_type)->mArrayPointer = TRUE;
                    (*result_type)->mArrayNum[0] = n;
                }
            }
            else if(*info->p == '(') {
                sNodeType* node_type = clone_node_type(*result_type);

                *result_type = create_node_type_with_class_name("lambda");
                node_type->mPointerNum = pointer_num;
                node_type->mImmutable = immutable_;
                node_type->mNullable = nullable_;
                node_type->mNoHeap = no_heap;
                node_type->mRefference = refference;
                node_type->mHeap = heap;
                node_type->mConstant = constant;
                node_type->mUnsigned = unsigned_;
                node_type->mVolatile = volatile_;
                node_type->mStatic = static_;
                (*result_type)->mResultType = node_type;
                
                pointer_num = 0;
                immutable_ = FALSE;
                nullable_ = FALSE;
                no_heap = FALSE;
                refference = FALSE;
                heap = FALSE;
                constant = FALSE;
                unsigned_ = FALSE;
                volatile_ = FALSE;
                static_ = FALSE;

                if(*info->p == '(') {
                    info->p++;
                    skip_spaces_and_lf(info);

                    if(parse_cmp(info->p, "void") == 0) {
                        char* p_before = info->p;
                        int sline_before = info->sline;

                        char buf[VAR_NAME_MAX];
                        if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                        {
                            return FALSE;
                        }

                        if(*info->p == ')') {
                        }
                        else {
                            info->p = p_before;
                            info->sline = sline_before;
                        }
                    }

                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        while(1) {
                            sNodeType* node_type = NULL;
                            if(!parse_type(&node_type, info, NULL,  FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                                return FALSE;
                            }

                            (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                            (*result_type)->mNumParams++;

                            if((*result_type)->mNumParams >= PARAMS_MAX) {
                                parser_err_msg(info, "oveflow type params");
                                return FALSE;
                            }

                            if(xisalpha(*info->p) || *info->p == '_') {
                                char buf[VAR_NAME_MAX];

                                (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                            }

                            if(*info->p == ')') {
                                info->p++;
                                skip_spaces_and_lf(info);
                                break;
                            }
                            else if(*info->p == ',') {
                                info->p++;
                                skip_spaces_and_lf(info);

                                if(*info->p == '.' && *(info->p+1) == '.' && *(info->p+2) == '.') {
                                    info->p += 3;
                                    skip_spaces_and_lf(info);

                                    expect_next_character_with_one_forward(")", info);

                                    (*result_type)->mVarArgs = TRUE;
                                    break;
                                }
                            }
                            else {
                                char msg[1024];
                                snprintf(msg, 1024, "invalid character in lambda type name(%c) aaa", *info->p);
                                parser_err_msg(info, msg);
                                break;
                            }
                        }
                    }
                }
            }
            else {
                info->p = p_before;
                info->sline = sline_before;
                func_pointer_name[0] = '\0';
            }
        }
    }
    else if(!definition_function_pointer_result_function) {
        char* p = info->p;
        int sline = info->sline;

        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == '*') {
                info->p++;
                skip_spaces_and_lf(info);

                if(xisalpha(*info->p) || *info->p == '_' || *info->p == ')')
                {
                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);

                        if(func_pointer_name) {
                            xstrncpy(func_pointer_name, "anon_fun", VAR_NAME_MAX);
                        }
                    }
                    else {
                        if(!parse_word(func_pointer_name, VAR_NAME_MAX, info, FALSE, FALSE))
                        {
                            return FALSE;
                        }
                    }
                    
                    BOOL array_param = FALSE;
                    if(*info->p == ')') {
                        char* p = info->p;
                        int sline = info->sline;
                        
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        if(*info->p == '[') {
                            array_param = TRUE;
                        }
                        else {
                            info->p = p;
                            info->sline = sline;
                        }
                    }
                    
                    BOOL zero_size_array = FALSE;
                    if(*info->p == '[' && *(info->p+1) == ']') {
                        info->p += 2;
                        skip_spaces_and_lf(info);
                        
                        zero_size_array = TRUE;
                    }
                    
                    int array_num = -1;
                    if(*info->p == '[') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        
                        unsigned int node2 = 0;
                        if(!expression(&node2, FALSE, info)) {
                            return FALSE;
                        }
                        
                        expect_next_character_with_one_forward("]", info);
                        
                        if(!get_const_value_from_node(&array_num, node2, info)) 
                        {
                            return FALSE;
                        }
                    }

                    BOOL no_function_pointer_result_function = FALSE;
                    if(*info->p == ')' && !array_param) {
                        if(function_pointer_result_function) {
                            *function_pointer_result_function = FALSE;
                            no_function_pointer_result_function = TRUE;
                        }

                        info->p++;
                        skip_spaces_and_lf(info);
                    }

                    if(*info->p == '(') {
                        if(function_pointer_result_function && !no_function_pointer_result_function) {
                            *function_pointer_result_function = TRUE;
                            info->p = p;
                            info->sline = sline;
                            return TRUE;
                        }

                        sNodeType* node_type = clone_node_type(*result_type);

                        *result_type = create_node_type_with_class_name("lambda");

                        node_type->mPointerNum = pointer_num;
                        node_type->mImmutable = immutable_;
                        node_type->mNullable = nullable_;
                        node_type->mNoHeap = no_heap;
                        node_type->mRefference = refference;
                        node_type->mHeap = heap;
                        node_type->mConstant = constant;
                        node_type->mUnsigned = unsigned_;
                        node_type->mVolatile = volatile_;
                        node_type->mStatic = static_;
                        (*result_type)->mResultType = node_type;
                        
                        pointer_num = 0;
                        immutable_ = FALSE;
                        nullable_ = FALSE;
                        no_heap = FALSE;
                        refference = FALSE;
                        heap = FALSE;
                        constant = FALSE;
                        unsigned_ = FALSE;
                        volatile_ = FALSE;
                        static_ = FALSE;
                        
                        if(zero_size_array) {
                            //node_type->mArrayDimentionNum = 1;
                            //node_type->mArrayNum[0] = 0;
                            (*result_type)->mOmitArrayNum = TRUE;
                            if(type_identify_with_class_name(*result_type, "lambda")) {
                                pointer_num++;
                            }
                        }
                        
                        if(array_num != -1) {
                            (*result_type)->mArrayDimentionNum = 1;
                            (*result_type)->mArrayNum[0] = array_num;
                        }
                        
                        if(*info->p == '(') {
                            info->p++;
                            skip_spaces_and_lf(info);

                            if(parse_cmp(info->p, "void") == 0) {
                                char* p_before = info->p;
                                int sline_before = info->sline;

                                char buf[VAR_NAME_MAX];
                                if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
                                {
                                    return FALSE;
                                }

                                if(*info->p == ')') {
                                }
                                else {
                                    info->p = p_before;
                                    info->sline = sline_before;
                                }
                            }

                            if(*info->p == ')') {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while(1) {
                                    sNodeType* node_type = NULL;
                                    char func_pointer_name2[VAR_NAME_MAX];
                                    if(!parse_type(&node_type, info, func_pointer_name2,  FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                                        return FALSE;
                                    }

                                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = clone_node_type(node_type);

                                    (*result_type)->mNumParams++;

                                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                                        parser_err_msg(info, "oveflow type params");
                                        return FALSE;
                                    }

                                    if(xisalpha(*info->p) || *info->p == '_') {
                                        char buf[VAR_NAME_MAX];

                                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                                        BOOL array_size_is_dynamic = FALSE;
                                        BOOL param_in_function = TRUE;
                                        (void)parse_variable_name(buf, VAR_NAME_MAX, info, node_type, array_size_is_dynamic, param_in_function);
                                    }

                                    if(*info->p == ')') {
                                        info->p++;
                                        skip_spaces_and_lf(info);

                                        if(*info->p == ')' && *(info->p+1) == '(') {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }

                                        if(*info->p == '(') {
                                            info->p++;
                                            skip_spaces_and_lf(info);

                                            sNodeType* node_type = clone_node_type(*result_type);

                                            *result_type = create_node_type_with_class_name("lambda");

                                            node_type->mPointerNum = pointer_num;
                                            node_type->mImmutable = immutable_;
                                            node_type->mNullable = nullable_;
                                            node_type->mNoHeap = no_heap;
                                            node_type->mRefference = refference;
                                            node_type->mHeap = heap;
                                            node_type->mConstant = constant;
                                            node_type->mUnsigned = unsigned_;
                                            node_type->mVolatile = volatile_;
                                            node_type->mStatic = static_;
                                            (*result_type)->mResultType = node_type;
                                            
                                            pointer_num = 0;
                                            immutable_ = FALSE;
                                            nullable_ = FALSE;
                                            no_heap = FALSE;
                                            refference = FALSE;
                                            heap = FALSE;
                                            constant = FALSE;
                                            unsigned_ = FALSE;
                                            volatile_ = FALSE;
                                            static_ = FALSE;

                                            if(*info->p == ')') {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                            }
                                            else {
                                                while(1) {
                                                    sNodeType* node_type = NULL;
                                                    char func_pointer_name2[VAR_NAME_MAX];
                                                    if(!parse_type(&node_type, info, func_pointer_name2,  FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) 
                                                    {
                                                        return FALSE;
                                                    }

                                                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                                                    (*result_type)->mNumParams++;

                                                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                                                        parser_err_msg(info, "oveflow type params");
                                                        return FALSE;
                                                    }

                                                    if(xisalpha(*info->p) || *info->p == '_') {
                                                        char buf[VAR_NAME_MAX];

                                                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                                                    }

                                                    if(*info->p == ')') {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        break;
                                                    }
                                                    else if(*info->p == ',') {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        char msg[1024];
                                                        snprintf(msg, 1024, "invalid character in lambda type name(%c) bbb", *info->p);
                                                        parser_err_msg(info, msg);
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    else if(*info->p == ',') {
                                        info->p++;
                                        skip_spaces_and_lf(info);

                                        if(*info->p == '.' && *(info->p+1) == '.' && *(info->p+2) == '.') {
                                            info->p += 3;
                                            skip_spaces_and_lf(info);

                                            expect_next_character_with_one_forward(")", info);

                                            (*result_type)->mVarArgs = TRUE;
                                            break;
                                        }
                                    }
                                    else {
                                        char msg[1024];
                                        snprintf(msg, 1024, "invalid character in lambda type name(%c) ccc", *info->p);
                                        parser_err_msg(info, msg);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else {
                        if(array_num != -1 && array_param) {
                            (*result_type)->mArrayDimentionNum = 1;
                            (*result_type)->mArrayNum[0] = array_num;
                            (*result_type)->mArrayParam = TRUE;
                            (*result_type)->mNoArrayPointerNum = 1;
                        }
                        else {
                            info->p = p;
                            info->sline = sline;
                            func_pointer_name[0] = '\0';
                        }
                    }
                }
                else {
                    info->p = p;
                    info->sline = sline;
                }
            }
            else {
                info->p = p;
                info->sline = sline;
            }

        }
        else {
            info->p = p;
            info->sline = sline;
        }
    }
    
    if(func_pointer_name && *info->p == '(') 
    {
        char* p = info->p;
        int sline = info->sline;
            
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
        }
        
        if(*info->p != '*') {
            info->p = p;
            info->sline = sline;
        }
        else {
            pointer_num = 0;
            while(*info->p == '*') {
                pointer_num++;
                info->p++;
                skip_spaces_and_lf(info);
            }
            
            parse_word(func_pointer_name, VAR_NAME_MAX, info, FALSE, FALSE);
            
            if(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    (*result_type)->mPointerNum = pointer_num;
//                    (*result_type)->mOmitArrayNum = TRUE;
                }
                else {
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
                    
                    if(*info->p == ']') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        parser_err_msg(info, "require [ for array pointer variable name");
                        return TRUE;
                    }
                    
                    (*result_type)->mPointerNum = pointer_num;
                    (*result_type)->mArrayDimentionNum = 1;
                    (*result_type)->mArrayPointer = TRUE;
                    (*result_type)->mArrayNum[0] = n;
                    
                }
            }
            else {
                info->p = p;
                info->sline = sline;
            }
        }
    }

    /// generics ///
    if(*info->p == '<' && *(info->p+1) != '<' && *(info->p+1) != '=') 
    {
        info->p++;
        skip_spaces_and_lf(info);

        int generics_num = 0;

        while(1) {
            char func_pointer_name[VAR_NAME_MAX];
            if(!parse_type(&(*result_type)->mGenericsTypes[generics_num], info, func_pointer_name, FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                return FALSE;
            }

            generics_num++;

            if(generics_num >= GENERICS_TYPES_MAX) {
                parser_err_msg(info, "overflow generics parametor number");
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
                char msg[1024];
                snprintf(msg, 1024, "invalid character(%c) in generics types", *info->p);
                parser_err_msg(info, msg);
                break;
            }
        }

        (*result_type)->mNumGenericsTypes = generics_num;
    }

    /// pointer ///
    int parser_pointer_num = 0;

    while(1) {
        char* p_before = info->p;
        int sline_before = info->sline;

        char buf[VAR_NAME_MAX];
        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
        if(strcmp(buf, "__restrict") == 0 || strcmp(buf, "restrict") == 0)
        {
        }
        else if(strcmp(buf, "const") == 0)
        {
        }
        else {
            info->p = p_before;
            info->sline = info->sline;
        }

        if(*info->p == '[' && *(info->p+1) == ']') {
            info->p+=2;
            skip_spaces_and_lf(info);
            pointer_num++;
        }
        else if(*info->p == '*') {
            pointer_num++;
            parser_pointer_num++;
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(*info->p == '@') {
            info->p++;
            skip_spaces_and_lf(info);

            channel = TRUE;
        }
        else if(*info->p == '?') {
            info->p++;
            skip_spaces_and_lf(info);

            nullable_ = TRUE;
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!gNCGC) {
                heap = TRUE;
            }
        }
        else if(*info->p == '`') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!gNCGC) {
                refference = TRUE;
            }
        }
        else if(*info->p == '&') {
            info->p++;
            skip_spaces_and_lf(info);

            if(!gNCGC) {
                no_heap = TRUE;
            }
        }
        else if(parse_cmp(info->p, "_Nullable") == 0) {
             info->p += strlen("_Nullable");
             skip_spaces_and_lf(info);
        }
        else if(parse_cmp(type_name, "_Nonnull") == 0) {
             info->p += strlen("_Nonnull");
             skip_spaces_and_lf(info);
        }
        else if(parse_cmp(type_name, "__restrict") == 0) {
             info->p += strlen("__restrict");
             skip_spaces_and_lf(info);
        }
        else if(parse_cmp(type_name, "restrict") == 0) {
             info->p += strlen("restrict");
             skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }

    while(TRUE) {
        char* p_before = info->p;
        int sline_before = info->sline;

        if(!parse_word(type_name, VAR_NAME_MAX, info, FALSE, FALSE)) 
        {
            return FALSE;
        }

        if(strcmp(type_name, "const") == 0) {
            constant = TRUE;
        }
        else if(strcmp(type_name, "register") == 0) {
            register_ = TRUE;
        }
        else if(strcmp(type_name, "volatile") == 0) {
            volatile_ = TRUE;
        }
        else if(strcmp(type_name, "_Nullable") == 0) {
        }
        else if(strcmp(type_name, "_Nonnull") == 0) {
        }
        else if(strcmp(type_name, "__restrict") == 0) {
        }
        else if(strcmp(type_name, "restrict") == 0) {
        }
        else {
            info->p = p_before;
            info->sline = sline_before;
            break;
        }
    }

/*
    if(type_identify_with_class_name(*result_type, "lambda"))
    {
        (*result_type)->mPointerNum = pointer_num ;
        
    }
    else {
        (*result_type)->mPointerNum = pointer_num + typedef_pointer_num;
    }
*/
    (*result_type)->mPointerNum = pointer_num;
    
    
    (*result_type)->mChannel = channel;
    (*result_type)->mNullable = nullable_;
    (*result_type)->mNoHeap = no_heap;
    (*result_type)->mRefference = refference;
    (*result_type)->mHeap = heap;
    (*result_type)->mConstant = constant;
    (*result_type)->mUnsigned = unsigned_;
    (*result_type)->mRegister = register_;
    (*result_type)->mVolatile = volatile_;
    (*result_type)->mStatic = static_;
    (*result_type)->mUniq = uniq;
    (*result_type)->mImmutable = immutable_;
    
    if(no_heap) {
        (*result_type)->mHeap = FALSE;
    }
    
    if(exception_ && get_class("tuple2")) {
        sNodeType* node_type = clone_node_type(*result_type);
        *result_type = create_node_type_with_class_name("tuple2");
        if(!gNCGC) {
            (*result_type)->mHeap = TRUE;
        }
        (*result_type)->mNumGenericsTypes = 2;
        (*result_type)->mGenericsTypes[0] = node_type;
        (*result_type)->mGenericsTypes[1] = create_node_type_with_class_name("bool");
        (*result_type)->mPointerNum = 1;
        (*result_type)->mException = TRUE;
    }
    
    (*result_type)->mOriginalPointerNum = parser_pointer_num;

    if(strcmp((*result_type)->mTypeName, "") != 0)
    {
        (*result_type)->mTypePointerNum = parser_pointer_num;
    }
    
    if(func_pointer_name && parse_parametor_type_name) {
        char* p = info->p;
        int sline = info->sline;
        
        char buf[VAR_NAME_MAX];
        
        parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
        
        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);
            xstrncpy(func_pointer_name, buf, VAR_NAME_MAX);
    
            sNodeType* node_type = clone_node_type(*result_type);
    
            *result_type = create_node_type_with_class_name("lambda");
            (*result_type)->mResultType = node_type;
            node_type->mPointerNum = pointer_num;
            pointer_num = 0;

            if(parse_cmp(info->p, "void") == 0) {
                char* p_before = info->p;
                int sline_before = info->sline;

                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == ')') {
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }

            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(1) {
                    sNodeType* node_type = NULL;
                    char buf[VAR_NAME_MAX];
                    if(!parse_type(&node_type, info, buf, FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                        return FALSE;
                    }

                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                    (*result_type)->mNumParams++;

                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                        parser_err_msg(info, "oveflow type params");
                        return FALSE;
                    }

                    if(xisalpha(*info->p) || *info->p == '_') {
                        char buf[VAR_NAME_MAX];

                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                    }

                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        char msg[1024];
                        snprintf(msg, 1024, "invalid character in lambda type name(%c) ddd", *info->p);
                        parser_err_msg(info, msg);
                        break;
                    }
                }
            }
            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
        }
        else {
            info->p = p;
            info->sline = sline;
        }
    }

    if(parse_cmp(info->p, "lambda") == 0 && func_pointer_name) {
        xstrncpy(func_pointer_name, "lambda", VAR_NAME_MAX);
    }
    else if(((parse_interface && xisalpha(*info->p)) || (*info->p == '(' && *(info->p+1) == '*') || (*info->p == '(' && *(info->p+1) == '^')) && func_pointer_name) {
        if(*info->p == '(') {
            info->p += 2;
            skip_spaces_and_lf(info);
        }

        if(parse_cmp(info->p, "_Nullable") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        if(parse_cmp(info->p, "_Nonnull") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        if(parse_cmp(info->p, "volatile") == 0) {
            char buf[VAR_NAME_MAX];
            if(!parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE))
            {
                return FALSE;
            }
        }
        char* before_fun = info->p;
        int before_fun_sline = info->sline;

        if(*info->p == ')') {
            func_pointer_name[0] = '\0';
            before_fun = NULL;
        }
        else {
            if(!parse_word(func_pointer_name, VAR_NAME_MAX, info, TRUE, FALSE)) 
            {
                return FALSE;
            }
            
            if(!parse_interface && *info->p == '(') {
                info->p++;
                skip_spaces_and_lf(info);

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
            }
            else {
                before_fun = NULL;
            }
        }

        if(*info->p == ')') {
            expect_next_character_with_one_forward(")", info);
        }

        sNodeType* node_type = clone_node_type(*result_type);

        *result_type = create_node_type_with_class_name("lambda");
        (*result_type)->mResultType = node_type;
        node_type->mPointerNum = pointer_num;
        pointer_num = 0;

        if(*info->p == '(') {
            info->p++;
            skip_spaces_and_lf(info);

            if(parse_cmp(info->p, "void") == 0) {
                char* p_before = info->p;
                int sline_before = info->sline;

                char buf[VAR_NAME_MAX];
                if(!parse_word(buf, VAR_NAME_MAX, info, TRUE, FALSE))
                {
                    return FALSE;
                }

                if(*info->p == ')') {
                }
                else {
                    info->p = p_before;
                    info->sline = sline_before;
                }
            }

            if(*info->p == ')') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(1) {
                    sNodeType* node_type = NULL;
                    char buf[VAR_NAME_MAX];
                    if(!parse_type(&node_type, info, buf, FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                        return FALSE;
                    }

                    (*result_type)->mParamTypes[(*result_type)->mNumParams] = node_type;

                    (*result_type)->mNumParams++;

                    if((*result_type)->mNumParams >= PARAMS_MAX) {
                        parser_err_msg(info, "oveflow type params");
                        return FALSE;
                    }

                    if(xisalpha(*info->p) || *info->p == '_') {
                        char buf[VAR_NAME_MAX];

                        (void)parse_word(buf, VAR_NAME_MAX, info, FALSE, FALSE);
                    }

                    if(*info->p == ')') {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    else if(*info->p == ',') {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        char msg[1024];
                        snprintf(msg, 1024, "invalid character in lambda type name(%c) ddd", *info->p);
                        parser_err_msg(info, msg);
                        break;
                    }
                }
            }
            char asm_fname[VAR_NAME_MAX];
            BOOL flag_asm_fun_name = FALSE;
            if(!parse_attribute(info, asm_fname, &flag_asm_fun_name)) {
                return FALSE;
            }
        }

        if(before_fun) {
            func_pointer_name[0] = '\0';
            info->p = before_fun;
            info->sline = before_fun_sline;
        }
    }
    if(*info->p == '[' && !in_new) {
        if(*info->p == '[' && *(info->p+1) == ']') {
            info->p+=2;
            skip_spaces_and_lf(info);
            
            (*result_type)->mPointerNum = pointer_num + 1;
            (*result_type)->mArrayDimentionNum = 0;
        }
        else {
            int array_dimention_num = 0;
            int array_length[ARRAY_DIMENTION_MAX];
            
            while(*info->p == '[') {
                info->p++;
                skip_spaces_and_lf(info);
                
                int n = 0;
                
                unsigned int node2 = 0;
                if(!expression(&node2, FALSE, info)) {
                    return FALSE;
                }
                
                if(!get_const_value_from_node(&n, node2, info)) {
                    return FALSE;
                }
                
                if(*info->p == ']') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    array_length[array_dimention_num] = n;
                    array_dimention_num++;
                    
                    if(array_dimention_num >= ARRAY_DIMENTION_MAX) {
                        fprintf(stderr, "%s %d: invalid array dimetion\n", info->sname, info->sline);
                        exit(2);
                    }
                    break;
                }
                else {
                    char buf[128];
                    snprintf(buf, 128, "require ] for array pointer variable name %c", *info->p);
                    parser_err_msg(info, buf);
                    return TRUE;
                }
            }
            
            (*result_type)->mArrayDimentionNum = array_dimention_num;
            int i;
            for(i=0; i<array_dimention_num; i++) {
                (*result_type)->mArrayNum[i] = array_length[i];
            }
        }
    }
    
    if(type_identify_with_class_name(*result_type, "lambda")) {
        (*result_type)->mPointerNum++;
    }
    
    sNodeType* result_type2[32];
    int num_result_type = 0;
    
    result_type2[num_result_type] = (*result_type);
    num_result_type++;
    
    if(tuple_type_name && info->comma_op) {
        char* p = info->p;
        int sline = info->sline;
        
        while(*info->p == ',') {
            info->p++;
            skip_spaces_and_lf(info);
            
            sNodeType* node_type3 = NULL;
            if(!parse_type(&node_type3, info, NULL, FALSE, FALSE, NULL, FALSE, FALSE, FALSE, FALSE, FALSE)) {
                return FALSE;
            }

            result_type2[num_result_type] = node_type3;
            num_result_type++;
            
            if(num_result_type >= 32) {
                fprintf(stderr, "multiple result type overflow\n");
                exit(2);
            }
        }
    }
    
    if(num_result_type > 1) {
        if(num_result_type >= NUM_TUPLE_MAX) {
            fprintf(stderr, "%s %d: num tuple max overflow (%d)\n", info->sname, info->sline, num_result_type);
            exit(1);
        }
        
        char class_name[VAR_NAME_MAX];
        snprintf(class_name, VAR_NAME_MAX, "tuple%d", num_result_type);
        
        sNodeType* generics_type = create_node_type_with_class_name(class_name);
        
        if(generics_type == NULL || generics_type->mClass == NULL) {
            fprintf(stderr, "%s %d: tuple not found. require include <neo-c.h>\n", info->sname, info->sline);
            exit(1);
        }
        
        generics_type->mNumGenericsTypes = num_result_type;
        generics_type->mPointerNum = 1;
        
        int j;
        for(j=0; j<num_result_type; j++) {
            generics_type->mGenericsTypes[j] = result_type2[j];
        }
        
        if(gNCGC) {
            generics_type->mHeap = FALSE;
        }
        else {
            generics_type->mHeap = TRUE;
        }
        
        *result_type = generics_type;
    }
    
/*
    if(!is_number_type(*result_type)) {
        if(gNCSafeMode) {
            (*result_type)->mPointerNum = 1;
        }
    }
*/

    return TRUE;
}

