#include "common.h"

bool gComeGC = false;
bool gComeLink = true;
bool gComeC = true;
bool gComeStr = false;
bool gComeNet = false;
bool gComePthread = false;
char* gProgramName = NULL;
bool gCommonHeader = false;
bool gComeMalloc = false;
bool gComeDebug = false;
bool gComeOriginalSourcePosition = true;
int gComeDebugStackFrameID = 0;

char* CC="clang"

#ifdef __LINUX__
static char* RM = "rm -rf";
#elif __MAC__
static char* RM = "rm -rf";
#else
static char* RM = "rm -rf";
#endif

static void write_source_file_position_to_source(sInfo* info=info)
{
    if(gComeOriginalSourcePosition) {
        if(info.writing_source_file_position) {
            add_come_code(info, s"# \{info->sline} \"\{info->sname}\"\n");
            info.writing_source_file_position = false;
        }
    }
}

bool node_compile(sNode* node, sInfo* info=info)
{
    string sname = string(info->sname);
    int sline = info->sline;
    
    info->sname = string(node->sname());
    info->sline = node->sline();
    
    write_source_file_position_to_source();
    
    bool result = node->compile(info);
    
    info->sname = string(sname);
    info->sline = sline;
    
    return result;
}

bool node_condional_compile(sNode* node, sInfo* info=info)
{
    string sname = string(info->sname);
    int sline = info->sline;
    bool comma_instead_of_semicolon = info.comma_instead_of_semicolon;
    info.comma_instead_of_semicolon = true;
    
    info->sname = string(node->sname());
    info->sline = node->sline();
    
    write_source_file_position_to_source();
    
    bool result = node->compile(info);
    
    info->sname = string(sname);
    info->sline = sline;
    info.comma_instead_of_semicolon = comma_instead_of_semicolon;
    
    return result;
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char* msg2;
    
        va_list args;
        va_start(args, msg);
        vasprintf(&msg2,msg,args);
        va_end(args);
        
        char* p = info.p;
        
        char* last_lf = null;
        while(p >= info.head) {
            if(*p == '\n') {
                last_lf = p;
                break;
            }
            p--;
        }
        
        if(last_lf) {
            int col = info.p - last_lf;
        
            printf("%s %d(top %d) %d: %s\n", info.sname, info.sline, info.sline_top, col, msg2);
        }
        else {
            int col = info.p - info.head;
        
            printf("%s %d(top %d) %d: %s\n", info.sname, info.sline, info.sline_top, col, msg2);
        }
        
        if(info.sline_stack && info.sline_stack.length() > 0) {
            printf("sline_stack ");
            foreach(it, info.sline_stack) {
                printf("%d ", it);
            }
            puts("");
        }
        
        info.err_num++;
        stackframe();
        
        if(info.come_fun) {
            int n = info->sline-5;
            info.original_source.to_string().split_char('\n').sublist(n, n+10).map2 { return xsprintf("%d %s", ++n, it); }.join("\n").puts();
        }

        free(msg2);
    }
}

int transpile(sInfo* info) version 2
{
    return 0;
}

bool output_source_file(sInfo* info) version 2
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    /// dummy output ///
    string("int main(int argc, char** argv) { return 0; }\n")
        .write(output_file_name);
    
    return true;
}

static void clear_tmp_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        system(xsprintf("%s %s.*", RM, input_file_name));
    }
}

static void clear_tmp_file_without_object_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        system(xsprintf("%s %s.i* %s.c*", RM, input_file_name, input_file_name));
    }
}

static void clear_tmp_file_without_object_file_and_ccfile(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        system(xsprintf("%s %s.i* %s.c.out", RM, input_file_name, input_file_name));
    }
}

