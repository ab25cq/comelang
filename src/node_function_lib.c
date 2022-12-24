#include "common.h"

struct sFunctionTableStruct
{
    char* mName;
    BOOL mDuped;
    sFunction* mFun;
};

typedef struct sFunctionTableStruct sFunctionTable;

sFunctionTable* gFuncs;
int gSizeFuncs;
int gNumFuncs;

void node_function_init()
{
    gSizeFuncs = 512;
    gFuncs = calloc(1, sizeof(sFunctionTable)*gSizeFuncs);
    memset(gFuncs, 0 , sizeof(sFunctionTable)*gSizeFuncs);
    gNumFuncs = 0;
}

sFunction* create_fun(char* name, int num_params, char** param_names, sNodeType** param_types, char** param_default_values, BOOL* param_labels, sNodeType* result_type, LLVMValueRef llvm_fun, char* block_text, BOOL generics_function, BOOL var_args, int num_generics
, char** generics_type_names, int num_method_generics, char** mgenerics_type_names, BOOL extern_, char* asm_fun_name, BOOL user, char* source, char* sname, int sline, BOOL immutable_, BOOL flag_asm_fun_name, LLVMTypeRef llvm_function_type)
{
    sFunction* p = calloc(1, sizeof(sFunction));
    memset(p, 0, sizeof(sFunction));
    
    p->mName = strdup(name);
    p->mNumParams = num_params;

    int i;
    for(i=0; i<num_params; i++) {
        p->mParamNames[i] = strdup(param_names[i]);
        p->mParamTypes[i] = clone_node_type(param_types[i]);
        if(param_default_values && param_default_values[i]) {
            p->mParamDefaultValues[i] = strdup(param_default_values[i]);
        }
        else {
            p->mParamDefaultValues[i] = NULL;
        }
        if(param_labels) {
            p->mParamLabels[i] = param_labels[i];
        }
        else {
            p->mParamLabels[i] = FALSE;
        }
    }

    p->mResultType = clone_node_type(result_type);
    p->mLLVMFunction = llvm_fun;
    p->mBlockText = block_text;
    p->mGenericsFunction = generics_function;
    p->mVarArgs = var_args;
    p->mNumGenerics = num_generics;
    p->mExtern = extern_;
    p->mUser = user;
    p->mImmutable = immutable_;
    p->mFlagAsmFunName = flag_asm_fun_name;
    p->mLLVMFunctionType = llvm_function_type;
    if(source) {
        p->mSource = strdup(source);
    }
    else {
        p->mSource = NULL;
    }

    for(i=0; i<num_generics; i++) {
        p->mGenericsTypeNames[i] = strdup(generics_type_names[i]);
    }
    
    p->mNumMethodGenerics = num_method_generics;
    for(i=0; i<num_method_generics; i++) {
        p->mMethodGenericsTypeNames[i] = strdup(mgenerics_type_names[i]);
    }

    if(asm_fun_name == NULL || strcmp(asm_fun_name, "") == 0) {
        p->mAsmFunName = NULL;
    }
    else {
        p->mAsmFunName = strdup(asm_fun_name);
    }
    
    xstrncpy(p->mSName, sname, VAR_NAME_MAX);
    
    p->mSLine = sline;
    
    return p;
}

void free_fun(sFunction* fun)
{
    free(fun->mName);
    if(fun->mAsmFunName) {
        free(fun->mAsmFunName);
    }

    int j;
    for(j=0; j<fun->mNumParams; j++) {
        free(fun->mParamNames[j]);
        if(fun->mParamDefaultValues[j]) {
            free(fun->mParamDefaultValues[j]);
        }
    }

    for(j=0; j<fun->mNumGenerics; j++) {
        free(fun->mGenericsTypeNames[j]);
    }
    
    for(j=0; j<fun->mNumMethodGenerics; j++) {
        free(fun->mMethodGenericsTypeNames[j]);
    }

    if(fun->mSource) {
        free(fun->mSource);
    }
}

void free_funcs()
{
    int i;
    for(i=0; i<gSizeFuncs; i++) {
        if(gFuncs[i].mName) {
            sFunction* fun = gFuncs[i].mFun;
            if(!gFuncs[i].mDuped) {
                //free_fun(fun);
            }
        }
    }
}

void show_func(sFunction* fun, BOOL code)
{
    printf("%s(", fun->mName);

    int j;
    for(j=0; j<fun->mNumParams; j++) {
        show_node_type_one_line(fun->mParamTypes[j]);
        printf(" %s", fun->mParamNames[j]);

        if(j!=fun->mNumParams-1) {
            printf(",");
        }
    }
    printf(") ");

    if(fun->mAsmFunName) {
        printf("asm fun name %s ", fun->mAsmFunName);
    }
    printf("extern %d var args %d gnerics function %d ", fun->mExtern, fun->mVarArgs, fun->mGenericsFunction);

    printf("num params %d\n", fun->mNumParams);

    printf("[result type] ");
    show_node_type(fun->mResultType);

    if(fun->mNumGenerics > 0) {
        printf("num gererincs %d\n", fun->mNumGenerics);

        for(j=0; j<fun->mNumGenerics; j++) {
            puts(fun->mGenericsTypeNames[j]);
        }
    }

    if(fun->mSource) {
        printf("{\n%s\n}\n", fun->mSource);
    }
}

