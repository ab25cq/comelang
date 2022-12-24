#include <neo-c.h>
#include <signal.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <glob.h>

struct sInfo
{
    char* p;
    vector<string>* args;
    vector<vector<string>*>* args_list;
    vector<bool>* args_mix_stdout;
    vector<tuple2<string, bool>*?>* args_redirect_stdout;
    vector<tuple2<string, bool>*?>* args_redirect_stderr;
    int rcode;
    
    bool mix_stdout;
    tuple2<string,bool>*? redirect_stdout;
    tuple2<string,bool>*? redirect_stderr
};

void skip_spaces(sInfo* info)
{
    while(*info->p == ' ' || *info->p == '\t') info->p++;
}

string parse_word(sInfo* info);

void parse_redirect(sInfo* info)
{
    while(true) {
        if(*info->p == '>' && *(info->p+1) == '>') {
            info->p += 2;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            auto tmp = (file_name, true);
            
            info->redirect_stdout = nullable tmp;
        }
        else if(*info->p == '>') {
            info->p ++;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            auto tmp = (file_name, false);
            
            info->redirect_stdout = nullable tmp;
        }
        else if(*info->p == '2' && *(info->p+1) == '>' && *(info->p+2) == '>') {
            info->p += 3;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            auto tmp = (file_name, true);
            
            info->redirect_stderr = nullable tmp;
        }
        else if(memcmp(info->p, "2>&1", 4) == 0) {
            info->p += 4;
            skip_spaces(info);
            info->mix_stdout = true;
        }
        else if(*info->p == '2' && *(info->p+1) == '>') {
            info->p += 2;
            skip_spaces(info);
            
            string file_name = parse_word(info);
            
            auto tmp = (file_name, false);
            
            info->redirect_stderr = nullable tmp;
        }
        else {
            break;
        }
    }
}

static bool expand_glob(char* str, vector<string>* result, sInfo* info)
{
    glob_t glob_result;
    int rc = glob(str, 0, NULL, &glob_result);

    if(rc == GLOB_NOSPACE) {
        fprintf(stderr, "out of space during glob operation\n");
        return false;
    }
    else if(rc == GLOB_NOMATCH) {
        result.push_back(string(str));
    }
    else {
        if(glob_result.gl_pathc > 0) {
            int i;
            for(i=0; i<glob_result.gl_pathc; i++) {
                result.push_back(string(glob_result.gl_pathv[i]));
            }
        }
        else {
            result.push_back(string(str));
        }
    }

    globfree(&glob_result);

    return true;
}

string parse_word(sInfo* info) 
{
    buffer* result = new buffer();
    
    parse_redirect(info);
    
    skip_spaces(info);
    
    parse_redirect(info);
    
    bool squort = false;
    bool dquort = false;
    
    if(*info->p == '~') {
        info->p++;
        
        result.append_str(getenv("HOME"));
    }
    
    while(!(!dquort && !squort && *info->p == ' ') && *info->p != '\t' && *info->p != '\n' && *info->p != '\0' && *info->p != ';' && *info->p != '&' && *info->p != '|') {
        if(!squort && *info->p == '"') {
            info->p++;
            dquort = !dquort;
        }
        else if(!dquort && *info->p == '\'') {
            info->p++;
            squort = !squort;
        }
        else if(!squort && *info->p == '$') {
            info->p++;
            
            auto buf2 = new buffer();
            while(xisalpha(*info->p)) {
                buf2.append_char(*info->p);
                info->p++;
            }
            
            result.append_str(getenv(buf2.to_string()));
        }
        else if(squort || dquort) {
            result.append_char(*info->p);
            info->p++;
        }
        else if(*info->p == '\\') {
            info->p++;
            
            if(*info->p == '\0') {
                break;
            }
            else {
                result.append_char(*info->p);
                info->p++;
            }
        }
        else {
            result.append_char(*info->p);
            info->p++;
        }
    }
    
    parse_redirect(info);
    
    skip_spaces(info);
    
    parse_redirect(info);
    
    return result.to_string();
}

