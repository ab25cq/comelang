#include "common.h"
#include <libgen.h>

char* gVersion;
BOOL gNCGC = TRUE;
BOOL gNCNoNullCheck = TRUE;
BOOL gNCDebug = FALSE;
char gFName[PATH_MAX];
sVarTable* gModuleVarTable;
BOOL gNCSafeMode = FALSE;
BOOL gNCCome = FALSE;
BOOL gNCTranspile = FALSE;
int gSLine = 0;
char* gSName = NULL;

static void compiler_init(char* sname)
{
    transpiler_init();
    node_var_init();
    node_function_init();
    node_loop_init();
    init_typedef();
    parser_init();
    init_node_types();
    class_init();
    init_vtable();
    init_nodes(sname);
}

static void compiler_final(char* sname)
{
    transpiler_final();
    final_vtable();
    class_final();
    free_node_types();
    parser_final();
    free_nodes(sname);
    node_function_final();
    node_var_final();
    node_loop_final();
}

BOOL compiler(char* fname, BOOL optimize, sVarTable* module_var_table, BOOL neo_c_header, char* macro_definition, char* include_path, BOOL output_cpp_souce, BOOL output_assembler_source)
{
    if(access(fname, F_OK) != 0) {
        fprintf(stderr, "%s doesn't exist\n", fname);
        return FALSE;
    }
    
    sBuf source;
    sBuf_init(&source);

    char cflags[1024];

    if(strstr(fname, "/")) {
        if(getenv("CFLAGS")) {
            char tmp[PATH_MAX];
            strcpy(tmp, fname);
            snprintf(cflags, 1024, "%s -I%s", getenv("CFLAGS"), dirname(tmp));
        }
        else {
            char tmp[PATH_MAX];
            strcpy(tmp, fname);
            snprintf(cflags, 1024, "-I%s", dirname(tmp));
        }
    }
    else if(getenv("CFLAGS")) {
        xstrncpy(cflags, getenv("CFLAGS"), 1024);
    }
    else {
        xstrncpy(cflags, "", 1024);
    }
    
    char cpp_fname[PATH_MAX];

    xstrncpy(cpp_fname, fname, PATH_MAX);
    xstrncat(cpp_fname, ".i", PATH_MAX);

    char cmd[1024];
#ifdef __DARWIN_ARM__
    snprintf(cmd, 1024, "/opt/homebrew/opt/llvm/bin/clang-cpp %s -I. -I/usr/local/include -I%s/include %s -I/opt/homebrew/opt/llvm@16/include -I/opt/homebrew/opt/libgc/include -I/opt/homebrew/opt/pcre/include -D__DARWIN_ARM__ -U__GNUC__ %s %s > %s", include_path, PREFIX, cflags, fname, macro_definition, cpp_fname);
#else
    snprintf(cmd, 1024, "cpp %s -I. -I%s/include %s -U__GNUC__ %s %s > %s", include_path, PREFIX,cflags, fname, macro_definition, cpp_fname);
#endif
    //puts(cmd);

    int rc = system(cmd);
    if(rc != 0) {
        char cmd[1024];
        snprintf(cmd, 1024, "cpp -I. -I%s/include %s -C %s %s > %s", PREFIX, cflags, fname, macro_definition ? macro_definition : "", cpp_fname);

        //puts(cmd);
        rc = system(cmd);

        if(rc != 0) {
            fprintf(stderr, "failed to cpp(2) (%s)\n", cmd);
            exit(5);
        }
    }

    if(!read_source(cpp_fname, &source)) {
        fprintf(stderr, "read_source result is FALSE\n");
        free(source.mBuf);
        return FALSE;
    }
    
    if(!compile_source(fname, &source.mBuf, optimize, module_var_table)) 
    {
        fprintf(stderr, "compile_source result is FALSE\n");
        free(source.mBuf);
        return FALSE;
    }
    
    if(!output_cpp_souce) {
        char cmd[1024];
        snprintf(cmd, 1024, "rm -f %s", cpp_fname);

        (void)system(cmd);
    }
    
    free(source.mBuf);

    return TRUE;
}

static BOOL eval_compiler(char* cmdline, char* fname, BOOL optimize, sVarTable* module_var_table, BOOL neo_c_header, char* macro_definition, char* include_path)
{
    BOOL output_cpp_souce = FALSE;
    BOOL output_assembler_source = FALSE;
    return compiler(fname, optimize, module_var_table, neo_c_header, macro_definition, include_path, output_cpp_souce, output_assembler_source);
}

