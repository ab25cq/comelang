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
    info->sline_real = node->sline_real();
    
    write_source_file_position_to_source();
    
    bool result = node->compile(info);
    
    info->sname = string(sname);
    info->sline = sline;
    
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
        
            printf("%s %d(real %d) %d: %s\n", info.sname, info.sline, info.sline_real, col, msg2);
        }
        else {
            int col = info.p - info.head;
        
            printf("%s %d(real %d) %d: %s\n", info.sname, info.sline, info.sline_real, col, msg2);
        }
        
        info.err_num++;
        stackframe();
        
        if(info.come_fun) {
            int n = info->sline-5;
            info.original_source.to_string().split_char('\n').sublist(n, n+10).map { xsprintf("%d %s", ++n, it) }.join("\n").puts();
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
    
    bool exist_common_h = false;
    {
        fopen("common.h", "r").if {
            exist_common_h = true;
            fclose(Value);
        }
        if(info.output_file_name === "common.h") {
            exist_common_h = false;
        }
        if(!gCommonHeader) {
            exist_common_h = false;
        }
    }
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac ?
    int is_android = system("uname -a | grep Android 1> /dev/null 2>/dev/null"); // Android?
    int is_debian = system("uname -a | grep Debian 1> /dev/null 2>/dev/null"); // Debian?
    
    /// Android ///
    if(is_android == 0) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out", (info.remove_comment ? "": "-C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        string command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("cpp failed\n");
            exit(2);
        }
    }
    /// Mac ///
    else if(is_mac == 0) {
        string cmd2 = xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":"-C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
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
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", (info->remove_comment ? "":"-C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

        if(is_debian == 0) {
            cmd3 = xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "": "-C", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        }

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info->remove_comment ? "": "-C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

            if(is_debian == 0) {
                cmd4 = xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":"-C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
            }
            
            var command = xsprintf("%s -o %s -c %s %s >> %s.out 2>&1", CC, output_file_name, input_file_name, info.clang_option, input_file_name);
    
            if(info.verbose) puts(cmd4);
            int rc = system(cmd4);
            
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
    
    string output_file_name;
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac?
    if(is_mac == 0) {
        command.append_str(" -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    
    string cmd = xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"); // /usr/local/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_str(" -L. -L/usr/local/lib ");
    }
    
    string cmd = xsprintf("ls %s/lib 1> /dev/null 2>/dev/null", getenv("HOME")); // $HOME/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L%s/lib ", getenv("HOME"));
    }
    
    string cmd = xsprintf("ls %s/lib 1> /dev/null 2>/dev/null", PREFIX); // PREFIX/lib?
    int rc = system(cmd);
    if(rc == 0) {
        command.append_format(" -L%s/lib ", PREFIX);
    }
    
    command.append_format(" %s ", info.clang_option);
    
    if(gComeStr) {
        if(gComeGC) {
            if(is_mac == 0) {
                command.append_format(" %s/lib/libcomelang-str-gc.c.o -lpcre ", PREFIX);
            }
            else {
                command.append_str(" -lcomelang-str-gc -lpcre ");
            }
        }
        else {
            if(is_mac == 0) {
                command.append_format(" %s/lib/libcomelang-str.c.o -lpcre ", PREFIX);
            }
            else {
                command.append_str(" -lcomelang-str -lpcre ");
            }
        }
    }
    if(gComeGC) {
        if(is_mac == 0) {
            command.append_format(" %s/lib/libcomelang-gc.c.o -lgc ", PREFIX);
        }
        else {
            command.append_str(" -lcomelang-gc -lgc ");
        }
    }
    if(gComePthread) {
        if(is_mac == 0) {
            command.append_format(" %s/lib/libcomelang-pthread.c.o -lpthread ", PREFIX);
        }
        else {
            command.append_str(" -lcomelang-pthread -lpthread ");
        }
    }
    if(gComeNet) {
        int is_apline = system("which apk 1> /dev/null 2>/dev/null");
        int is_debian = system("uname -a | grep Debian 1> /dev/null 2>/dev/null");
        int is_android = system("uname -a | grep Android 1>/dev/null 2>/dev/null");
        
        if(is_android == 0) { // is Android
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
            else {
                command.append_str(" -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
            }
        }
        else if(is_apline == 0 || is_debian == 0) { // Alpine | Debian
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
            else {
                command.append_str(" -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
        }
        else if(is_mac == 0) {
            if(gComeGC) {
                command.append_format(" %s/lib/libcomelang-net-gc.c.o -lssl `mysql_config --cflags --libs`", PREFIX);
            }
            else {
                command.append_format(" %s/lib/libcomelang-net.c.o -lssl `mysql_config --cflags --libs`", PREFIX);
            }
        }
        else { // Ohter
            if(gComeGC) {
                command.append_str(" -lcomelang-net-gc -lssl `mysql_config --cflags --libs`");
            }
            else {
                command.append_str(" -lcomelang-net -lssl `mysql_config --cflags --libs`");
            }
        }
    }
    
    if(info.verbose) puts(command.to_string());
    system(command.to_string()).if {
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
    
    system(s"mkdir \{project_name}").less {
        die("mkdir error");
    }
    
    """
\#########################################
\# istalled directories
\#########################################
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
    fopen("common.h", "r").if {
        fclose(Value);
    }
    else {
        system("make header").less {
            die("system");
        }
    }
    
    system("make run").less {
        die("system");
    }
    
    return true;
}

bool make_header_project(int argc, char** argv)
{
    system("make header").less {
        die("system");
    }
    
    return true;
}

bool compile_project(int argc, char** argv)
{
    fopen("common.h", "r").if {
        fclose(Value);
    }
    else {
        system("make header").less {
            die("system");
        }
    }
    system("make compile").less {
        die("system");
    }
    
    return true;
}

bool debug_run_project(int argc, char** argv)
{
    fopen("common.h", "r").if {
        fclose(Value);
    }
    else {
        system("make header").less {
            die("system");
        }
    }
    system("make debug").less {
        die("system");
    }
    
    return true;
}

bool clean_project(int argc, char** argv)
{
    system("make clean").less {
        die("system");
    }
    
    return true;
}

bool install_project(int argc, char** argv, char* prefix="/usr/local")
{
    system(s"make install DESTDIR=\{prefix}").less {
        die("system");
    }
    
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
    info.classes.insert(string("_Float16"), new sClass("_Float16", float_:true));
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null"); // Mac?
    if(is_mac == 0) { // Mac
        info.classes.insert(string("__builtin_va_list"), new sClass("__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType("__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
    }
    else { // Other
        sClass*% klass = new sClass("__builtin_va_list", struct_:true);
        
        klass.mFields.push_back((string("v1"), new sType("char*")));
        klass.mFields.push_back((string("v2"), new sType("char*")));
        klass.mFields.push_back((string("v3"), new sType("char*")));
        klass.mFields.push_back((string("v4"), new sType("int")));
        klass.mFields.push_back((string("v5"), new sType("int")));
        
        info.classes.insert(string("__builtin_va_list"), klass);
    }
}

void create_pico_version_header()
{
    if(getenv("PICO_SDK_PATH")) {
        (getenv("PICO_SDK_PATH") + "/pico_sdk_version.cmake").read().if {
            int version_major = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_MAJOR");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_MAJOR");
                
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_major = version_major*10 + (*p - '0');
                    p++;
                }
            }
            int version_miner = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_MINOR");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_MINOR");
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_miner = version_miner*10 + *p - '0';
                    p++;
                }
            }
            int version_revision = 0;
            char* p = strstr(Value, "set(PICO_SDK_VERSION_REVISION");
            if(p) {
                p += strlen("set(PICO_SDK_VERSION_REVISION");
                while(*p == ' ' || *p == '\t') {
                    p++;
                }
                while(xisdigit(*p)) {
                    version_revision = version_revision*10 + *p - '0';
                    p++;
                }
            }
            
            string version_string = s"\{version_major}.\{version_miner}.\{version_revision}";
            
            system("mkdir -p pico").elif {
                """
\#ifndef _PICO_VERSION_H
\#define _PICO_VERSION_H

\#define PICO_SDK_VERSION_MAJOR    \{version_major}
\#define PICO_SDK_VERSION_MINOR    \{version_miner}
\#define PICO_SDK_VERSION_REVISION \{version_revision}
\#define PICO_SDK_VERSION_STRING   "\{version_string}"

\#endif
""".write("pico/version.h");
            }
        }
    }
    (void)system("touch pico_config_extra_headers.h");
    (void)system("touch pico_config_platform_headers.h");
}

module MEvalOptions<T, T2>
{
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
    string output_file_name = T2;
    bool verbose = false;
    bool come_debug = false;
    bool come_malloc = false;
    bool remove_comment = false;
    for(int i=T; i<argc; i++) {
        if(argv[i] === "-o" && i+1 < argc) {
            output_file_name = string(argv[i+1]);
            i++;
        }
        else if(argv[i] === "-e" && i+1 < argc) {
            linker_option.append_str(s"-e \{argv[i+1]");
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
            cpp_option.append_format(s" -nostdinc -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I %s/include/newlib-nano \$(find \{env} -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I $(find $PICO_TOOLCHAIN_PATH/.. -name stdarg.h | sed 's/stdarg.h//' | grep -v c++ | awk 'NR==1') -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__", PREFIX);
            create_pico_version_header();
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
        else if(argv[i] === "-C") {
            remove_comment = true;
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
#ifdef __MAC__ // for lldb
    output_source_file_flag = true;
    gComeOriginalSourcePosition = false;
#endif
        
    gComeDebug = come_debug;
    gComeMalloc = come_malloc;
}

int come_main(int argc, char** argv) version 2
{
    if(argv[1] === "header" && argc >= 3) {
        gProgramName = argv[0];
        
        int start_num = 2;
        string output_file_name_str = s"common.h";
        include MEvalOptions<start_num, output_file_name_str>;
        
        system(xsprintf("%s %s", RM, output_file_name)).less {
            die("rm");
        }
        
        fopen(output_file_name, "w").if {
            fclose(Value);
        }
        else {
            die("fopen");
        }
        
        string tmp_file = string("tmp-common-header.c");
        
        system(s"cat \{files.join(" ")} > \{tmp_file}").less {
            die("cat");
        }
        
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
        info.struct_definition = new map<string, buffer*%>();
        info.uniq_definition = new map<string, string>();
        info.previous_struct_definition = new map<string, buffer*%>();
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
        info.remove_comment = remove_comment;
        
        static int n = 0;
        info.num_source_files = n++;
        info.max_source_files = files.length();
        
        info.output_file_name = string(output_file_name);
        
        init_classes(&info);
        
        clear_tmp_file(&info);
        
        cpp(&info).elif {
            printf("%s %d: transpile failed\n", info.sname, info.sline);
            exit(2);
        }
        
        info.original_source = xsprintf("%s", tmp_file).read().to_buffer();
        info.source = xsprintf("%s.i", tmp_file).read().to_buffer();
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        output_cpp_file.elif {
            transpile(&info)
            
            output_header_file(&info).elif {
                printf("%s %d: output source file faield\n", info->sname, info->sline);
                exit(2);
            }
        }
        
        system(xsprintf("%s %s*", RM, tmp_file));
    }
    else if(argv[1] === "new" && argc == 3) {
        new_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "run" && argc == 2) {
        run_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "header" && argc == 2) {
        make_header_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "compile" && argc == 2) {
        compile_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "debug" && argc == 2) {
        debug_run_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "clean" && argc == 2) {
        clean_project(argc, argv).elif {
            return false;
        }
    }
    else if(argv[1] === "install" && argc >= 2) {
        if(argc == 2) {
            install_project(argc, argv).elif {
                return false;
            }
        }
        else if(argc >= 3) {
            install_project(argc, argv, argv[2]).elif {
                return false;
            }
        }
    }
    else {
        gProgramName = argv[0];
        
        int start_num = 1;
        string output_file_name_str = null;
        include MEvalOptions<start_num, output_file_name_str>;
        
        foreach(it, files) {
            sInfo info;
            
            memset(&info, 0, sizeof(sInfo));
            
            fopen(it, "r").if {
                fclose(Value);
            }
            else {
                continue;
            }
            
            info.sname = string(it);
            info.sline = 1;
            info.err_num = 0;
            info.clang_option = clang_option.to_string();
            info.cpp_option = cpp_option.to_string();
            info.linker_option = linker_option.to_string();
            info.no_output_err = false;
            info.funcs = new map<string, sFun*%>();
            info.struct_definition = new map<string, buffer*%>();
            info.uniq_definition = new map<string, string>();
            info.previous_struct_definition = new map<string, buffer*%>();
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
            info.remove_comment = remove_comment;
            
            init_classes(&info);
            
            clear_tmp_file(&info);
            
            cpp(&info).elif {
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
            
            output_cpp_file.elif {
                transpile(&info);
                
                output_source_file(&info).elif {
                    printf("%s %d: output source file faield\n", info->sname, info->sline);
                    exit(2);
                }
                
                if(info.err_num > 0) {
                    printf("transpile error. err num %d\n", info->err_num);
                    
                    exit(2);
                }
                else {
                    output_object_file_flag.if {
                        compile(&info, output_object_file, object_files).elif {
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
                linker(&info, object_files).elif {
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