void show_funcs()
{
    int i;
    for(i=0; i<gSizeFuncs; i++) {
        if(gFuncs[i].mName) {
            sFunction* fun = gFuncs[i].mFun;
            show_func(fun, FALSE);
        }
    }
}

void node_function_final()
{
    free_funcs();
}

void rehash_funcs()
{
    int new_size_funcs = gSizeFuncs * 2;
    sFunctionTable* new_funcs = calloc(1, sizeof(sFunctionTable)*new_size_funcs);
    memset(new_funcs, 0, sizeof(sFunctionTable)*new_size_funcs);

    int i;
    for(i=0; i<gSizeFuncs; i++) {
        if(gFuncs[i].mName) {
            int hash_value = get_hash_key(gFuncs[i].mName, new_size_funcs);

            sFunctionTable* p = new_funcs + hash_value;

            while(1) {
                if(p->mName == NULL) {
                    p->mName = strdup(gFuncs[i].mName);
                    p->mFun = gFuncs[i].mFun;
                    break;
                }
                else {
                    p++;

                    if(p == new_funcs + new_size_funcs) {
                        p = new_funcs;
                    }
                    else if(p == new_funcs + hash_value) {
                        fprintf(stderr, "ovewflow rehash_funcs\n");
                        exit(2);
                    }
                }
            }
        }
    }

    for(i=0; i<gSizeFuncs; i++) {
        if(gFuncs[i].mName) {
            free(gFuncs[i].mName);
        }
    }
    
    free(gFuncs);
    
    gFuncs = new_funcs;
    gSizeFuncs = new_size_funcs;
}

