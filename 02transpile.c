#include "common.h"

bool gComeGC = false;
bool gComeC = true;
bool gComeStr = false;
bool gComeNet = false;
bool gComePthread = false;
bool gCommonHeader = false;
bool gComeMalloc = false;
bool gComeDebug = false;
bool gComeOriginalSourcePosition = true;
int gComeDebugStackFrameID = 0;

char* CC="clang";

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
    int sline_real = info->sline_real;
    
    info->sname = string(node->sname());
    info->sline = node->sline();
    info->sline_real = node->sline_real();
    
    write_source_file_position_to_source();
    
    bool result = node->compile(info);
    
    info->sname = string(sname);
    info->sline = sline;
    info->sline_real = sline_real;
    
    return result;
}

void transpile_conditional_with_free_right_object_value(CVALUE*% conditional_value, sInfo* info=info)
{
    add_last_code_to_source_with_comma(info);
    
    static int num_condtional = 0;
    add_come_code_at_function_head(info, "_Bool _condtional_value_X%d;\n", ++num_condtional);
    int num_condtional_stack = num_condtional;
    
    add_come_code(info, "(_condtional_value_X%d=(%s)),", num_condtional_stack, conditional_value.c_value);
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info, comma:true);
    add_come_code(info, "_condtional_value_X%d", num_condtional_stack);
}

static void clear_tmp_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s %s.*", RM, input_file_name));
    }
}

static void clear_tmp_file_without_object_file(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s %s.i* %s.c*", RM, input_file_name, input_file_name));
    }
}

