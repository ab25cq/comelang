#include "common.h"
#include <fcntl.h>
#include <libgen.h>

BOOL read_source(char* fname, sBuf* source)
{
    int f = open(fname, O_RDONLY);

    if(f < 0) {
        fprintf(stderr, "%s doesn't exist(2)\n", fname);
        return FALSE;
    }

    while(1) {
        char buf[BUFSIZ+1];
        int size = read(f, buf, BUFSIZ);

        if(size == 0) {
            break;
        }
        else if(size < 0) {
            fprintf(stderr, "unexpected error\n");
            close(f);
            return FALSE;
        }

        buf[size] = 0;
        sBuf_append_str(source, buf);

        if(size < BUFSIZ) {
            break;
        }
    }

    close(f);

    return TRUE;
}

BOOL read_source_and_delete_comment(char* fname, sBuf* source)
{
    int f = open(fname, O_RDONLY);

    if(f < 0) {
        fprintf(stderr, "%s doesn't exist(2)\n", fname);
        return FALSE;
    }
    
    sBuf source2;
    
    sBuf_init(&source2);

    while(1) {
        char buf[BUFSIZ+1];
        int size = read(f, buf, BUFSIZ);

        if(size == 0) {
            break;
        }
        else if(size < 0) {
            fprintf(stderr, "unexpected error\n");
            close(f);
            return FALSE;
        }

        buf[size] = 0;
        sBuf_append_str(&source2, buf);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    close(f);
    
    char* p = source2.mBuf;
    
    BOOL squort = FALSE;
    BOOL dquort = FALSE;
    
    while(*p) {
        if(!squort && *p == '\"') {
            sBuf_append_char(source, *p);
            p++;
            dquort = !dquort;
        }
        else if(!dquort && *p == '\'') {
            sBuf_append_char(source, *p);
            p++;
            squort = !squort;
        }
        else if(squort || dquort) {
            sBuf_append_char(source, *p);
            p++;
        }
        else if(*p == '/' && *(p+1) == '*') {
            while(*p) {
                if(*p == '*' && *(p+1) == '/') {
                    p+=2;
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else if(*p == '/' && *(p+1) == '/') {
            while(*p) {
                if(*p == '\n') {
                    p++;
                    break;
                }
                else {
                    p++;
                }
            }
        }
        else {
            sBuf_append_char(source, *p);
            p++;
        }
    }
    
    free(source2.mBuf);

    return TRUE;
}

BOOL get_command_result2(sBuf* command_result, char* cmdline)
{
    char buf[BUFSIZ];
    
    FILE* f = popen(cmdline, "r");
    if(f == NULL) {
        perror("popen");
        fprintf(stderr, "popen(2) is failed at %s\n", cmdline);
        return FALSE;
    }

    while(1) {
        int size = fread(buf, 1, BUFSIZ, f);
        sBuf_append(command_result, buf, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    if(pclose(f) < 0) {
        fprintf(stderr, "pclose(2) is failed at %s\n", cmdline);
        return FALSE;
    }

    return TRUE;
}

static BOOL parse_compiletime_macro(unsigned int* node, sParserInfo* info)
{
    sBuf cmdline;

    sBuf_init(&cmdline);
    while(TRUE) {
        if(*info->p == '`' && *(info->p+1) == '`' && *(info->p+2) == '`') {
            info->p+=3;
            skip_spaces_and_lf(info);
            break;
        }
        else if(*info->p == '\0') {
            fprintf(stderr, "unclosed macro\n");
            exit(2);
        }
        else {
            sBuf_append_char(&cmdline, *info->p);
            info->p++;
        }
    }

    if(gNCNoMacro) {
        *node = sNodeTree_create_null(info);
    }
    else {
        sBuf command_result;
        sBuf_init(&command_result);

        if(!get_command_result2(&command_result, cmdline.mBuf))
        {
            return FALSE;
        }

        sParserInfo pinfo;

        pinfo = *info;

        pinfo.p = command_result.mBuf;

        xstrncpy(pinfo.sname, "macro", PATH_MAX);
        pinfo.sline = 1;

        sCompileInfo cinfo;
        memset(&cinfo, 0, sizeof(sCompileInfo));

        xstrncpy(cinfo.fun_name, "macro", VAR_NAME_MAX);

        cinfo.pinfo = &pinfo;

        while(*pinfo.p) {
            skip_spaces_and_lf(&pinfo);

            unsigned int node = 0;

            if(*pinfo.p == '#') {
                if(!parse_sharp(&pinfo)) {
                    return FALSE;
                }
            }
            else if(parse_cmp(pinfo.p, "__extension__") == 0)
            {
                pinfo.p += 13;
                skip_spaces_and_lf(&pinfo);
            }
            else {
                if(!expression(&node, TRUE, &pinfo)) {
                    return FALSE;
                }

                if(node == 0) {
                    parser_err_msg(&pinfo, "require an expression(1)");
                    break;
                }

                if(pinfo.err_num == 0)
                {
                    cinfo.sline = gNodes[node].mLine;
                    xstrncpy(cinfo.sname, gNodes[node].mSName, PATH_MAX);

                    if(!compile(node, &cinfo)) {
                        return FALSE;
                    }

                    arrange_stack(&cinfo, 0);
                }
            }

            if(*pinfo.p == ';') {
                pinfo.p++;
                skip_spaces_and_lf(&pinfo);
            }
            skip_spaces_and_lf(&pinfo);
        }
        
        if(cinfo.err_num > 0) {
            fprintf(stderr, "Compile error number is %d. ", cinfo.err_num);
            exit(1);
        }

        *node = sNodeTree_create_null(info);

        free(command_result.mBuf);
        free(cmdline.mBuf);
    }

    return TRUE;
}

BOOL compile_source(char* fname, char** source, BOOL optimize, sVarTable* module_var_table)
{
    sParserInfo info;
    memset(&info, 0, sizeof(sParserInfo));

    sBuf_init(&info.mConst);

    info.p = *source;
    info.source = source;
    xstrncpy(info.sname, fname, PATH_MAX);
    info.lv_table = module_var_table;
    info.sline = 1;
    
    {
        sNodeType* node_type = create_node_type_with_class_name("int");
        LLVMTypeRef llvm_type = create_llvm_type_from_node_type(node_type);
        LLVMValueRef global = LLVMGetNamedGlobal(gModule, "errno");
        if(global == NULL) {
            LLVMValueRef alloca_value = LLVMAddGlobal(gModule, llvm_type, "errno");
    
            LLVMSetExternallyInitialized(alloca_value, TRUE);
            
            LVALUE llvm_value;
            llvm_value.type = clone_node_type(node_type);
            llvm_value.value = alloca_value;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
            
            (void)add_variable_to_table(info.lv_table, "errno", node_type, FALSE, llvm_value, -1, TRUE, FALSE, FALSE);
        }
        else {
            LVALUE llvm_value;
            llvm_value.type = clone_node_type(node_type);
            llvm_value.value = global;
            llvm_value.address = NULL;
            llvm_value.var = NULL;
            
            (void)add_variable_to_table(info.lv_table, "errno", node_type, FALSE, gNullLVALUE, -1, TRUE, FALSE, FALSE);
        }
    }

    char module_name[PATH_MAX];
    xstrncpy(module_name, fname, PATH_MAX);
    
    char* module_name2 = basename(module_name);

    char module_name3[PATH_MAX];
    xstrncpy(module_name3, module_name2, PATH_MAX);

    char* p = module_name3 + strlen(module_name3);
    while(p >= module_name3) {
        if(*p == '.') {
            *p = '\0';
            break;
        }
        else {
            p--;
        }
    }

    info.module_name = module_name3;

    sCompileInfo cinfo;
    memset(&cinfo, 0, sizeof(sCompileInfo));

    xstrncpy(cinfo.fun_name, fname, VAR_NAME_MAX);

    cinfo.pinfo = &info;

    BOOL in_macro = FALSE;
    char* p_macro_saved = NULL;
    int sline_macro_saved = 0;
    sBuf command_result;

    while(*info.p) {
        skip_spaces_and_lf(&info);
 
        int sline = info.sline;
        char* sname = info.sname;

        info.change_sline = FALSE;

        if(*info.p == '`' && *(info.p+1) == '`' && *(info.p+2) == '`') {
            info.p += 3;
            skip_spaces_and_lf(&info);

            sBuf cmdline;

            sBuf_init(&cmdline);
            while(TRUE) {
                if(*info.p == '`' && *(info.p+1) == '`' && *(info.p+2) == '`') {
                    info.p+=3;
                    skip_spaces_and_lf(&info);
                    break;
                }
                else if(*info.p == '\0') {
                    fprintf(stderr, "unclosed macro\n");
                    exit(2);
                }
                else {
                    sBuf_append_char(&cmdline, *info.p);
                    info.p++;
                }
            }

            if(gNCNoMacro) {
            }
            else {
                sBuf_init(&command_result);

                if(!get_command_result2(&command_result, cmdline.mBuf))
                {
                    return FALSE;
                }

                in_macro = TRUE;
                p_macro_saved = info.p;
                sline_macro_saved = info.sline;

                info.p = command_result.mBuf;
            }

            free(cmdline.mBuf);

            skip_spaces_and_lf(&info);
        }

        if(*info.p == '#') {
            if(!parse_sharp(&info)) {
                free(info.mConst.mBuf);
                return FALSE;
            }
        }
        else if(parse_cmp(info.p, "__extension__") == 0)
        {
            info.p += 13;
            skip_spaces_and_lf(&info);
        }
        else {
            unsigned int node = 0;

            if(!expression(&node, TRUE, &info)) {
                free(info.mConst.mBuf);
                return FALSE;
            }

            if(node == 0) {
                parser_err_msg(&info, "require an expression(2)");
                break;
            }

            if(info.change_sline) {
                info.change_sline = FALSE;

                gNodes[node].mLine = info.sline;
                xstrncpy(gNodes[node].mSName, fname, PATH_MAX);
            }

            if(info.err_num == 0)
            {
                cinfo.sline = gNodes[node].mLine;
                xstrncpy(cinfo.sname, gNodes[node].mSName, PATH_MAX);

                if(!gNCHeader) {
                    if(!compile(node, &cinfo)) {
                        free(info.mConst.mBuf);
                        return FALSE;
                    }
    
                    arrange_stack(&cinfo, 0);
                }
            }
        }

        if(*info.p == ';') {
            info.p++;
            skip_spaces_and_lf(&info);
        }
        skip_spaces_and_lf(&info);

        if(*info.p == '\0' && in_macro) {
            in_macro = FALSE;
            info.p = p_macro_saved;
            info.sline = sline_macro_saved;

            free(command_result.mBuf);
        }
    }
    

    if(info.err_num > 0 || cinfo.err_num > 0) {
        if(!gNCType && !gNCHeader) {
            fprintf(stderr, "Parser error number is %d. Compile error number is %d\n", info.err_num, cinfo.err_num);
            free(info.mConst.mBuf);
            exit(2);
        }
    }

    free(info.mConst.mBuf);

    if(gNCGlobal) {
        sVarTable* table = module_var_table;

        sVar* p;

        p = table->mLocalVariables;

        while(1) {
            if(p->mName[0] != 0) {
                printf("%s ", p->mName);
                show_node_type(p->mType);
            }

            p++;

            if(p == table->mLocalVariables + LOCAL_VARIABLE_MAX) {
                break;
            }
        }
    }
    else if(gNCClass) {
        show_classes();
    }
    else if(gNCTypedef) {
        show_typedefs();
    }
    else if(gNCFunction) {
        show_funcs();
    }
    
    return TRUE;
}