bool parse(sInfo* info)
{
    info->args = new vector<string>();

    while(true) {
        buffer* buf = new buffer();
        char* p = info->p;
        while(*info->p != '\n' && *info->p != '\0') {
            buf.append_char(*info->p);
            info->p++;
        }
        string line = buf.to_string();
        
        if(line === "cd") {
            char* path = getenv("HOME");
            chdir(path);
            
            setenv("PWD", path, 1);
        }
        else if(line.match(/^cd /)) {
            auto li = line.scan(/^cd +(.+)/);
            
            auto str = li.item(1, null);
            
            if(str) {
                char path[PATH_MAX];
                realpath(str, path);
                chdir(path);
                
                setenv("PWD", path, 1);
            }
        }
        else if(line.match(/^export /)) {
            auto li = line.scan(/^export +(.+)=(.+)/);
            
            auto name = li.item(1, null);
            auto value = li.item(2, null);
            
            if(name && value) {
                setenv(name, value, 1);
            }
        }
        else {
            info->p = p;
            
            string arg = parse_word(info);
            
            if(arg === "") {
                break;
            }
            
            vector<string>* words = new vector<string>();
            if(!expand_glob(arg, words, info)) {
                return false;
            }
            
            foreach(it, words) {
                info->args.push_back(string(it));
            }
        }
    }
    
    return true;
}

bool redirect(int n, sInfo* info)
{
    tuple2<string,bool>*? redirect_stdout = info->args_redirect_stdout![n];
    tuple2<string,bool>*? redirect_stderr = info->args_redirect_stderr![n];
    
    if(redirect_stdout) {
        string file_name = redirect_stdout.0;
        bool append = redirect_stdout.1;
        
        int fd;
        if(append) {
            fd = open(file_name, O_APPEND|O_WRONLY|O_CREAT, 0644);
        }
        else {
            fd = open(file_name, O_WRONLY|O_CREAT, 0644);
        }
        
        if(fd < 0) {
            return false;
        }
        
        dup2(fd, 1);
        close(fd);
    }
    
    if(redirect_stderr) {
        string file_name = redirect_stderr.0;
        bool append = redirect_stderr.1;
        
        int fd;
        if(append) {
            fd = open(file_name, O_APPEND|O_WRONLY|O_CREAT, 0644);
        }
        else {
            fd = open(file_name, O_WRONLY|O_CREAT, 0644);
        }
        
        if(fd < 0) {
            return false;
        }
        
        dup2(fd, 2);
        close(fd);
    }
    
    return true;
}

bool run_command(int n, sInfo* info)
{
    int pipes[2];
    
    memset(pipes, 0, sizeof(int)*2);
    
    if(n == info->args_list.length()-1) {
        if(!redirect(0, info)) {
            return false;
        }
        
        bool mix_stdout = info->args_mix_stdout[0];
        
        if(mix_stdout) {
            dup2(1, 2);
        }
        
        vector<string>* args = info->args_list[0];
        
        char* argv[1024];
        int i;
        for(i=0; i<args.length(); i++) {
            argv[i] = args[i];
        }
        argv[i] = NULL;
        
        execvp(argv[0], argv);
        exit(127);
    }
    else {
        pipe(pipes);
        
        pid_t pid = fork();
        
        if(pid == 0) {
            bool mix_stdout = info->args_mix_stdout[info->args_list.length()-n-1];
            
            if(mix_stdout) {
                dup2(1, 2);
            }
            
            if(!redirect(info->args_list.length()-n-1, info)) {
                return false;
            }
            
            close(pipes[0]);
            dup2(pipes[1], 1);
            close(pipes[1]);
            
            
            run_command(n+1, info);
        }
        else {
            close(pipes[1]);
            dup2(pipes[0], 0);
            close(pipes[0]);
            
            vector<string>* args = info->args_list[info->args_list.length()-n-1];
            char* argv[1024];
            int i;
            for(i=0; i<args.length(); i++) {
                argv[i] = args[i];
            }
            argv[i] = NULL;
            
            execvp(argv[0], argv);
            exit(127);
        }
    }
    
    return true;
}

