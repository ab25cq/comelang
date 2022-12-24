#include <neo-c.h>
#include "common.h"

public {#include <neo-c.h>}
public {#include <llvm-c/Core.h>}
public {#include <llvm-c/DebugInfo.h>}
public {#define STACK_NUM 512}

public {#define COMPILE_ERR_MSG_MAX 5}

public {struct sType;}

LLVMContextRef gContext;
LLVMModuleRef  gModule;
LLVMBuilderRef gBuilder;
LLVMDIBuilderRef gDIBuilder;

void node_init(char* sname)
{
    gContext = LLVMContextCreate();
    gModule = LLVMModuleCreateWithNameInContext(sname, gContext);
    gBuilder = LLVMCreateBuilderInContext(gContext);
}

void node_final(char* sname)
{
    char sname2[PATH_MAX];

    snprintf(sname2, PATH_MAX, "%s.ll", sname);

    LLVMDumpModule(gModule); // dump module to STDOUT
    LLVMPrintModuleToFile(gModule, sname2, NULL);

    // clean memory
    LLVMDisposeBuilder(gBuilder);
    LLVMDisposeModule(gModule);
    LLVMContextDispose(gContext);
}

public {struct sVar;}

struct LVALUE
{
    sType* type;
    LLVMValueRef value;
    LLVMValueRef address;
    sVar* var;
};

int gNodeID = 0;

public { struct sInfo; }

protocol sNode
{
    unsigned int (*id)(protocol_obj_t self);
    bool (*compile)(protocol_obj_t self, sInfo* info);
};

inline unsigned int sNode*::get_hash_key(sNode* self)
{
    return self.id->();
}

inline bool sNode*::equals(sNode* self, sNode* right)
{
    return (self.compile == right.compile);
}

public {struct sVarTable;}

struct sInfo
{
    string sname;
    int sline;
    
    char* p;
    string source;
    
    int err_num;
    sType* type;

    int stack_num;

    int block_level;
    
    bool no_err_msg;
    
    LVALUE* stack;
    LVALUE* stack_head;
    
    LLVMBasicBlockRef current_block;
    
    sVarTable* lv_table;
    
    bool last_expression_is_return;
};

private void init_modules(char* sname)
{
    node_init(sname);
    class_init();
    func_init();
}

private void final_modules(char* sname)
{
    func_final();
    class_final();
    node_final(sname);
}

sNode*? expression(sInfo* info)
{
    return null;
}

bool parse(list<sNode*>* nodes, sInfo* info)
{
    sNode*? node = expression(info);
    
    if(node == null) {
        fprintf(stderr, "unexprected character(%c)\n", *info->p);
        return false;
    }
    
    nodes.push_back(node);
    
    return true;
}

string parse_word(sInfo* info)
{
    buffer* buf = new buffer();
    
    if(xisalpha(*info->p)) {
        while(xisalnum(*info->p) || *info->p == '_') {
            buf.append_char(*info->p);
            info->p++;
        }
        skip_spaces(info);
    }
    else {
        compile_err_msg(info, "require word. the character is (%c)\n", *info->p);
    }
    
    return buf.to_string();
}

void expect_next_character_with_one_forward(char* characters, sInfo* info)
{
    skip_spaces(info);

    bool found = false;
    char* p2 = characters;
    while(*p2) {
        if(*info->p == *p2) {
            found = true;
        }
        p2++;
    }

    if(found) {
        info->p++;
        skip_spaces(info);
    }
    else {
        char buf[1024];
        compile_err_msg(info, "expected that next character is (%s), but it is %c(%d)", characters, *info->p, *info->p);
        info->p++;
        skip_spaces(info);
    }
}

LVALUE* get_value_from_stack(sInfo* info, int offset)
{
    return info->stack + offset;
}

void dec_stack_ptr(int value, sInfo* info)
{
    info.stack -= value;

    info->stack_num -= value;
}

void push_value_to_stack_ptr(LVALUE* value, sInfo* info)
{
    *info->stack = *value;
    info->stack++;

    info->stack_num++;
}

void arrange_stack(sInfo* info, int top)
{
    if(info->stack_num > top) {
        dec_stack_ptr(info->stack_num-top, info);
    }
    if(info->stack_num < top) {
        fprintf(stderr, "%s %d: unexpected stack value. The stack num is %d. top is %d\n", info->sname, info->sline, info->stack_num, top);
        exit(2);
    }
}

bool compile(list<sNode*>* nodes, sInfo* info)
{
    for(int i=0; i<nodes.length(); i++) {
        sNode* it = nodes[i];
        
        if(!it.compile->(info)) {
            return false;
        }
        
        if(info.stack_num > 0) {
            arrange_stack(info, 0);
        }
    }
    
    return true;
}

void skip_spaces(sInfo* info)
{
    while(*info->p == ' ' || *info->p == '\t' || (*info->p == '\n' && info->sline++)) {
        info->p++;
    }
}

void compile_err_msg(sInfo* info, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    static int output_num = 0;
    
    info->err_num++;

    if(output_num < COMPILE_ERR_MSG_MAX && !info->no_err_msg) {
        fprintf(stdout, "%s:%d: %s\n", info->sname, info->sline, msg2);
        output_num++;
    }
    
    info->type = create_node_type_with_class_name("int"); // dummy
}

void llvm_change_block(LLVMBasicBlockRef current_block, sInfo* info)
{
    LLVMPositionBuilderAtEnd(gBuilder, current_block);
    info->current_block = current_block;
}

int main(int argc, char** argv) 
{
    string? sname = null;
    bool run = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "run") {
        }
        else {
            sname = nullable string(argv[i]);
        }
    }
    
    init_modules(sname!);
    
    sInfo info;
    
    memset(&info, 0, sizeof(sInfo));
    
    FILE* f = fopen(sname!, "r");
    
    string source = f.read();
    
    f.fclose();
    
    info.sname = sname!;
    info.source = source;
    info.p = source;
    info.sline = 1;
    info.stack = (LVALUE*)GC_malloc(sizeof(LVALUE)*STACK_NUM);
    info.stack_head = info.stack;
    
    while(*info.p) {
        list<sNode*>* nodes = new list<sNode*>();
        parse(nodes, &info).except {
            fprintf(stderr, "parse unexpected error\n");
            exit(1);
        }
        
        compile(nodes, &info).except {
            fprintf(stderr, "compile unexpected error\n");
            exit(1);
        }
        
        while(*info->p == ';') {
            info->p++;
            skip_spaces(&info);
        }
    }
    
    final_modules(sname!);
    
    return 0;
}