static void clear_tmp_file_without_object_file_and_ccfile(sInfo* info)
{
    string input_file_name = info.sname;
    
    if(input_file_name != null && input_file_name !== "") {
        (void)system(xsprintf("%s %s.i* %s.c.out", RM, input_file_name, input_file_name));
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    int is_android = system("uname -a | grep Android 1> /dev/null 2>/dev/null") == 0;
    int is_debian = system("uname -a | grep Debian 1> /dev/null 2>/dev/null") == 0;
    int is_linux = 1;
    int is_m5stack = info.m5stack_cpp; // M5Stack?
    int is_pico = info.pico_cpp; // PICO?
    int is_emb = info.emb_cpp; // EMBBEDED
    bool _32bit = false;
    FILE* f = fopen("/proc/cpuinfo", "r");
    int is_raspi;
    if(f) {
        fclose(f);
        is_raspi = system("cat /proc/cpuinfo | grep 'Model' | grep 'Raspberry Pi' > /dev/null 2> /dev/null ") == 0;
        if(is_raspi) {
            _32bit = system(" lscpu | grep armv7l > /dev/null 2> /dev/null ") == 0;
        }
    }
    else {
        is_raspi = 0;
    }
    
    if(is_pico || is_m5stack) {
        _32bit = true;
    }
    
    if(_32bit) {
        info.cpp_option = info.cpp_option + s" -D__32BIT_CPU__ ";
    }
    
    /// Android ///
    if(is_android) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out", (info.remove_comment ? "": " -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        string command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("cpp failed(%s)\n", command2);
            exit(2);
        }
    }
    else if(is_m5stack) {
        string cmd2 = xsprintf("xtensa-esp-elf-cpp -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__M5STACK__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        int rc = system(cmd2);
        
        string command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    else if(is_pico) {
        string cmd2 = xsprintf("arm-none-eabi-gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__PICO__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        string command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// Mac ///
    else if(is_mac) {
        string cmd2 = xsprintf("gcc -E %s -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        
        if(info.verbose) puts(cmd2);
        
        string command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        int rc = system(cmd2);
        
        if(rc != 0) {
            printf("failed to cpp(2) (%s)\n", cmd2);
            exit(5);
        }
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
    }
    /// EMBBEDED ///
    else if(is_emb) {
        string cmd3 = xsprintf("clang -E %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("clang -E %s -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

            if(is_debian) {
                cmd4 = xsprintf("clang -E %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__EMB__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
            }
            
            var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    /// __RASPIBERRY_PI__ ///
    else if(is_raspi) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__RASPBERRY_PI__ %s %s > %s 2> %s.cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
            
            var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            
            if(rc != 0) {
                printf("failed to cpp(2) (%s)\n", cmd4);
                exit(5);
            }
        }
    }
    else if(is_linux) {
        string cmd3 = xsprintf("cpp %s -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", (info->remove_comment ? "":" -C"), info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

        if(is_debian) {
            cmd3 = xsprintf("cpp %s -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "": " -C", info.cpp_option, getenv("HOME"), PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
        }

        if(info.verbose) puts(cmd3);
        int rc = system(cmd3);
        
        var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
        
        if(info.verbose) puts(command2);
        (void)system(command2);
        
        if(rc != 0) {
            string cmd4 = xsprintf("cpp %s -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info->remove_comment ? "": " -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);

            if(is_debian) {
                cmd4 = xsprintf("cpp %s -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ %s %s > %s 2> %s.cpp.out", info.remove_comment ? "":" -C", info.cpp_option, PREFIX, PREFIX, exist_common_h ? string(" -include common.h "):"", input_file_name, output_file_name, output_file_name);
            }
            
            var command2 = xsprintf("grep error\\: %s.cpp.out 2>/dev/null", output_file_name);
            
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    
    if(is_mac) {
        info.clang_option = info.clang_option + " -std=gnu17 "
    }
    
    var command = xsprintf("%s -o %s -c %s %s >> %s.out 2>&1", CC, output_file_name, input_file_name, info.clang_option, input_file_name);
    
    if(info.verbose) puts(command);
    int rc = system(command);
    
    if(rc != 0) {
        command = xsprintf("%s -o %s -c %s %s >> %s.out 2>&1", "gcc", output_file_name, input_file_name, info.clang_option, input_file_name);
        
        if(info.verbose) puts(command);
        int rc = system(command);
        
        if(rc != 0) {
            printf("%s is faild\n", CC);
            
            var command2 = xsprintf("grep error\\: %s.out 2>/dev/null", input_file_name);
            
            if(info.verbose) puts(command2);
            (void)system(command2);
            exit(2);
        }
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
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
/*
#ifdef __MAC__
        setenv("LSAN_OPTIONS","verbosity=1:log_threads=1", 1);
#endif
*/
    if(is_mac) {
        info.linker_option = info.clang_option + s" -std=gnu17 "
    }
    
    command.append_str(" " + info.linker_option +" ");
    
    foreach(it, object_files) {
        command.append_format("%s ", it);
    }
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(is_mac) {
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
        command.append_format(" -lpcre ");
    }
    if(gComeGC) {
        command.append_str(" -lgc ");
    }
    if(gComePthread) {
        command.append_str(" -lpthread ");
    }
    if(gComeNet) {
        int is_apline = system("which apk 1> /dev/null 2>/dev/null") == 0;
        int is_debian = system("uname -a | grep Debian 1> /dev/null 2>/dev/null") == 0;
        int is_android = system("uname -a | grep Android 1>/dev/null 2>/dev/null") == 0;
        
        if(is_android) { // is Android
            command.append_str(" -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else if(is_apline || is_debian) { // Alpine | Debian
            command.append_str(" -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
        }
        else if(is_mac) {
            command.append_format(" -lssl `mysql_config --cflags --libs`");
        }
        else { // Ohter
            command.append_str(" -lssl `mysql_config --cflags --libs`");
        }
    }
    
    if(info.verbose) puts(command.to_string());
    
    system(command.to_string()).if {
        string str = s"gcc" + command.to_string().substring(strlen(CC), -1);
        
        system(str).if { 
            printf("%s is failed\n", CC);
            return false;
        }
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
    string cflags_debug = string(" -common-header -gdwarf-4 -cg -g ");
    
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
\trm -fR *.o *.c.i *.c.out *.c.c \{project_name} *.log *.out common.h \{project_name_debug} tmp-common-header.c tmp-common-header.*

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
    
#ifdef __MAC__
    system("make compile -j$(sysctl -n hw.logicalcpu)").less {
        die("system");
    }
#else
    system("make compile -j$(($(nproc)/2))").less {
        die("system");
    }
#endif
    
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
    
#ifdef __MAC__
    system("make compile -j$(sysctl -n hw.logicalcpu)").less {
        die("system");
    }
#else
    system("make compile -j$(($(nproc)/2))").less {
        die("system");
    }
#endif
    
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
    
#ifdef __MAC__
    system("make debug -j$(sysctl -n hw.logicalcpu)").less {
        die("system");
    }
#else
    system("make debug -j$(($(nproc)/2))").less {
        die("system");
    }
#endif
    
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
    info.classes.insert(string("int"), new sClass(s"int", number:true));
    info.classes.insert(string("short"), new sClass(s"short", number:true));
    info.classes.insert(string("long"), new sClass(s"long", number:true));
    info.classes.insert(string("char"), new sClass(s"char", number:true));
    info.classes.insert(string("bool"), new sClass(s"bool", number:true));
    info.classes.insert(string("_Bool"), new sClass(s"_Bool", number:true));
    info.classes.insert(string("void"), new sClass(s"void"));
    info.classes.insert(string("float"), new sClass(s"float", float_:true));
    info.classes.insert(string("double"), new sClass(s"double", float_:true));
    info.classes.insert(string("_Float16"), new sClass(s"_Float16", float_:true));
    info.classes.insert(string("lambda"), new sClass(s"lambda"));
    info.classes.insert(string("__uint128_t"), new sClass(s"__uint128_t", number:true));
    info.classes.insert(string("__int128"), new sClass(s"__int128", number:true));
    for(int i=0; i<GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__generics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, generics:true, generics_num:i));
    }
    for(int i=0; i<METHOD_GENERICS_TYPE_MAX; i++) {
        string generics_type = xsprintf("__mgenerics_type%d", i);
        info.classes.insert(generics_type, new sClass(generics_type, method_generics:true, method_generics_num:i));
    }
    
    int is_mac = system("uname -a | grep Darwin 1> /dev/null 2>/dev/null") == 0;
    if(is_mac) {
        info.classes.insert(string("__builtin_va_list"), new sClass(s"__builtin_va_list", number:true));
        
        string type_name = string("__builtin_va_list");
        
        sType*% type = new sType(s"__builtin_va_list");
        type->mOriginalTypeName = string("__builtin_va_list");
        
        info.types.insert(string(type_name), type);
    }
    else { // Other
        sClass*% klass = new sClass(s"__builtin_va_list", struct_:true);
        
        klass.mFields.push_back((string("v1"), new sType(s"char*")));
        klass.mFields.push_back((string("v2"), new sType(s"char*")));
        klass.mFields.push_back((string("v3"), new sType(s"char*")));
        klass.mFields.push_back((string("v4"), new sType(s"int")));
        klass.mFields.push_back((string("v5"), new sType(s"int")));
        
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
    bool m5stack_cpp = false;
    bool pico_cpp = false;
    bool emb_cpp = false;
    bool gcc_compiler = false;
    for(int i=T; i<argc; i++) {
        string ext_name = xextname(argv[i]);
        
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
        else if(argv[i] === "-gc") {
            gComeGC = true;
            cpp_option.append_format(s" -DENABLE_GC ");
        }
        else if(argv[i] === "-gcc") {
            gcc_compiler = true;
            CC="gcc"
        }
        else if(argv[i] === "-riscv") {
            gcc_compiler = true;
            CC="riscv64-unknown-elf-gcc"
            cpp_option.append_format(s" -D__RISCV__ ");
            clang_option.append_str(s" -nostdlib -ffreestanding -mcmodel=medany -D__RISCV__");
        }
        else if(argv[i] === "-pico") {
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            char* env = getenv("PICO_SDK_PATH");
            cpp_option = new buffer();
            cpp_option.append_format(s" -I $PICO_SDK_PATH/src/common/pico_stdlib_headers/include/ -I$PICO_SDK_PATH/src/common/pico_base_headers/include/ -I \{env}/src/rp2_common/hardware_sync/include \$(find \{env} -type d -name include | sed 's/^/ -I/g') -I$PICO_SDK_PATH/src/boards/include -I$PICO_SDK_PATH/src/rp2040/pico_platform/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_regs/include/ -I$PICO_SDK_PATH/src/rp2040/hardware_structs/include -I$PICO_SDK_PATH/src/rp2350/hardware_structs/include/ -I build/generated/pico_base/ -D__PICO__");
            create_pico_version_header();
            pico_cpp = true;
        }
        else if(argv[i] === "-emb") {
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            emb_cpp = true;
        }
        else if(argv[i] === "-m5stack") {
            m5stack_cpp = true;
            output_source_file_flag = true;
            output_object_file_flag = false;
            gComeOriginalSourcePosition = false;
            char* env = getenv("IDF_PATH");
            cpp_option = new buffer();
            cpp_option.append_format(s" -I\{getenv("HOME")}/.espressif/tools/xtensa-esp-elf/esp-14.2.0_20241119/xtensa-esp-elf/xtensa-esp-elf/include -I\{env}/components/freertos/include -I\{env}/components/esp32/include -I\{env}/components/driver/include -I\{env}/components/lwip/include -I\{env}/components/freertos/FreeRTOS-Kernel/include -I\{env}/components/freertos/config/include/freertos -I\{env}/components/freertos/config/xtensa/include -I\{env}/components/xtensa/include -I\{env}/components/xtensa/esp32/include -I\{env}/components/freertos/FreeRTOS-Kernel/portable/xtensa/include/freertos -I\{env}/components/esp_hw_support/include -I\{env}/components/soc/esp32/include/ -I\{env}/components/esp_common/include/components $(find \{env}/components -type d -name include | grep esp_ | sed 's/^/ -I/g') -I\{env}/components/esp_common/include/ -I\{env}/components/soc/esp32/register/soc/ -I\{env}/components/soc/esp32/register -I\{env}/components/heap/include -I\{env}/components/hal/include -I\{env}/components/newlib/platform_include -D__M5STACK__", PREFIX);
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
        else if(argv[i] === "-cg") {
            come_debug = true;
            clang_option.append_str("-g ");
        }
        else if(argv[i] === "-cg2") {
            clang_option.append_str(" -fsanitize=address,undefined -g ");
            linker_option.append_str(" -fsanitize=address,undefined -g ");
        }
        else if(argv[i] === "-C") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-M") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-MM") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-dM") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-dD") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-H") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-P") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-nostdinc") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(argv[i] === "-CC") {
            cpp_option.append_str(s"\{argv[i]} ");
        }
        else if(i + 1 < argc && argv[i] === "-target") {
            clang_option.append_str(s"-target \{argv[i+1]}");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-include") {
            cpp_option.append_str(s"-iclude \{argv[i+1]}");
            i++;
        }
        else if(i + 1 < argc && argv[i] === "-isystem") {
            cpp_option.append_str(s"-isystem \{argv[i+1]}");
            clang_option.append_str(s"-isystem \{argv[i+1]}");
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
        else if(argv[i][0..2] === "-U") {
            cpp_option.append_str(s" \{argv[i]} ");
            clang_option.append_str(s" \{argv[i]} ");
        }
        else if(argv[i] === "-g") {
            clang_option.append_str("-g ");
        }
        else if(argv[i] === "-v") {
            clang_option.append_str("-v ");
            cpp_option.append_str("-v ");
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
        else if(ext_name === "c") {
            files.push_back(string(argv[i]));
        }
        else {
            clang_option.append_str(argv[i] + " ");
        }
    }
#ifdef __MAC__ // for lldb
    output_source_file_flag = true;
    gComeOriginalSourcePosition = false;
#endif
        
    gComeDebug = come_debug;
    gComeMalloc = come_malloc;
}

int come_main(int argc, char** argv)
{
    if(argv[1] === "header" && argc >= 3) {
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
        info.uniq_funcs = new map<string, sFun*%>();
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
        
        static int n = 0;
        info.num_source_files = n++;
        info.max_source_files = files.length();
        
        info.output_file_name = string(output_file_name);
        
        init_classes(&info);
        
        clear_tmp_file(&info);
        
        cpp(&info).elif {
            printf("transpile failed\n");
            system(xsprintf("%s %s*", RM, tmp_file));
            exit(2);
        }
        
        info.source = xsprintf("%s.i", tmp_file).read().to_buffer();
        info.p = info.source.buf;
        info.head = info.source.buf;
        
        output_cpp_file.elif {
            transpile(&info)
            
            output_header_file(&info).elif {
                printf("output source file failed\n");
                system(xsprintf("%s %s*", RM, tmp_file));
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
            info.uniq_funcs = new map<string, sFun*%>();
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
            info.m5stack_cpp = m5stack_cpp;
            info.pico_cpp = pico_cpp;
            info.emb_cpp = emb_cpp;
            info.gcc_compiler = gcc_compiler;
            
            init_classes(&info);
            
            clear_tmp_file(&info);
            
            cpp(&info).elif {
                printf("transpile failed\n");
                exit(2);
            }
            
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
                    printf("output source file faield\n");
                    exit(2);
                }
                
                if(info.err_num > 0) {
                    printf("transpile error. err num %d\n", info->err_num);
                    
                    exit(2);
                }
                
                output_object_file_flag.if {
                    compile(&info, output_object_file, object_files).elif {
                        printf("compile faield\n");
                        exit(27);
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
            
            info.sname = clone files[0];
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
                    printf("linker faield\n");
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