BOOL add_function_to_table(char* name, int num_params, char** param_names, sNodeType** param_types, char** param_default_values, BOOL* param_labels, sNodeType* result_type, LLVMValueRef llvm_fun, char* block_text
, BOOL generics_function, BOOL var_args, int num_generics, char** generics_type_names, int num_method_generics, char** mgenerics_type_names, BOOL extern_, char* asm_fun_name, BOOL user, char* source, char* sname, int sline, BOOL immutable_, BOOL flag_asm_fun_name, LLVMTypeRef llvm_function_type)
{
    if(gNumFuncs >= gSizeFuncs/3) {
        rehash_funcs();
    }

    int hash_value = get_hash_key(name, gSizeFuncs);
    sFunctionTable* p = gFuncs + hash_value;

    while(1) {
        if(p->mName == NULL) {
            p->mName = strdup(name);
            
            sFunction* fun = create_fun(name, num_params, param_names, param_types, param_default_values, param_labels, result_type, llvm_fun, block_text, generics_function, var_args, num_generics, generics_type_names, num_method_generics,  mgenerics_type_names, extern_, asm_fun_name, user, source, sname, sline, immutable_, flag_asm_fun_name, llvm_function_type);
            
            p->mFun = fun;

            gNumFuncs++;

            return TRUE;
        }
        else {
            if(strcmp(p->mName, name) == 0) {
                free_fun(p->mFun);
                
                sFunction* fun = create_fun(name, num_params, param_names, param_types, param_default_values, param_labels, result_type, llvm_fun, block_text, generics_function, var_args, num_generics, generics_type_names, num_method_generics,  mgenerics_type_names, extern_, asm_fun_name, user, source, sname, sline, immutable_, flag_asm_fun_name, llvm_function_type);
                
                p->mFun = fun;

                return TRUE;
            }
            else {
                p++;

                if(p == gFuncs + gSizeFuncs) {
                    p = gFuncs;
                }
                else if(p == gFuncs + hash_value) {
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
}

void remove_function_from_table(char* name)
{
    int hash_value = get_hash_key(name, gSizeFuncs);
    sFunctionTable* p = gFuncs + hash_value;

    while(1) {
        if(p->mName) {
            if(strcmp(p->mName, name) == 0) {
                free(p->mName);
                p->mName = NULL;
                
                if(p->mFun->mLLVMFunction) {
                    LLVMDeleteFunction(p->mFun->mLLVMFunction);
                }
                free_fun(p->mFun);
                
                p->mFun = NULL;
    
                gNumFuncs--;
            }
            else {
                p++;

                if(p == gFuncs + gSizeFuncs) {
                    p = gFuncs;
                }
                else if(p == gFuncs + hash_value) {
                    break;
                }
            }
        }
        else {
            break;
        }
    }
}

BOOL dupe_function(char* old_fun_name, char* new_fun_name)
{
    if(gNumFuncs >= gSizeFuncs/3) {
        rehash_funcs();
    }

    int hash_value = get_hash_key(old_fun_name, gSizeFuncs);
    sFunctionTable* p = gFuncs + hash_value;

    while(1) {
        if(p->mName == NULL) {
            return TRUE;
        }
        else {
            if(strcmp(p->mName, old_fun_name) == 0) {
                int hash_value = get_hash_key(new_fun_name, gSizeFuncs);
                sFunctionTable* p2 = gFuncs + hash_value;
                
                while(1) {
                    if(p2->mName == NULL) {
                        p2->mName = strdup(new_fun_name);
                        p2->mDuped = TRUE;
                        p2->mFun = p->mFun;
                        return TRUE;
                    }
                    else {
                        p2++;
        
                        if(p2 == gFuncs + gSizeFuncs) {
                            p2 = gFuncs;
                        }
                        else if(p2 == gFuncs + hash_value) {
                            return FALSE;
                        }
                    }
                }
            }
            else {
                p++;

                if(p == gFuncs + gSizeFuncs) {
                    p = gFuncs;
                }
                else if(p == gFuncs + hash_value) {
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
}

sFunction* get_function_from_table(char* name)
{
    int hash_value = get_hash_key(name, gSizeFuncs);

    sFunctionTable* p = gFuncs + hash_value;

    while(1) {
        if(p->mName == NULL) {
            return NULL;
        }
        else if(strcmp((char*)p->mName, name) == 0) {
            return p->mFun;
        }

        p++;

        if(p == gFuncs + gSizeFuncs) {
            p = gFuncs;
        }
        else if(p == gFuncs + hash_value) {
            return NULL;
        }
    }
}

void llvm_change_block(LLVMBasicBlockRef current_block, sCompileInfo* info)
{
    LLVMPositionBuilderAtEnd(gBuilder, current_block);
    info->current_block = current_block;
}

static void create_generics_name(char* real_name, int size_real_name, sNodeType* generics_type)
{
    xstrncpy(real_name, "", size_real_name);
    
    sCLClass* klass = generics_type->mClass;
    
    if(klass) {
        char* class_name = CLASS_NAME(klass);
    
        xstrncat(real_name, class_name, size_real_name);

        int j;
        for(j=0; j<generics_type->mPointerNum; j++) 
        {
            xstrncat(real_name, "p", size_real_name);
        }

        if(generics_type->mHeap) {
            xstrncat(real_name, "h", size_real_name);
        }
    }
    
    if(generics_type->mNumGenericsTypes > 0) {
        xstrncat(real_name, "_", size_real_name);
        
        int i;
        for(i=0; i<generics_type->mNumGenericsTypes; i++)
        {
            sNodeType* node_type = generics_type->mGenericsTypes[i];
    
            int size_real_name2 = 1024;
            char real_name2[size_real_name2];
            
            create_generics_name(real_name2, size_real_name2, node_type);
            xstrncat(real_name, real_name2, size_real_name);
    
            if(i != generics_type->mNumGenericsTypes-1) {
                xstrncat(real_name, "_", size_real_name);
            }
        }
    }
}

void create_generics_fun_name(char* real_fun_name, int size_real_fun_name, char* fun_name,  sNodeType* generics_type, int num_method_generics_types, sNodeType** method_generics_types)
{
    xstrncpy(real_fun_name, "", size_real_fun_name);

    xstrncat(real_fun_name, fun_name, size_real_fun_name);

    if(generics_type) {
        int i;
        if(generics_type->mNumGenericsTypes > 0) {
            xstrncat(real_fun_name, "_", size_real_fun_name);
        }

        for(i=0; i<generics_type->mNumGenericsTypes; i++)
        {
            sNodeType* node_type = generics_type->mGenericsTypes[i];

            int size_real_name = 1024;
            char real_name[size_real_name];
            
            real_name[0] = '\0';
            
            create_generics_name(real_name, size_real_name, node_type);
            xstrncat(real_fun_name, real_name, size_real_fun_name);

            if(i != generics_type->mNumGenericsTypes-1) {
                xstrncat(real_fun_name, "_", size_real_fun_name);
            }
        }
    }
    
    if(num_method_generics_types > 0) {
        xstrncat(real_fun_name, "_", size_real_fun_name);

        int i;
        for(i=0; i<num_method_generics_types; i++) 
        {
            sNodeType* node_type = method_generics_types[i];

            sCLClass* klass = node_type->mClass;
            xstrncat(real_fun_name, CLASS_NAME(klass), size_real_fun_name);

            int j;
            for(j=0; j<node_type->mPointerNum; j++) 
            {
                xstrncat(real_fun_name, "p", size_real_fun_name);
            }

            if(node_type->mHeap) {
                xstrncat(real_fun_name, "h", size_real_fun_name);
            }

            if(i != num_method_generics_types-1) {
                xstrncat(real_fun_name, "_", size_real_fun_name);
            }
        }
    }
}

void create_real_fun_name(char* real_fun_name, size_t size_real_fun_name, char* fun_name, char* struct_name)
{
    if(strcmp(struct_name, "") == 0) {
        xstrncpy(real_fun_name, fun_name, size_real_fun_name);
    }
    else {
        xstrncpy(real_fun_name, struct_name, size_real_fun_name);
        xstrncat(real_fun_name, "_", size_real_fun_name);
        xstrncat(real_fun_name, fun_name, size_real_fun_name);
    }
}