bool run(char* source)
{
    sInfo info;
    
    info.p = source;
    
    while(*info->p) {
        while(*info->p == '\n' || *info->p == ';') info->p++;
        
        info->args_list = new vector<vector<string>*>();
        info->args_mix_stdout = new vector<bool>();
        info->args_redirect_stdout = new vector<tuple2<string,bool>*?>();
        info->args_redirect_stderr = new vector<tuple2<string,bool>*?>();
        
        while(true) {
            info->mix_stdout = false;
            info->redirect_stdout = null;
            info->redirect_stderr = null;
            
            if(!parse(&info)) {
                return false;
            }
            
            if(info->args.length() == 0) {
                break;
            }
            
            info->args_list.push_back(info->args);
            info->args_mix_stdout.push_back(info->mix_stdout);
            info->args_redirect_stdout.push_back(info->redirect_stdout);
            info->args_redirect_stderr.push_back(info->redirect_stderr);
            
            if(*info->p == '|' && *(info->p+1) != '|') {
                info->p++;
                skip_spaces(&info);
            }
            else {
                break;
            }
        }
        
        if(info->args_list.length() == 0) {
            break;
        }
    
        pid_t pid = fork();
        
        if(pid == 0) {
            run_command(0, &info);
        }
        else {
            int status = 0;
            int options = WUNTRACED;
            pid_t pid2 = waitpid(pid, &status, options);
            if(pid2 < 0) {
                perror("waitpid");
                exit(1);
            }
            
            tcsetpgrp(0, getpgrp()).except {
                perror("tcsetpgrp");
                
                exit(1);
            }
            
            info.rcode = WEXITSTATUS(status);
            
            if(info.rcode == 127) {
                fprintf(stderr, "command not found (%s)\n", info->args[0]);
            }
        }
        
        if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            if(info->rcode == 0) {
                break;
            }
        }
        else if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            if(info->rcode != 0) {
                break;
            }
        }
        
        while(*info->p == '\n' || *info->p == ';') info->p++;
    }
    
    return true;
}


void sigchld_action(int signum, siginfo_t* info, void* ctx)
{
}

void sig_tstp(int signum)
{
}

void sig_int(int signal)
{
    rl_reset_line_state();
    rl_replace_line("", 0);
    rl_point = 0;
    puts("");
    rl_redisplay();
}

