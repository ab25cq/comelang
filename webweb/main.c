#include <neo-c-net.h>
//header {struct SSL;}
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>

static SSL* gSSL = NULL;

void handle_sigint(int sig) {
    printf("Caught signal %d, closing socket...\n", sig);
    if(gSSL) {
        SSL_shutdown(gSSL);
        SSL_free(gSSL);
        
        int fd = SSL_get_fd(gSSL);
        if (fd >= 0) {
            close(fd);
        }
    }
    exit(0);
}

string,int eval_zed(string command)
{
    sInfo info;
    
    info.command = command;
    
    info.nodes = new list<sNode*%>();
    info.codes = new buffer();
    
    info.stack = new list<ZVALUE*%>();
    
    /// parse ///
    buffer*% command_buffer = info.command.to_buffer();
    info.p = command_buffer.buf;
    
    while(*info.p) {
        if(!parse(&info)) {
            fprintf(stderr, "parse error\n");
            return (s"", 1);
        }
        
        if(*info.p == ';') {
            info.p++;
            skip_spaces(&info);
        }
    }
    
    /// compile ///
    foreach(it, info.nodes) {
        if(!it.compile(&info)) {
            fprintf(stderr, "compile error\n");
            return (s"", 1);
        }
        
        if(info.stack_num > 0) {
            arrange_stack(&info);
        }
    }
    
    info.codes.append_int(0);  /// terminator
    
    /// vm ///
    info.op = (int*)info.codes.buf;
    info.head = (char*)info.op;
    
    while(*info.op) {
        if(!vm(&info)) {
            fprintf(stderr, "vm error\n");
            return (s"", 1);
        }
    }
    
    /// output ///
    if(info->result_value) {
        info->result_value.to_string()
        
        return (info->result_value.to_string(), 0);
    }
    else {
        return (s"", 0);
    }
}

string parse_html(string file_contents)
{
    var contents = new buffer();
    
    char* p = file_contents;
    
    while(true) {
        char* p2 = strstr(p, "<?zed");
        
        if(p2 == null) {
            contents.append_str(p);
            break;
        }
        
        p2 += strlen("<?zed");
        
        while(*p2 == ' ' || *p2 == '\n' || *p2 == '\t') {
            p2++;
        }
        
        char* p3 = strstr(p2, "?>");
        
        if(p3 == null) {
            break;
        }
        
        buffer*% code = new buffer();
        
        code.append(p2, p3 - p2);
        
        var output, result = eval_zed(code.to_string());
        
        if(result != 0) {
            break;
        }
        
        contents.append_str(output);
        
        p = p3 + strlen("?>");
    }
    
    return contents.to_string();
}

string, int xpopen(char** argv, string input)
{
    var output = new buffer();
    
    int pipe_in[2], pipe_out[2];
    pid_t pid;

    if (pipe(pipe_in) == -1 || pipe(pipe_out) == -1) {
        perror("pipe failed");
        return (null, 1);
    }

    pid = fork();

    if (pid == -1) {
        perror("fork failed");
        return (null, 1);
    }

    if (pid == 0) {
        close(pipe_in[1]);
        close(pipe_out[0]);

        dup2(pipe_in[0], STDIN_FILENO);
        dup2(pipe_out[1], STDOUT_FILENO);

        close(pipe_in[0]);
        close(pipe_out[1]);

        execvp(argv[0], argv);

        perror("exec failed");
        exit(1);
    } 
    else {
        close(pipe_in[0]);
        close(pipe_out[1]);

        write(pipe_in[1], input, strlen(input));
        close(pipe_in[1]);

        while(1) {
            char buf[BUFSIZ];
            int size = read(pipe_out[0], buf, BUFSIZ);
            if(size < 0) {
                perror("read failed");
                return (null, 1);
            }
            
            output.append(buf, size);

            if(size < BUFSIZ) {
                break;
            }
        }
        close(pipe_out[0]);
    }

    return (output.to_string(), 0);
}