static BOOL compile_ll_file(char* fname, char* bname, char* clang_optiones, BOOL output_assembler_source)
{
    char bname2[PATH_MAX];
    
    if(bname[0] == '\0') {
        char* p = fname + strlen(fname);
        
        while(p >= fname) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }
        
        if(p == fname) {
            fprintf(stderr, "invalid file name. require extension name(%s)", fname);
            return FALSE;
        }
        
        memcpy(bname2, fname, p - fname);
        bname2[p-fname] = '\0';
        xstrncat(bname2, ".o", PATH_MAX);
    }
    else {
        xstrncpy(bname2, bname, PATH_MAX);
    }
    
    char cmd[1024];
    
#ifdef __DARWIN_ARM__
    snprintf(cmd, 1024, "%s -o %s -c %s.ll %s -fPIC -I/opt/homebrew/opt/llvm@16/include -L/opt/homebrew/opt/llvm@16/lib -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/libgc/lib -L/opt/homebrew/opt/boehmgc/lib -I/opt/homebrew/opt/pcre/include -fPIC -L/opt/homebrew/opt/boehmgc/lib ", CLANG, bname2, fname, clang_optiones);
#else
    snprintf(cmd, 1024, "%s -o %s -c %s.ll %s -fPIC -fPIC ", CLANG, bname2, fname, clang_optiones);
#endif
    
    int rc = system(cmd);
    //puts(cmd);
    if(rc != 0) {
        fprintf(stderr, "return code is error on clang\n");
        exit(6);
    }
    
    if(!output_assembler_source) {
        char cmd[1024];
        snprintf(cmd, 1024, "rm -f %s.ll", fname);
        
        //puts(cmd);
        (void)system(cmd);
    }
    
    snprintf(cmd, 1024, "rm -f %s.bc", fname);
    
    //puts(cmd);
    (void)system(cmd);
    
    return TRUE;
}

static BOOL compile_c_file(char* fname, char* bname, char* clang_optiones, BOOL output_assembler_source)
{
    char bname2[PATH_MAX];
    
    if(bname[0] == '\0') {
        char* p = fname + strlen(fname);
        
        while(p >= fname) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }
        
        if(p == fname) {
            fprintf(stderr, "invalid file name. require extension name(%s)", fname);
            return FALSE;
        }
        
        memcpy(bname2, fname, p - fname);
        bname2[p-fname] = '\0';
        xstrncat(bname2, ".o", PATH_MAX);
    }
    else {
        xstrncpy(bname2, bname, PATH_MAX);
    }
    
    if(!output_assembler_source) {
        char cmd[1024];
    
#ifdef __DARWIN_ARM__
        snprintf(cmd, 1024, "%s -o %s -c %s.c %s -fPIC -I/opt/homebrew/opt/llvm@16/include -L/opt/homebrew/opt/llvm@16/lib -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/libgc/lib -L/opt/homebrew/opt/boehmgc/lib -I/opt/homebrew/opt/pcre/include -fPIC -L/opt/homebrew/opt/boehmgc/lib ", CLANG, bname2, fname, clang_optiones);
#else
        snprintf(cmd, 1024, "%s -o %s -c %s.c %s -fPIC -fPIC ", CLANG, bname2, fname, clang_optiones);
#endif
        
        int rc = system(cmd);
        //puts(cmd);
        if(rc != 0) {
            fprintf(stderr, "return code is error on clang\n");
            exit(6);
        }
    }
    
    if(!output_assembler_source) {
        char cmd[1024];
        snprintf(cmd, 1024, "rm -f %s.ll", fname);
        
        //puts(cmd);
        (void)system(cmd);
    }
    
    return TRUE;
}

