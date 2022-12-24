#include "common.h"
#include <stdlib.h>
#include <limits.h>
#include <locale.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct sMacro {
    char mName[VAR_NAME_MAX];
    sBuf mBody;
};

struct sMacro gMacros[MACRO_MAX];

void init_macro()
{
    memset(gMacros, 0, sizeof(struct sMacro)*MACRO_MAX);
}

void finalize_macro()
{
    int i;
    for(i=0; i<MACRO_MAX; i++) {
        if(strcmp(gMacros[i].mName, "") != 0) 
        {
            free(gMacros[i].mBody.mBuf);
        }
    }
}

void append_macro(char* name, char* body)
{
    unsigned int hash_value = get_hash_key(name, MACRO_MAX);

    struct sMacro* it = &gMacros[hash_value];

    while(1) {
        if(strcmp(it->mName, "") == 0) {
            xstrncpy(it->mName, name, VAR_NAME_MAX);
            sBuf_init(&it->mBody);
            sBuf_append_str(&it->mBody, body);
            break;
        }
        else {
            it++;

            if(it == &gMacros[MACRO_MAX])
            {
                it = gMacros;
            }
            else if(it == &gMacros[hash_value])
            {
                fprintf(stderr, "overflow macro number\n");
                exit(2);
            }
        }
    }
}

char* get_macro(char* name)
{
    char* result = NULL;

    if(strcmp(name, "") == 0) {
        return NULL;
    }

    unsigned int hash_value = get_hash_key(name, MACRO_MAX);

    struct sMacro* it = &gMacros[hash_value];

    while(1) {
        if(strcmp(it->mName, name) == 0) {
            result = it->mBody.mBuf;
            break;
        }
        else {
            it++;

            if(it == &gMacros[MACRO_MAX])
            {
                it = gMacros;
            }
            else if(it == &gMacros[hash_value])
            {
                break;
            }
        }
    }

    return result;
}

BOOL get_command_result(sBuf* command_result, char* macro_name, char* cmdline, char* params)
{
    FILE* f;
    char buf[BUFSIZ];

    if(params) {
        setenv("PARAMS", params, 1);
    }

    f = popen(cmdline, "r");
    if(f == NULL) {
        perror("popen");
        fprintf(stderr, "popen(2) is failed at %s(%s)\n", macro_name, cmdline);
        return FALSE;
    }
    while(1) {
        int size;

        size = fread(buf, 1, BUFSIZ, f);
        sBuf_append(command_result, buf, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    if(pclose(f) < 0) {
        fprintf(stderr, "pclose(2) is failed at %s\n", macro_name);
        return FALSE;
    }

    return TRUE;
}

BOOL call_macro(unsigned * node, char* name, char* params, sParserInfo* info)
{
    char* cmdline = get_macro(name);

    if(cmdline == NULL) {
        fprintf(stderr, "invalid macro. %s\n", name);
        return FALSE;
    }

    sBuf command_result;
    sBuf_init(&command_result);

    if(!get_command_result(&command_result, name, cmdline, params))
    {
        return FALSE;
    }

    sParserInfo pinfo;

    pinfo = *info;

    pinfo.p = command_result.mBuf;
    xstrncpy(pinfo.sname, "macro", PATH_MAX);
    pinfo.sline = 1;

    int num_nodes = 0;
    unsigned int nodes[NODES_MAX];
    memset(nodes, 0, sizeof(unsigned int)*NODES_MAX);

    sVarTable* old_table = pinfo.lv_table;
    BOOL extern_c_lang = FALSE;
    pinfo.lv_table = init_block_vtable(old_table, extern_c_lang);

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
                parser_err_msg(&pinfo, "require an expression(3)");
                break;
            }
        }

        if(*pinfo.p == ';') {
            pinfo.p++;
            skip_spaces_and_lf(&pinfo);
        }
        skip_spaces_and_lf(&pinfo);

        nodes[num_nodes] = node;

        num_nodes++;

        if(num_nodes >= NODES_MAX) {
            fprintf(stderr, "overflow macro expression\n");
            exit(1);
        }
    }

    BOOL in_macro = TRUE;
    *node = sNodeTree_create_macro(nodes, num_nodes, in_macro, info);

    free(command_result.mBuf);

    return TRUE;
}