void run_post_cgi(SSL* it, string file_path, string header, string contents)
{
puts("POST");
puts(header);
puts(contents);
    setenv("REQUEST_METHOD", "POST", 1);
    
    char* p = header.scan("Content-Length: ([0-9]+)")[0]??;
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = strstr(header, "Cookie: ");
    if(p) {
puts("SERVER COOKIE");
puts(p);
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
puts("cgi output");
puts(output);
puts("cgi output end");
    
    if(err != 0) {
        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                "<html><body><h1>404 Not Found</h1></body></html>";
        SSL_write(it, not_found, strlen(not_found));
    }
    else if(output.match("Location:")) {
        SSL_write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
        SSL_write(it, response, strlen(response));
    }
}

void run_post_cgi_http(int it, string file_path, string header, string contents)
{
puts("POST");
puts(header);
puts(contents);
    setenv("REQUEST_METHOD", "POST", 1);
    
    char* p = header.scan("Content-Length: ([0-9]+)")[0]??;
    if(p) {
        int content_length = atoi(p);
printf("content_length %d\n", content_length);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = strstr(header, "Cookie: ");
    if(p) {
puts("SERVER COOKIE");
puts(p);
        setenv("HTTP_COOKIE", p, 1);
    }
    
    char* argv[] = { file_path, NULL };
    
    var output,err = xpopen(argv, contents);
puts("cgi output");
puts(output);
puts("cgi output end");
    
    if(err != 0) {
        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                "<html><body><h1>404 Not Found</h1></body></html>";
        write(it, not_found, strlen(not_found));
    }
    else if(output.match("Location:")) {
        write(it, output, strlen(output));
    }
    else {
        string file_contents = output;
        string file_contents2 = parse_html(file_contents);
        
        string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
        write(it, response, strlen(response));
    }
}

void run_get_cgi(SSL* it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    char* p = header.scan("Content-Length: ([0-9]+)")??[0];
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = header.scan("Cookie: (.+)")[0]??;
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    FILE* f = popen(s"\{cgi_path}", "r");
    
    if(f == null) {
        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                "<html><body><h1>404 Not Found</h1></body></html>";
        SSL_write(it, not_found, strlen(not_found));
    }
    else {
        string output = f.read();
        pclose(f);
        
        if(output.match("Location:")) {
            SSL_write(it, output, strlen(output));
        }
        else {
            string file_contents = output
            string file_contents2 = parse_html(file_contents);
            
            string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
            SSL_write(it, response, strlen(response));
        }
    }
}

void run_get_cgi_http(int it, string cgi_path, string header, string contents, string query_string)
{
    setenv("REQUEST_METHOD", "GET", 1);
    setenv("QUERY_STRING", query_string, 1);
    
    char* p = header.scan("Content-Length: ([0-9]+)")[0]??;
    if(p) {
        int content_length = atoi(p);
        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
    }
    
    p = header.scan("Cookie: (.+)")[0]??;
    if(p) {
        setenv("HTTP_COOKIE", p, 1);
    }
    
    FILE* f = popen(s"\{cgi_path}", "r");
    
    if(f == null) {
        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                "<html><body><h1>404 Not Found</h1></body></html>";
        write(it, not_found, strlen(not_found));
    }
    else {
        string output = f.read();
        pclose(f);
        
        if(output.match("Location:")) {
            write(it, output, strlen(output));
        }
        else {
            string file_contents = output
            string file_contents2 = parse_html(file_contents);
            
            string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
            write(it, response, strlen(response));
        }
    }
}

int main(int argc, char **argv) 
{
    bool http = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-http") {
            http = true;
        }
    }
    
    setlocale(LC_ALL, "");
    
    initialize_modules();
    
    string cgi_redirect_path = null;
    
int count = 0;
    while(true) {
        if(http) {
            httpd_socket(port:8080, reuse:true) {
                char data[1024*2*2*2] = {0};
                int size = read(it, data, 1024*2*2*2-1);
printf("size %d\n", size);
                
                data[size] = '\0';
puts("data");
printf("%s\n", data);
                if(size < 0) {
                    puts("read");
                    exit(2);
                }
                
                if(size == 0) {
                    *it2 = true;
                    return;
                }
                
                char* p = strstr(data, "\r\n\r\n");
                
                if(p == null) {
                    *it2 = true;
                    return;
                }
                
                var buf = new buffer();
                buf.append(data, p - data);
                
                var header = buf.to_string();
puts("header");
puts(header);
puts("header end");
                
                var buf2 = new buffer();
                buf2.append(p + 4, p + 4 - data);
                
                var contents = buf2.to_string();
puts("contents");
puts(contents);
puts("contents end");
        
                if(header.match("^GET ") && header.match("Accept: text\/html")) {
puts("GET");
                    char* str = header.scan("GET (.+) HTTP")[0]??;
puts(str);
                    
                    if(str === "/") {
                        str = "/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);  // remove /
                    
                    char* p2 = strstr(file_path, "?");
puts("file_path");
puts(file_path);
                    
                    if(p2 == NULL) {
                        string ext_name = xextname(file_path);
                        
                        /// cgi ///
                        if(ext_name === "cgi") {
                            run_post_cgi_http(it, file_path, header, contents);
                        }
                        else {
                            FILE *file = fopen(file_path, "r");
                            if (file == NULL) {
                                const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                        "<html><body><h1>404 Not Found</h1></body></html>";
                                write(it, not_found, strlen(not_found));
                            }
                            else {
                                fclose(file);
                                
                                string file_contents = file_path.read();
                                string file_contents2 = parse_html(file_contents);
                                
                                string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
                                write(it, response, strlen(response));
                            }
                        }
                    }
                    else {
                        p2++;
                        
                        string query_string = string(p2);
                        
                        var cgi_path = new buffer();
                        char* p = strstr(file_path, "?");
                        cgi_path.append(file_path, p - file_path);
                        
                        run_get_cgi_http(it, cgi_path.to_string(), header, contents, query_string);
                    }
                }
                /// image ///
                else if(header.match("^GET ") && header.match("Accept: image")) {
puts("GET image");
                    char* str = header.scan("GET (.+) HTTP")[0]??;
                    
                    string file_path = str.substring(1,-1);  // remove /
                    
puts("file_path");
puts(file_path);
                    FILE *file = fopen(file_path, "r");
                    if (file == NULL) {
                        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                "<html><body><h1>404 Not Found</h1></body></html>";
                        write(it, not_found, strlen(not_found));
                    }
                    else {
                        fclose(file);
                        
                        FILE *image_file = fopen(file_path, "rb");
                        if (image_file == NULL) {
                            const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                    "<html><body><h1>404 Not Found</h1></body></html>";
                            write(it, not_found, strlen(not_found));
                        }
                        struct stat stat_;
                        stat(file_path, &stat_);
                        
                        long image_size = stat_.st_size;
printf("image_size %ld\n", image_size);
                    
                        char header[1024];
                        snprintf(header, sizeof(header),
                                 "HTTP/1.1 200 OK\r\n"
                                 "Content-Type: image/jpeg\r\n"
                                 "Content-Length: %ld\r\n"
                                 "Connection: keep-alive\r\n"
                                 "\r\n", image_size);
                        write(it, header, strlen(header));
                        
                        size_t bytes_read;
                        char buf[1024];
                        
                        while((bytes_read = fread(buf, 1, sizeof(buf), image_file)) > 0) {
                            write(it, buf, bytes_read);
                        }
                    
                        fclose(image_file);
                    }
                }
                else if(header.match("^POST ")) {
puts("POST");
                    char* str = header.scan("POST (.+) ")[0]??;
                    
                    if(str === "/") {
                        str = "/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);
puts("file_path");
puts(file_path);
                    
                    run_post_cgi_http(it, file_path, header, contents);
                }
                else {
                    const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                            "<html><body><h1>404 Not Found</h1></body></html>";
                    write(it, not_found, strlen(not_found));
                }
/*
count++;
printf("count %d\n", count);
if(count >= 10) {
*it2 = true;
return;
}
*/
            }
            
/*
printf("COUNT %d\n", count);
if(count >= 10) {
    break;
}
*/
        }
        else {
            signal(SIGINT, handle_sigint);
            
            httpsd_socket(reuse:true) {
                gSSL = it;
        
                char data[1024*2*2] = {0};
                int size = SSL_read(it, data, 1024*2*2-1);
                
                data[size] = '\0';
                if(size < 0) {
                    puts("read");
                    exit(2);
                }
                
                if(size == 0) {
                    *it2 = true;
                    return;
                }
                
                char* p = strstr(data, "\r\n\r\n");
                
                var buf = new buffer();
                buf.append(data, p - data);
                
                var header = buf.to_string();
puts("header");
puts(header);
puts("header end");
                
                var buf2 = new buffer();
                buf2.append(p + 4, p + 4 - data);
                
                var contents = buf2.to_string();
puts("contents");
puts(contents);
puts("contents end");
        
                if(header.match("^GET ") && header.match("Accept: text\/html")) {
                    char* str = header.scan("GET (.+) HTTP")[0]??;
                    
                    if(str === "/") {
                        str = "/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);  // remove /
                    
                    char* p2 = strstr(file_path, "?");
                    
                    if(p2 == NULL) {
                        string ext_name = xextname(file_path);
                        
                        /// cgi ///
                        if(ext_name === "cgi") {
                            run_post_cgi(it, file_path, header, contents);
                        }
                        else {
                            FILE *file = fopen(file_path, "r");
                            if (file == NULL) {
                                const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                        "<html><body><h1>404 Not Found</h1></body></html>";
                                SSL_write(it, not_found, strlen(not_found));
                            }
                            else {
                                fclose(file);
                                
                                string file_contents = file_path.read();
                                string file_contents2 = parse_html(file_contents);
                                
                                string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", file_contents2);
                                SSL_write(it, response, strlen(response));
                            }
                        }
                    }
                    else {
                        p2++;
                        
                        string query_string = string(p2);
                        
                        var cgi_path = new buffer();
                        char* p = strstr(file_path, "?");
                        cgi_path.append(file_path, p - file_path);
                        
                        run_get_cgi(it, cgi_path.to_string(), header, contents, query_string);
                    }
                }
                /// image ///
                else if(header.match("^GET ") && header.match("Accept: image")) {
                    char* str = header.scan("GET (.+) HTTP")[0]??;
                    
                    string file_path = str.substring(1,-1);  // remove /
                    
                    FILE *file = fopen(file_path, "r");
                    if (file == NULL) {
                        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                "<html><body><h1>404 Not Found</h1></body></html>";
                        SSL_write(it, not_found, strlen(not_found));
                    }
                    else {
                        fclose(file);
                        
                        FILE *image_file = fopen(file_path, "rb");
                        if (image_file == NULL) {
                            const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                                    "<html><body><h1>404 Not Found</h1></body></html>";
                            SSL_write(it, not_found, strlen(not_found));
                        }
                        
                        struct stat stat_;
                        stat(file_path, &stat_);
                        
                        long image_size = stat_.st_size;
printf("image_size %ld\n", image_size);
                    
                        char header[1024];
                        snprintf(header, sizeof(header),
                                 "HTTP/1.1 200 OK\r\n"
                                 "Content-Type: image/jpeg\r\n"
                                 "Content-Length: %ld\r\n"
                                 "Connection: keep-alive\r\n"
                                 "\r\n", image_size);
                    
                        SSL_write(it, header, strlen(header));
                    
                        char buf[1024];
                        size_t bytes_read;
                        while ((bytes_read = fread(buf, 1, sizeof(buf), image_file)) > 0) {
                            SSL_write(it, buf, bytes_read);
                        }
                    
                        fclose(image_file);
                    }
                }
                else if(header.match("^POST ")) {
                    char* str = header.scan("POST (.+) ")[0]??;
                    
                    if(str === "/") {
                        str = "/index.html";
                    }
                    
                    string file_path = str.substring(1,-1);
                    
                    run_post_cgi(it, file_path, header, contents);
                }
                else {
                    const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                            "<html><body><h1>404 Not Found</h1></body></html>";
                    SSL_write(it, not_found, strlen(not_found));
                }
            }
        }
    }
    
    finalize_modules();
    
    return 0;
}