static BOOL linker(char* fname, int num_obj_files, char** obj_files, char* clang_optiones, char* exec_fname, BOOL output_assembler_source)
{
    char bname[PATH_MAX];
    
    if(fname[0] != '\0') {
        char* p = fname + strlen(fname);
        
        while(p >= fname) {
            if(*p == '.') {
                break;
            }
            else {
                p--;
            }
        }
        
        if(p == fname) {
            fprintf(stderr, "invalid file name. require extension name(%s)", fname);
            return FALSE;
        }
        
        memcpy(bname, fname, p - fname);
        bname[p-fname] = '\0';
    }
    else {
        bname[0] = '\0';
    }
    
    if(strcmp(fname, "") != 0) {
        char cmd[1024];
        
        if(gNCTranspile) {
#ifdef __DARWIN_ARM__
            snprintf(cmd, 1024, "%s -c -o %s.o %s.c -fPIC -I/opt/homebrew/opt/llvm@16/include -L/opt/homebrew/opt/llvm@16/lib -I/opt/homebrew/opt/pcre/include %s", CLANG, fname, fname, clang_optiones);
        
            int rc = system(cmd);
            if(rc != 0) {
                fprintf(stderr, "return code is error on clang\n");
                exit(7);
            }
        
#else
            int rc;
            snprintf(cmd, 1024, "%s -c -o %s.o %s.c -fPIC %s", CLANG, fname, fname, clang_optiones);
#endif
            //puts(cmd);
        
            rc = system(cmd);
            if(rc != 0) {
                fprintf(stderr, "return code is error on clang\n");
                exit(9);
            }
            
            snprintf(cmd, 1024, "rm -f %s.bc", fname);
            
            (void)system(cmd);
        }
        else {
#ifdef __DARWIN_ARM__
            snprintf(cmd, 1024, "%s -c -o %s.o %s.ll -fPIC -I/opt/homebrew/opt/llvm@16/include -L/opt/homebrew/opt/llvm@16/lib -I/opt/homebrew/opt/pcre/include ", CLANG, fname, fname);
        
            int rc = system(cmd);
            if(rc != 0) {
                fprintf(stderr, "return code is error on clang\n");
                exit(7);
            }
            
#else
            snprintf(cmd, 1024, "opt -o %s.bc %s.ll  ", fname, fname);
            //puts(cmd);
        
            int rc = system(cmd);
            if(rc != 0) {
                fprintf(stderr, "return code is error on clang\n");
                exit(8);
            }
            snprintf(cmd, 1024, "%s -c -o %s.o %s.bc -fPIC ", CLANG, fname, fname);
#endif
            //puts(cmd);
        
            rc = system(cmd);
            if(rc != 0) {
                fprintf(stderr, "return code is error on clang\n");
                exit(9);
            }
            
            snprintf(cmd, 1024, "rm -f %s.bc", fname);
            
            (void)system(cmd);
        }
    }
    
    if(fname[0] == '\0') {
        if(exec_fname[0] == '\0') {
            xstrncpy(exec_fname, "a.out", PATH_MAX);
        }
        
        char cmd[1024];
        if(!gNCGC) {
            snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/lib/libgc/lib -fPIC -L/opt/homebrew/opt/libgc/lib -L/opt/homebrew/opt/pcre/lib ", GCC, exec_fname, clang_optiones);
        }
        else {
            snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/libgc/lib -fPIC -L/opt/homebrew/opt/boehmgc/lib ", GCC, exec_fname, clang_optiones);
        }
        
        int i;
        for(i=0; i<num_obj_files; i++) {
            xstrncat(cmd, obj_files[i], 1024);
            xstrncat(cmd, " ", 1024);
        }
        
        if(gNCGC) {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang-gc.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        else if(gNCTranspile) {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang-ts.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        else {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        
        int rc = system(cmd);
        if(rc != 0) {
            fprintf(stderr, "return code is error on clang\n");
            exit(10);
        }
    }
    else {
        char cmd[1024];
        if(exec_fname[0] != '\0') {
            if(!gNCGC) {
                snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/libgc/lib -fPIC -L/opt/homebrew/opt/boehmgc/lib %s.o ", GCC, exec_fname, clang_optiones, fname);
            }
            else {
                snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/lib -fPIC -L/opt/homebrew/opt/boehmgc/lib %s.o ", GCC, exec_fname, clang_optiones, fname);
            }
        }
        else {
            if(!gNCGC) {
                snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -fPIC -L/usr/local/opt/libgc/lib -L/opt/homebrew/opt/boehmgc/lib %s.o ", GCC, bname, clang_optiones, fname);
            }
            else if(gNCTranspile) {
                char buf[128];
                snprintf(buf, 128, "%slib/libcomelang-ts.a", PREFIX);
                xstrncat(cmd, buf, 1024);
                xstrncat(cmd, " ", 1024);
            }
            else {
                snprintf(cmd, 1024, "%s -o %s %s -lgc -lpcre -lpthread -fPIC -L/opt/homebrew/lib -I/opt/homebrew/include -L/usr/local/opt/libgc/lib -L/opt/homebrew/opt/boehmgc/lib %s.o ", GCC, bname, clang_optiones, fname);
            }
        }
        
        int i;
        for(i=0; i<num_obj_files; i++) {
            xstrncat(cmd, obj_files[i], 1024);
            xstrncat(cmd, " ", 1024);
        }
        
        if(gNCGC) {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang-gc.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        else if(gNCTranspile) {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang-ts.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        else {
            char buf[128];
            snprintf(buf, 128, "%slib/libcomelang.a", PREFIX);
            xstrncat(cmd, buf, 1024);
            xstrncat(cmd, " ", 1024);
        }
        
        int rc = system(cmd);
        if(rc != 0) {
            fprintf(stderr, "return code is error on clang\n");
            exit(11);
        }
    }
    
    if(!output_assembler_source) {
        char cmd[1024];
        snprintf(cmd, 1024, "rm -f %s.ll %s.o %s.bc ", fname, fname, fname);
        
        (void)system(cmd);
    }
    
    return TRUE;
}

int main(int argc, char** argv)
{
    gVersion = "1.3.6";
    
    setlocale(LC_ALL, "");
    
    char sname[128][PATH_MAX];
    memset((void*)sname, 0, sizeof(char)*128*PATH_MAX);
    
    char header_name[PATH_MAX];
    memset(header_name, 0, sizeof(char)*PATH_MAX);

    const int max_c_include_path = 1024*2*2*2;
    char c_include_path[max_c_include_path];
    snprintf(c_include_path, max_c_include_path, "%s/include/", PREFIX);
    
    char macro_definition[max_c_include_path];
    char obj_files[128][PATH_MAX];
    int num_obj_files = 0;
    BOOL no_linker = FALSE;
    char exec_fname[PATH_MAX];
    char include_paths[128][PATH_MAX];
    int num_include_paths = 0;

    macro_definition[0] = '\0';
    exec_fname[0] = '\0';
    
    int num_snames = 0;

    char optiones[1024];
    
    char clang_optiones[1024];

    clang_optiones[0] = '\0';
    optiones[0] = '\0';
    
    BOOL output_cpp_souce = FALSE;
    
    BOOL eval = FALSE;
    char cmdline[BUFSIZ];
    BOOL header = FALSE;
    
    BOOL output_assembler_source = FALSE;
    
    int i;
    for(i=1; i<argc; i++) {
        if(strcmp(argv[i], "--version") == 0 || strcmp(argv[i], "-version") == 0 || strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "-V") == 0)
        {
            printf("comelang version %s\n", gVersion);
            exit(12);
        }
        else if(strcmp(argv[i], "-g") == 0)
        {
            gNCDebug = TRUE;
            xstrncat(optiones, "-g ", 1024);
            xstrncat(clang_optiones, "-g ", 1024);
        }
        else if(strcmp(argv[i], "-s") == 0 || strcmp(argv[i], "-S") == 0)
        {
            output_assembler_source = TRUE;
        }
        else if(strcmp(argv[i], "-E") == 0)
        {
            output_cpp_souce = TRUE;
        }
        else if(strcmp(argv[i], "-gc") == 0)
        {
            gNCGC = TRUE;
            xstrncat(optiones, "-gc ", 1024);
        }
        else if(strcmp(argv[i], "-no-gc") == 0)
        {
            gNCGC = FALSE;
            xstrncat(optiones, "-no-gc ", 1024);
        }
        else if(strcmp(argv[i], "-c") == 0) {
            no_linker = TRUE;
            xstrncat(optiones, "-c ", 1024);
            xstrncat(clang_optiones, "-c ", 1024);
        }
        else if(strcmp(argv[i], "-t") == 0) {
            fprintf(stderr, "No support to traspile\n");
            exit(2);
            /*
            gNCTranspile = TRUE;
            gNCGC = FALSE;
            */
        }
        else if(strcmp(argv[i], "libs") == 0)
        {
            printf("-lgc -lpcre -lpthread %slib/libcomelang.a -L/usr/local/lib/libgc/lib \n", PREFIX);
            return 0;
        }
        else if(strcmp(argv[i], "libs-gc") == 0)
        {
            printf("-lgc -lpcre -lpthread %s/lib/libcomelang-gc.a -L/usr/local/opt/libgc/lib \n", PREFIX);
            return 0;
        }
        else if(strcmp(argv[i], "type") == 0)
        {
            xstrncat(optiones, "type ", 1024);
        }
        else if(strcmp(argv[i], "-e") == 0 && i + 1 < argc) 
        {
            eval = TRUE;
            
            xstrncpy(cmdline, argv[i+1], BUFSIZ);
        }
        else if(strcmp(argv[i], "-I") == 0)
        {
            if(i + 1 < argc) {
                char real_path[PATH_MAX];
                realpath(argv[i+1], real_path);
                
                xstrncat(c_include_path, ":", max_c_include_path);
                xstrncat(c_include_path, real_path, max_c_include_path);
                
                xstrncpy(include_paths[num_include_paths], "-I", PATH_MAX);
                xstrncat(include_paths[num_include_paths++], real_path, PATH_MAX);

                xstrncat(optiones, "-I", 1024);
                xstrncat(optiones, real_path, 1024);
                xstrncat(optiones, " ", 1024);

                i++;
            }
        }
        else if(argv[i][0] == '-' && argv[i][1] == 'I')
        {
            char real_path[PATH_MAX];
            realpath(argv[i] + 2, real_path);
            
            xstrncat(c_include_path, ":", max_c_include_path);
            xstrncat(c_include_path, real_path, max_c_include_path);

            xstrncat(optiones, argv[i], 1024);
            xstrncat(optiones, " ", 1024);
            
            xstrncpy(include_paths[num_include_paths], "-I", PATH_MAX);
            xstrncat(include_paths[num_include_paths++], real_path, PATH_MAX);

        }
        else if(strcmp(argv[i], "-L") == 0)
        {
            if(i + 1 < argc) {
                xstrncat(optiones, "-L ", 1024);
                xstrncat(optiones, argv[i+1], 1024);
                xstrncat(optiones, " ", 1024);
                
                xstrncat(clang_optiones, "-L ", 1024);
                xstrncat(clang_optiones, argv[i+1], 1024);
                xstrncat(clang_optiones, " ", 1024);
                i++;
            }
        }
        else if(strcmp(argv[i], "-MD") == 0) {
            xstrncat(clang_optiones, "-MD ", 1024);
        }
        else if(strcmp(argv[i], "-MF") == 0) {
            if(i + 1 < argc) {
                xstrncat(clang_optiones, "-MF ", 1024);
                xstrncat(clang_optiones, argv[i+1], 1024);
                xstrncat(clang_optiones, " ", 1024);
                i++;
            }
        }
        else if(strcmp(argv[i], "-MT") == 0)
        {
            if(i + 1 < argc) {
                xstrncat(clang_optiones, "-MT ", 1024);
                xstrncat(clang_optiones, argv[i+1], 1024);
                xstrncat(clang_optiones, " ", 1024);
                i++;
            }
        }
        else if(argv[i][0] == '-' && argv[i][1] == 'L') {
            xstrncat(optiones, argv[i], 1024);
            xstrncat(optiones, " ", 1024);
            
            xstrncat(clang_optiones, argv[i], 1024);
            xstrncat(clang_optiones, " ", 1024);
        }
        else if(strcmp(argv[i], "-o") == 0)
        {
            if(i + 1 < argc) {
                xstrncat(exec_fname, argv[i+1], PATH_MAX);
                i++;
            }
        }
        else if(argv[i][0] == '-' && argv[i][1] == 'D') 
        {
            char dquort_argv[256];

            char* p = dquort_argv;
            char* p2 = argv[i];
            while(*p2) {
                if(*p2 == '"') {
                    *p++ = '\\';
                    *p++ = '"';
                    p2++;
                }
                else if(*p2 == '\'') {
                    *p++ = '\\';
                    *p++ = '\'';
                    p2++;
                }
                else {
                    *p++ = *p2++;
                }
            }
            *p++ = '\0';

            xstrncat(optiones, argv[i], 1024);

            xstrncat(macro_definition, dquort_argv, max_c_include_path);
            xstrncat(macro_definition, " ", max_c_include_path);
        }
        else if(*argv[i] == '-') {
            xstrncat(clang_optiones, argv[i], 1024);
            xstrncat(clang_optiones, " ", 1024);
        }
        else {
            char* fname = argv[i];
            char* p = fname + strlen(fname);
            
            while(p >= fname) {
                if(*p == '.') {
                    break;
                }
                else {
                    p--;
                }
            }
            
            if(p == fname) {
                fprintf(stderr, "invalid file name. require extension name(%s)", fname);
                return FALSE;
            }
            
            char ext_name[PATH_MAX];
            strncpy(ext_name, p, PATH_MAX);
            
            if(strcmp(ext_name, ".o") == 0 || strcmp(ext_name, ".a") == 0) {
                xstrncpy(obj_files[num_obj_files++], argv[i], PATH_MAX);
                
                if(num_obj_files >= 128) {
                    fprintf(stderr, "overflow obj files number\n");
                    exit(13);
                }
            }
            else {
                xstrncpy(sname[num_snames], argv[i], PATH_MAX);
                
                num_snames++;
                
                if(num_snames >= 128) {
                    fprintf(stderr, "overflow source file number\n");
                    exit(14);
                }
            }
        }
    }
    
    GC_INIT();
    parser_init_onetime();
    
    setenv("C_INCLUDE_PATH", c_include_path, 1);
    
    setenv("ARG", optiones, 1);
    
    if(eval) {
        xstrncpy(gFName, sname[0], PATH_MAX);
    
        setenv("SOURCE_NAME", sname[0], 1);
        setenv("PREFIX", PREFIX, 1);
    
        compiler_init(sname[0]);
    
        gModuleVarTable = init_var_table();
        
        BOOL optimize = TRUE;
        
        char* sname2 = "_eval.c";
        FILE* f = fopen(sname2, "w");
        fprintf(f, "#include <comelang.h>\n int main(int argc, char** argv) { %s; return 0; }\n", cmdline);
        fclose(f);
        
        char run_cmdline[BUFSIZ];
        snprintf(run_cmdline, BUFSIZ, "comelang _eval.c 2>/dev/null");
        
        sBuf command_result;
        sBuf_init(&command_result);
        if(!get_command_result2(&command_result, run_cmdline)) {
            return 2;
        }
        
        printf("%s", command_result.mBuf);
        
        snprintf(run_cmdline, BUFSIZ, "./_eval && rm -f _eval*");
        
        int rc = system(run_cmdline);
        
        free(command_result.mBuf);
        return rc;
    }
    else {
        int n;
        for(n=0; n<num_snames; n++) {
            char buf[128];
            
            xstrncpy(gFName, sname[n], PATH_MAX);
            
            setenv("SOURCE_NAME", sname[n], 1);
            setenv("PREFIX", PREFIX, 1);
        
            compiler_init(sname[n]);
        
            gModuleVarTable = init_var_table();
            
            BOOL optimize = TRUE;
            if(sname[n][0] != '\0') {
                char include_paths2[128*PATH_MAX];
                include_paths2[0] = '\0';
                
                int i;
                for(i=0; i<num_include_paths; i++) {
                    xstrncat(include_paths2, include_paths[i], 128*PATH_MAX);
                    xstrncat(include_paths2, " ", 128*PATH_MAX);
                }
                
                if(!compiler(sname[n], optimize, gModuleVarTable, FALSE, macro_definition, include_paths2, output_cpp_souce, output_assembler_source))
                {
                    fprintf(stderr, "compiler result is FALSE\n");
                    return 1;
                }
            }
        
            if(!header) {
                compiler_final(sname[n]);
            }
            
            if(no_linker && !header) {
                if(gNCTranspile) {
                    if(!compile_c_file(sname[n], exec_fname, clang_optiones, output_assembler_source)) {
                        return 1;
                    }
                }
                else {
                    if(!compile_ll_file(sname[n], exec_fname, clang_optiones, output_assembler_source)) {
                        return 1;
                    }
                }
            }
            else {
                if((no_linker || header) && !output_assembler_source) {
                    char cmd[1024];
                    snprintf(cmd, 1024, "rm -f %s.ll %s.c", sname[n], sname[n]);
                    
                    (void)system(cmd);
                }
            }
        }
    }
    
    char* obj_files2[128];
    int k;
    for(k=0; k<num_obj_files; k++) {
        obj_files2[k] = obj_files[k];
    }
    
    if(!no_linker && !header) {
        if(!linker(sname[0], num_obj_files, obj_files2, clang_optiones, exec_fname, output_assembler_source)) {
            fprintf(stderr, "comelang can't compile(2)\n");
            return 1;
        }
    }
    
    return 0;
}