void set_signal()
{
    struct sigaction sa;
    
    memset(&sa, 0, sizeof(sa));
    
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_RESTART|SA_SIGINFO;
    sigaction(SIGCHLD, &sa, NULL).except {
        perror("sigaction1");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sigaction(SIGCONT, &sa, NULL).except {
        perror("sigaction3");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    sigaction(SIGWINCH, &sa, NULL).except {
        perror("sigaction4");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTOU, &sa, NULL).except {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGTTIN, &sa, NULL).except {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = sig_tstp;
    sa.sa_flags = 0;
    sigaction(SIGTSTP, &sa, NULL).except {
        perror("sigaction7");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGQUIT, &sa, NULL).except {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    sigaction(SIGPIPE, &sa, NULL).except {
        perror("sigaction10");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = (sig_t)sig_int;
    if(sigaction(SIGINT, &sa, null) < 0) {
        perror("sigaction2");
        exit(1);
    }
}

using C;

void sigchld_block(int block)
{
    sigset_t sigset;

    sigemptyset(&sigset);
    sigaddset(&sigset, SIGCHLD);

    if(sigprocmask((block?SIG_BLOCK:SIG_UNBLOCK), &sigset, NULL) != 0)
    {
        fprintf(stderr, "error\n");
        exit(1);
    }
}

using neo-c;

void sig_int_optc(int signum)
{
    sigchld_block(1);
    sigchld_block(0);
}

void sig_tstp_optc(int signum, siginfo_t* info, void* ctx)
{
    sigchld_block(1);
    killpg(0, SIGSTOP);
    sigchld_block(0);
}

void sig_cont_optc(int signum, siginfo_t* info, void* ctx)
{
    sigchld_block(1);
    //mrestore_ttysettings();
    sigchld_block(0);
}

void set_signal_optc()
{
    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sigchld_action;
    sa.sa_flags = SA_SIGINFO|SA_RESTART;
    if(sigaction(SIGCHLD, &sa, NULL) < 0) {
        perror("sigaction1");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_flags = SA_SIGINFO;
    sa.sa_handler = sig_int_optc;
    if(sigaction(SIGINT, &sa, NULL) < 0) {
        perror("sigaction2");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_tstp_optc;
    sa.sa_flags = SA_RESTART;
    if(sigaction(SIGTSTP, &sa, NULL) < 0) {
        perror("sigaction7");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = sig_cont_optc;
    sa.sa_flags = SA_RESTART;
    if(sigaction(SIGCONT, &sa, NULL) < 0) {
        perror("sigaction3");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_DFL;
    if(sigaction(SIGWINCH, &sa, NULL) < 0) {
        perror("sigaction4");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTOU, &sa, NULL) < 0) {
        perror("sigaction5");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGTTIN, &sa, NULL) < 0) {
        perror("sigaction6");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGQUIT, &sa, NULL) < 0) {
        perror("sigaction8");
        exit(1);
    }

    memset(&sa, 0, sizeof(sa));
    sa.sa_handler = SIG_IGN;
    sa.sa_flags = 0;
    if(sigaction(SIGPIPE, &sa, NULL) < 0) {
        perror("sigaction10");
        exit(1);
    }
}

string line_buffer_from_head_to_cursor_point()
{
    string result = new char[strlen(rl_line_buffer)+1];
    memcpy(result, rl_line_buffer, rl_point);
    result[rl_point] = 0;

    return result;
}

int gMatchIndex;
vector<string>* gMatches;
bool gCommand;
string gInputingText;

void get_command_completion_cadidates()
{
    char* env = getenv("PATH");
    char path[PATH_MAX];
    char path2[PATH_MAX];
    struct stat stat_;

    char* p = path;
    int len = strlen(env);

    int i;
    for(i=0; i<len; i++) {
        if(env[i] == ':') {
            *p = '\0';

            if(access(path, F_OK) == 0) {
                if(stat(path, &stat_) == 0 && S_ISDIR(stat_.st_mode)) {
                    DIR* dir = opendir(path);

                    if(dir) {
                        while(1) {
                            struct dirent* entry = readdir(dir);

                            if(entry == NULL) {
                                break;
                            }

                            if(strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) 
                            {
                                strncpy(path2, path, PATH_MAX);

                                if(path[strlen(path)-1] != '/') {
                                    strncat(path2, "/", PATH_MAX);
                                }
                                strncat(path2, entry->d_name, PATH_MAX);

                                if(stat(path2, &stat_) == 0) {
                                    if(stat_.st_mode & S_IXUSR) 
                                    {
                                        if(memcmp(entry->d_name, gInputingText, strlen(gInputingText)) == 0) 
                                        {
                                            gMatches.push_back(string(entry->d_name));
                                        }
                                    }
                                }
                            }
                        }

                        closedir(dir);
                    }
                }
            }

            p = path;
        }
        else {
            *p = env[i];
            p++;

            if(p - (char*)path >= PATH_MAX) {
                break;
            }
        }
    }
}

char* completion_generator(char* text, int state)
{
    if(state == 0) {
        gMatches = new vector<string>();
        gMatchIndex = 0;
        get_command_completion_cadidates();
    }

    rl_completion_append_character = ' ';
    
    if(gMatchIndex < gMatches.length()) {
        return strdup(gMatches[gMatchIndex++]);
    }
    else {
        return NULL;
    }
    
    return NULL;
}

char** completer(char* text, int start, int end)
{
    gCommand = true;
    
    string current_line = line_buffer_from_head_to_cursor_point();

    char* p = current_line;
    
    auto buf = new buffer();
    
    while(*p) {
        while(*p == ' ') {
            gCommand = true;
            p++;
        }
        
        while(xisascii(*p) && *p != ' ') {
            gCommand = true;
            buf.append_char(*p);
            p++;
        }
        
        while(*p == ' ') {
            gCommand = false;
            p++;
        }
        
        while(*p) {
            while(xisascii(*p) && *p != ' ') {
                gCommand = false;
                p++;
            }
            
            while(*p == ' ') {
                gCommand = false;
                p++;
            }
            
            if(*p == '|') {
                gCommand = true;
                
                buf = new buffer();
                p++;
                break;
            }
        }
    }
    
    gInputingText = buf.to_string();

    /// is method completion ? ///
    if(!gCommand) {
        rl_attempted_completion_over = 0;
        rl_completion_append_character = ' ';
        rl_completer_word_break_characters = " ";

        return null;
    }
    else {
        rl_attempted_completion_over = 1;
        rl_completer_word_break_characters = " ";

        return rl_completion_matches(text, completion_generator);
    }
    
    return null;
}

char* gCmdlineInitString = "";
int gCmdlineInitCursorPoint = 0;

void readline_insert_text(char* cmdline, int cursor_point)
{
    rl_replace_line(cmdline, 0);
    int n = cursor_point;

    if(n < 0) { n += strlen(rl_line_buffer) + 1; }
    if(n < 0) { n = 0; }
    if(n > strlen(rl_line_buffer)) { n = strlen(rl_line_buffer); }
    rl_point = n;
}

int readline_init_text()
{
    readline_insert_text(gCmdlineInitString, gCmdlineInitCursorPoint);
    
    gCmdlineInitString = "";
    gCmdlineInitCursorPoint = 0;
}

int main(int argc, char** argv)
{
    bool command = false;
    string? file_name = null;
    bool run_once = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-c") {
            command = true;
        }
        else if(i+1 < argc && argv[i] === "-i") {
            gCmdlineInitString = argv[i+1];
            gCmdlineInitCursorPoint = -1;
            i++;
        }
        else if(argv[i] === "-o") {
            run_once = true;
        }
        else if(i+1 < argc && argv[i] === "-n") {
            gCmdlineInitCursorPoint = atoi(argv[i+1]);
            i++;
        }
        else {
            file_name = nullable string(argv[i]);
        }
    }
    
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    setenv("PWD", cwd, 1);
    
    fopen_block(getenv("HOME") + "/.shshrc", "r") {
        string command_str = it.read();
        
        run(command_str).except {
            fprintf(stderr, "error\n");
            exit(1);
        }
    }
    
    if(file_name == null) {
        set_signal();
        
        rl_completer_quote_characters = "\"'";
        rl_completer_word_break_characters = " \t.>";
        rl_attempted_completion_function = completer;
        
        rl_startup_hook = readline_init_text;
        
        while(true) {
            char* line = readline(getenv("PWD") + " > ");
            
            if(line == null || line === "exit") {
                break;
            }
            
            run(line).except {
                fprintf(stderr, "error\n");
                exit(1);
            }
            
            add_history(line);
            
            free(line);
            
            if(run_once) {
                break;
            }
        }
    }
    else {
        string? command_str = null;
        if(command) {
            command_str = file_name;
        }
        else {
            fopen_block(file_name!, "r") {
                command_str = nullable it.read();
            }
        }
        
        set_signal_optc();
        
        run(command_str!).except {
            fprintf(stderr, "error\n");
            exit(1);
        }
    }
    
    return 0;
}