static bool cpp(sInfo* info)
{
    string input_file_name = info.sname;
    
    string output_file_name;
    if(!info.output_header_file && info.output_file_name) {
        output_file_name = info.output_file_name + ".i";
    }
    else {
        output_file_name = info.sname + ".i";
    }
    
    string cmd = xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac?
    
    bool exist_common_h = false;
    {
        FILE* f = fopen("common.h", "r");
        if(f) {
            exist_common_h = true;
        }
        if(info.output_file_name === "common.h") {
            exist_common_h = false;
        }
        if(f) {
            fclose(f);
        }
    }
    
    if(!gCommonHeader) {
        exist_common_h = false;
    }
    int rc2 = system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    
    int rc = system(cmd);
    /// Android ///
    if(rc2 == 0) {
        string cmd3 = xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("cpp failed\n");
            exit(2);
        }
    }
    /// Mac ///
    else if(rc == 0) {
        string cmd2 = xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// Other ///
    else {
        string cmd3 = xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        string cmd_debian = xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null")
        int rc_debian = system(cmd_debian);

        if(rc_debian == 0) {
            cmd3 = xsprintf("cpp -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        }

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

            if(rc_debian == 0) {
                cmd4 = xsprintf("cpp -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
            }
            var command = xsprintf("%s -o %s -c %s %s >> %s.out 2>&1", CC, output_file_name, input_file_name, info.clang_option, input_file_name);
    
            if(info.verbose) puts(cmd4);
            rc = system(cmd4);
            
            var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
    
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    
    return true;
}

static bool compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    string input_file_name = info.sname + ".c";
    
    string output_file_name = null;
    if(info.output_file_name && output_object_file) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = info.sname + ".o";
    }
    
    var command = xsprintf("%s -o %s -c %s %s >> %s.out 2>&1", CC, output_file_name, input_file_name, info.clang_option, input_file_name);
    
    if(info.verbose) puts(command);
    int rc = system(command);
    
    var command2 = xsprintf("grep error\\: %s.out", input_file_name);
    
    if(info.verbose) puts(command2);
    (void)system(command2);
    
    if(rc != 0) {
        printf("%s %d: %s is faild\n", CC, info->sname, info->sline);
        return false;
    }
    
    if(!output_object_file) {
        object_files.insert(0, string(output_file_name));
    }
    
    return true;
}

static bool linker(sInfo* info, list<string>* object_files)
{
    string output_file_name = null;
    if(info.output_file_name) {
        output_file_name = string(info.output_file_name);
    }
    else {
        output_file_name = xnoextname(info.sname);
    }
    
    var command = new buffer();
    
    command.append_format("%s -o %s ", CC, output_file_name);
    
    command.append_str(" " + info.linker_option +" ");
    
    foreach(it, object_files) {
        command.append_format("%s ", it);
    }
    
    string cmd = xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac?
    
    int rc = system(cmd);
    if(rc == 0) {
        command.append_str(" -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    
    cmd = xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"); // /usr/local/lib?
    
    rc = system(cmd);
    if(rc == 0) {
        command.append_str(" -L/usr/local/lib ");
    }
    
    cmd = xsprintf("ls %s/lib 1> /dev/null 2>/dev/null", getenv("HOME")); // usr/lib?
    
    rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L%s/lib ", getenv("HOME"));
    }
    
    cmd = xsprintf("ls %s/lib 1> /dev/null 2>/dev/null", PREFIX); // PREFIX/lib?
    
    rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L%s/lib ", PREFIX);
    }
    
    command.append_format(" %s ", info.clang_option);
    
    if(gComeStr) {
        if(gComeGC) {
            command.append_str(" -lcomelang-str-gc -lpcre ");
        }
        else {
            command.append_str(" -lcomelang-str -lpcre ");
        }
    }
    if(gComeGC) {
        command.append_str(" -lcomelang-gc -lgc ");
    }
    if(gComePthread) {
        command.append_str(" -lcomelang-pthread -lpthread ");
    }
    if(gComeNet) {
        cmd = xsprintf("which apk 1> /dev/null 2>/dev/null");
        string cmd2 = xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        string cmd3 = xsprintf("uname -a | grep Android 1>/dev/null 2>/dev/null");
        
        rc = system(cmd);
        int rc2 = system(cmd2);
        int rc3 = system(cmd3);
        if(rc3 == 0) {
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
            else {
                command.append_str(" -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
        }
        else if(rc == 0 || rc2 == 0) {
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
            else {
                command.append_str(" -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
        }
        else {
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl `mysql_config --cflags --libs`");
            }
            else {
                command.append_str(" -lcomelang-net -lssl `mysql_config --cflags --libs`");
            }
        }
    }
    
    command.append_str(" -lcomelang ");
    
    if(info.verbose) puts(command.to_string());
    rc = system(command.to_string());
    
    if(rc != 0) {
        printf("%s %d: %s is faild\n", CC, info->sname, info->sline);
        return false;
    }
    
    return true;
}

bool new_project(int argc, char** argv)
{
    string project_name = string(argv[2]);
    string project_name_debug = string(argv[2]) + string("-debug");
    string cc = string("comelang");
    string install = string("install");
    string libs = string("-lpcre");
    string os = string("linux");
    string prefix = string("/usr/local/");
    string cflags = string(" -common-header -O2 ");
    string cflags_debug = string(" -common-header -gdwarf-4 -cg ");
    
    int r = system(s"mkdir \{project_name}");
    if(r < 0 ) die("mkdir error");
    
    """
\#########################################
\# istalled directories
\#########################################
prefix=\{prefix}
exec_prefix=${prefix}
bindir=${exec_prefix}/bin
datadir=${datarootdir}
mandir=${datarootdir}/man
sharedstatedir=${prefix}/\{project_name}
sysconfdir=${prefix}/etc/\{project_name}
includedir=${prefix}/include/\{project_name}
datarootdir=${prefix}/share/\{project_name}
docdir=${datarootdir}/doc
libdir=${exec_prefix}/lib

\#########################################
\# environmnet variables
\#########################################
CC=\{cc}
INSTALL=\{install}
CFLAGS=\{cflags}
CFLAGS_DEBUG=\{cflags_debug}
LIBS=\{libs}
OS=\{os}
DESTDIR=\{prefix}
SRCS=$(wildcard *.c)
SINGLE_SRCS=$(filter-out %.c.c, $(SRCS))
OBJS=$(SINGLE_SRCS:.c=.o)
DEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)
TARGET=\{project_name}
TARGET_DEBUG=\{project_name_debug}

\#########################################
\# main
\#########################################
all: $(TARGET)

$(TARGET): $(OBJS)
\t$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DEBUG): $(DEBUG_OBJS)
\t$(CC) $(CFLAGS_DEBUG) $^ -o $@

%.o: %.c
\t$(CC) $(CFLAGS) -c $< -o $@

%.debug.o: %.c
\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@

\#########################################
\# header
\#########################################

header: common.h

common.h: $(SINGLE_SRCS)
\tcomelang header -common-header $(SINGLE_SRCS)

\#########################################
\# install
\#########################################
install:
\tmkdir -p "$(DESTDIR)/bin"
\t$(INSTALL) -m 755 ./\{project_name} "$(DESTDIR)/bin"
\tmkdir -p "$(DESTDIR)/include"
\tmkdir -p "$(DESTDIR)/lib"
\tmkdir -p "$(DESTDIR)/share/doc/\{project_name}"
\t$(INSTALL) -m 644 README.md "$(DESTDIR)/share/doc/\{project_name}/README.md"

\#########################################
\# clean
\#########################################
clean:
\trm -fR *.o *.c.i *.c.out *.c.c \{project_name} *.log *.out common.h \{project_name_debug}

\#########################################
\# uninstall
\#########################################
uninstall:
\trm -f "$(DESTDIR)"/bin/\{project_name}
\trm -f "$(DESTDIR)/share/doc/\{project_name}/README.md"

run: \{project_name}
\trm -f *.log
\t./\{project_name}

compile: \{project_name}

debug: \{project_name_debug}
\trm -f *.log
\t./\{project_name_debug}
    """.write(s"\{project_name}/Makefile", append:false);
    
    return true;
}

bool run_project(int argc, char** argv)
{
    FILE* f = fopen("common.h", "r");
    
    if(f == NULL) {
        int r = system("make header");
        if(r < 0) die("system");
    }
    else {
        fclose(f);
    }
    
    int r = system("make run") 
    if(r < 0) die("system");
    
    return true;
}

bool make_header_project(int argc, char** argv)
{
    int r = system("make header") 
    if(r < 0) die("system");
    
    return true;
}

bool compile_project(int argc, char** argv)
{
    FILE* f = fopen("common.h", "r");
    
    if(f == NULL) {
        int r = system("make header") 
        if(r < 0) die("system");
    }
    else {
        fclose(f);
    }
    int r = system("make compile");
    if(r < 0) die("system");
    
    return true;
}

bool debug_run_project(int argc, char** argv)
{
    FILE* f = fopen("common.h", "r");
    
    if(f == NULL) {
        int r = system("make header");
        if(r < 0) die("system");
    }
    else {
        fclose(f);
    }
    int r = system("make debug");
    if(r < 0 ) die("system");
    
    return true;
}

bool clean_project(int argc, char** argv)
{
    int r = system("make clean") 
    if(r < 0) die("system");
    
    return true;
}

bool install_project(int argc, char** argv, char* prefix="/usr/local")
{
    int r = system(s"make install DESTDIR=\{prefix}");
    if(r < 0) die("system");
    
    return true;
}

static void init_classes(sInfo* info)
{
    info.classes.insert(string("int"), new sClass("int", number:true));
    info.classes.insert(string("short"), new sClass("short", number:true));
    info.classes.insert(string("long"), new sClass("long", number:true));
    info.classes.insert(string("char"), new sClass("char", number:true));
    info.classes.insert(string("bool"), new sClass("bool", number:true));
    info.classes.insert(string("_Bool"), new sClass("_Bool", number:true));
    info.classes.insert(string("void"), new sClass("void"));
    info.classes.insert(string("float"), new sClass("float", float_:true));
    info.classes.insert(string("double"), new sClass("double", float_:true));
    info.classes.insert(string("lambda"), new sClass("lambda"));
    info.classes.insert(string("__uint128_t"), new sClass("__uint128_t", number:true));
    info.classes.insert(string("__int128"), new sClass("__int128", number:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    for(int i=0; i<METHOD_GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("mgenerics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, method_generics:true, method_generics_num:i));
    }
    
    string cmd = xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac?

    int rc = system(cmd);
    if(rc == 0) {
        info.classes.insert(string("__builtin_va_list"), new sClass("__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType("__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
        
//        add_come_code_at_source_head(info, "typedef %s;\n", make_define_var(type, type_name, in_header:true));
    }
    else {
        sClass*% klass = new sClass("__builtin_va_list", struct_:true);
        
        klass.mFields.push_back((string("v1"), new sType("char*")));
        klass.mFields.push_back((string("v2"), new sType("char*")));
        klass.mFields.push_back((string("v3"), new sType("char*")));
        klass.mFields.push_back((string("v4"), new sType("int")));
        klass.mFields.push_back((string("v5"), new sType("int")));
        
        info.classes.insert(string("__builtin_va_list"), klass);
    }
}

int come_main(int argc, char** argv) version 2
{
    if(argv[1] === "header" && argc >= 3) {
        gProgramName = argv[0];
        
        var clang_option = new buffer();
        var cpp_option = new buffer();
        cpp_option.append_str("-U__GNUC__");
        var linker_option = new buffer();
        var files = new list<string>();
        var object_files = new list<string>();
        bool output_object_file = false;
        bool output_cpp_file = false;
        bool output_source_file_flag = false;
        bool output_object_file_flag = true;
        string output_file_name = string("common.h");
        bool verbose = false;
        bool prohibit_common_header = false;
        bool come_debug = false;
        bool come_malloc = false;
        for(int i=2; i<argc; i++) {
            if(argv[i] === "-o" && i+1 < argc) {
                output_file_name = string(argv[i+1]);
                i++;
            }
            else if(argv[i] === "-str") {
                gComeStr = true;
            }
            else if(argv[i] === "-pthread") {
                gComePthread = true;
            }
            else if(argv[i] === "-pico") {
                output_source_file_flag = true;
                output_object_file_flag = false;
                gComeOriginalSourcePosition = false;
                char* env = getenv("PICO_SDK_PATH");
                cpp_option = new buffer();
                cpp_option.append_str(s" \$(find \{env} -type d -name include | sed 's/^/ -I/g') -I build/generated/pico_base/ -D__GNUC__ -D__PICO__");
            }
            else if(argv[i] === "-net") {
                gComeNet = true;
            }
            else if(argv[i] === "-gc") {
                gComeGC = true;
            }
            else if(argv[i] === "-g") {
                clang_option.append_str("-g ");
            }
            else if(argv[i] === "-cg") {
                clang_option.append_str("-g ");
                come_debug = true;
            }
            else if(argv[i] === "-common-header") {
                gCommonHeader = true;
            }
            else if(argv[i] === "-original-position") {
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i][0..2] === "-O") {
                clang_option.append_str(s" \{argv[i]} ");
                come_debug = false;
            }
            else if(argv[i][0..2] === "-D") {
                cpp_option.append_str(s" \{argv[i]} ");
                clang_option.append_str(s" \{argv[i]} ");
            }
            else if(argv[i] === "-v") {
                clang_option.append_str("-v ");
                verbose = true;
            }
            else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-I", strlen("-I")) == 0) {
                cpp_option.append_str(" " + argv[i] + " ");
            }
            else if(argv[i] === "-gdwarf-4") {
                clang_option.append_str("-gdwarf-4 ");
            }
            else if(argv[i] === "-s" || argv[i] === "-S") {
                output_source_file_flag = true;
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i] === "-c") {
                output_object_file = true;
            }
            else if(argv[i] === "-E") {
                output_cpp_file = true;
            }
            else if(argv[i][0] == '-') {
                clang_option.append_str(argv[i] + " ");
            }
            else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".a", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else {
                files.push_back(string(argv[i]));
            }
        }
        
        gComeDebug = come_debug;
        gComeMalloc = come_malloc;
        
        int r = system(xsprintf("%s %s", RM, output_file_name)) 
        if(r < 0) die("rm");
        
        FILE* f = fopen(output_file_name, "w");
        if(f == null) {
            die("fopen");
        }
        fclose(f);
        
        string tmp_file = string("tmp-common-header.c");
        
        system(s"cat \{files.join(" ")} > \{tmp_file}");
        
        sInfo info;
        
        memset(&info, 0, sizeof(sInfo));
        
        info.base_sname = string(tmp_file);
        info.sname = string(tmp_file);
        info.sline = 1;
        info.err_num = 0;
        info.clang_option = clang_option.to_string();
        info.cpp_option = cpp_option.to_string();
        info.linker_option = linker_option.to_string();
        info.no_output_err = false;
        info.funcs = new map<string, sFun*%>();
        info.generics_funcs = new map<string, sGenericsFun*%>();
        info.classes = new map<string, sClass*%>();
        info.modules = new map<string, sClassModule*%>();
        info.types = new map<string, sType*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<CVALUE*%>();
        info.gv_table = new sVarTable(global:true, parent:null);
        sVarTable*% lv_table = new sVarTable(global:false, parent:null);
        info.lv_table = lv_table;
        info.generics_type_names = new list<string>();
        info.method_generics_type_names = new list<string>();
        info.generics_classes = new map<string, sClass*%>();
        info.verbose = verbose;
        info.output_header_file = true;
        info.outputed_class = new map<string, int>();
        
        static int n = 0;
        info.num_source_files = n++;
        info.max_source_files = files.length();
        
        info.output_file_name = string(output_file_name);
        
        init_classes(&info);
        
        clear_tmp_file(&info);
        
        if(!cpp(&info)) {
            printf("%s %d: transpile failed\n", info.sname, info.sline);
            exit(2);
        }
        
        info.original_source = xsprintf("%s", tmp_file).read().to_buffer();
        info.source = xsprintf("%s.i", tmp_file).read().to_buffer();
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        if(!output_cpp_file) {
            transpile(&info)
            
            if(!output_header_file(&info)) {
                printf("%s %d: output source file faield\n", info->sname, info->sline);
                exit(2);
            }
        }
        
        system(xsprintf("%s %s*", RM, tmp_file));
    }
    else if(argv[1] === "new" && argc == 3) {
        if(!new_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "run" && argc == 2) {
        if(!run_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "header" && argc == 2) {
        if(!make_header_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "compile" && argc == 2) {
        if(!compile_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "debug" && argc == 2) {
        if(!debug_run_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "clean" && argc == 2) {
        if(!clean_project(argc, argv)) {
            return false;
        }
    }
    else if(argv[1] === "install" && argc >= 2) {
        if(argc == 2) {
            if(!install_project(argc, argv)) {
                return false;
            }
        }
        else if(argc >= 3) {
            if(!install_project(argc, argv, argv[2])) {
                return false;
            }
        }
    }
    else {
        gProgramName = argv[0];
        
        var clang_option = new buffer();
        var linker_option = new buffer();
        var cpp_option = new buffer();
        cpp_option.append_str("-U__GNUC__");
        var files = new list<string>();
        var object_files = new list<string>();
        bool output_object_file = false;
        bool output_cpp_file = false;
        bool output_source_file_flag = false;
        bool output_object_file_flag = true;
        string output_file_name = null;
        bool verbose = false;
        bool come_debug = false;
        bool come_malloc = false;
        for(int i=1; i<argc; i++) {
            if(argv[i] === "-o" && i+1 < argc) {
                output_file_name = string(argv[i+1]);
                i++;
            }
            else if(argv[i] === "-str") {
                gComeStr = true;
            }
            else if(argv[i] === "-pthread") {
                gComePthread = true;
            }
            else if(argv[i] === "-pico") {
                output_source_file_flag = true;
                output_object_file_flag = false;
                gComeOriginalSourcePosition = false;
                char* env = getenv("PICO_SDK_PATH");
                cpp_option = new buffer();
                cpp_option.append_str(s" \$(find \{env} -type d -name include | sed 's/^/ -I/g') -I build/generated/pico_base/ -D__GNUC__ -D__PICO__");
            }
            else if(i + 1 < argc && argv[i] === "-target") {
                clang_option.append_str(s"-target \{argv[i+1]}");
                i++;
            }
            else if(i + 1 < argc && argv[i] === "-T") {
                clang_option.append_str(s" -T \{argv[i+1]} ");
                i++;
            }
            else if(argv[i] === "-net") {
                gComeNet = true;
            }
            else if(argv[i] === "-gc") {
                gComeGC = true;
            }
            else if(argv[i] === "-cg") {
                come_debug = true;
                clang_option.append_str("-g ");
            }
            else if(i + 1 < argc && argv[i] === "-target") {
                clang_option.append_str(s"-target \{argv[i+1]}");
                i++;
            }
            else if(i + 1 < argc && argv[i] === "-T") {
                clang_option.append_str(s" -T \{argv[i+1]} ");
                i++;
            }
            else if(argv[i] === "-common-header") {
                gCommonHeader = true;
            }
            else if(argv[i] === "-original-position") {
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i][0..2] === "-O") {
                clang_option.append_str(s" \{argv[i]} ");
                come_debug = false;
            }
            else if(argv[i][0..2] === "-D") {
                cpp_option.append_str(s" \{argv[i]} ");
                clang_option.append_str(s" \{argv[i]} ");
            }
            else if(argv[i] === "-g") {
                clang_option.append_str("-g ");
            }
            else if(argv[i] === "-v") {
                clang_option.append_str("-v ");
                verbose = true;
            }
            else if(strlen(argv[i]) >= 2 && memcmp(argv[i], "-I", strlen("-I")) == 0) {
                cpp_option.append_str(" " + argv[i] + " ");
            }
            else if(argv[i] === "-gdwarf-4") {
                clang_option.append_str("-gdwarf-4 ");
            }
            else if(argv[i] === "-s" || argv[i] === "-S") {
                output_source_file_flag = true;
                gComeOriginalSourcePosition = false;
            }
            else if(argv[i] === "-c") {
                output_object_file = true;
            }
            else if(argv[i] === "-E") {
                output_cpp_file = true;
            }
            else if(argv[i][0] == '-') {
                clang_option.append_str(argv[i] + " ");
            }
            else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else if(strlen(argv[i]) > 2 && memcmp(argv[i] + strlen(argv[i]) -2, ".a", 2) == 0) {
                object_files.push_back(string(argv[i]));
            }
            else {
                files.push_back(string(argv[i]));
            }
        }
        
        gComeDebug = come_debug;
        gComeMalloc = come_malloc;
        
        foreach(it, files) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            FILE* tmp_file = fopen(it, "r");
            if(tmp_file == NULL) {
                continue;
            }
            else {
                fclose(tmp_file);
            }
            
            info.sname = string(it);
            info.sline = 1;
            info.err_num = 0;
            info.clang_option = clang_option.to_string();
            info.cpp_option = cpp_option.to_string();
            info.linker_option = linker_option.to_string();
            info.no_output_err = false;
            info.funcs = new map<string, sFun*%>();
            info.generics_funcs = new map<string, sGenericsFun*%>();
            info.classes = new map<string, sClass*%>();
            info.modules = new map<string, sClassModule*%>();
            info.types = new map<string, sType*%>();
            info.module = new sModule();
            info.right_value_objects = new list<sRightValueObject*%>();
            info.stack = new list<CVALUE*%>();
            info.gv_table = new sVarTable(global:true, parent:null);
            sVarTable*% lv_table = new sVarTable(global:false, parent:null);
            info.lv_table = lv_table;
            info.generics_type_names = new list<string>();
            info.method_generics_type_names = new list<string>();
            info.generics_classes = new map<string, sClass*%>();
            info.verbose = verbose;
            info.outputed_class = new map<string, int>();
            
            init_classes(&info);
            
            clear_tmp_file(&info);
            
            if(!cpp(&info)) {
                printf("%s %d: transpile failed\n", info.sname, info.sline);
                exit(2);
            }
            
            info.original_source = xsprintf("%s", it).read().to_buffer();
            info.source = xsprintf("%s.i", it).read().to_buffer();
            info.p = info.source.buf;
            info.head = info.source.buf;
            
            if(output_file_name) {
                info.output_file_name = string(output_file_name);
            }
            else {
                info.output_file_name = null;
            }
            
            if(!output_cpp_file) {
                transpile(&info);
                
                if(!output_source_file(&info)) {
                    printf("%s %d: output source file faield\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(info.err_num > 0) {
                    printf("transpile error. err num %d\n", info->err_num);
                    
                    exit(2);
                }
                else {
                    if(output_object_file_flag) {
                        if(!compile(&info, output_object_file, object_files)) {
                            printf("%s %d: compile faield\n", info.sname, info.sline);
                            exit(27);
                        }
                    }
                }
    
            }
            
            if(output_cpp_file){
            }
            else if(info.err_num > 0) {
            }
            else if(output_source_file_flag) {
                clear_tmp_file_without_object_file_and_ccfile(&info);
            }
            else {
                clear_tmp_file_without_object_file(&info);
            }
        }
        
        if(!output_object_file && !output_cpp_file && (files.length() > 0 || object_files.length() > 0)) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            info.sname = clone files[0]??;
            info.clang_option = clang_option.to_string();
            info.linker_option = linker_option.to_string();
            info.verbose = verbose;
            
            if(output_file_name) {
                info.output_file_name = string(output_file_name);
            }
            else {
                info.output_file_name = null;
            }
            
            if(output_object_file_flag) {
                linker(&info, object_files).expect {
                    printf("%s %d: linker faield\n", info.sname, info.sline);
                    exit(13);
                }
            }
            
            if(!output_cpp_file && !output_source_file_flag) {
                clear_tmp_file(&info);
            }
        }
    }

    
    return 0;
}
