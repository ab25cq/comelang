#include <comelang.h>
#include <comelang-str.h>
#include <comelang-net.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>

struct Cinatora
{
    string path;
    string header;
    string contents;
    
    string output;
};

extern string Cinatora::main(Cinatora* self);
extern string Cinatora::cgi_main(Cinatora* self);
extern string Cinatora::post_main(Cinatora* self);

string Cinatora::get(Cinatora* self)
{
    return self.path;
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
    
    while(true) {
        Cinatora cinatora;
        httpd_socket(port:8080, reuse:true) {
            /// get header and contents ///
            char data[1024*2*2*2] = {0};
            int size = read(it, data, 1024*2*2*2-1);
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
            
            if(p == null) {
                *it2 = true;
                return;
            }
            
            var buf = new buffer();
            buf.append(data, p - data);
            
            var header = buf.to_string();
puts("header");
puts(header);
            
            var buf2 = new buffer();
            buf2.append(p + 4, p + 4 - data);
            
            var contents = buf2.to_string();
puts("contents");
puts(contents);
    
            if(header.match(/^GET /) && header.match(/Accept: text\/html/)) {
puts("GET");
                string path = header.scan(/GET (.+) HTTP/)[1]??;
                
puts(path);
                char* p2 = strstr(path, "?");
                
                if(p2 == NULL) {
                    cinatora.header = header;
                    cinatora.contents = contents;
                    cinatora.path = string(path);
                
                    string output = (&cinatora).main();
puts(output);
                    string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", output);
                    write(it, response, strlen(response));
                }
                else {
                    p2++;
                    
                    cinatora.header = header;
                    cinatora.contents = contents;
                    cinatora.path = string(path);
                    
                    string query_string = string(p2);
                    
                    setenv("REQUEST_METHOD", "GET", 1);
                    setenv("QUERY_STRING", query_string, 1);
                    
                    string p = header.scan(/Content-Length: (\d+)/)[1]??;
                    if(p) {
                        int content_length = atoi(p);
                        setenv("CONTENT_LENGTH", s"\{content_length}", 1);
                    }
                    string p = header.scan(/Cookie: (.+)/)[1]??;
                    if(p) {
                        setenv("HTTP_COOKIE", p, 1);
                    }
                    cinatora.header = header;
                    cinatora.contents = contents;
                    cinatora.path = string(path);
                    
                    string output = (&cinatora).cgi_main();
                    
                    string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", output);
                    
                    write(it, response, strlen(response));
                }
            }
            /// image ///
            else if(header.match(/^GET /) && header.match(/Accept: image/)) {
puts("GET image");
                char* str = header.scan(/GET (.+) HTTP/)[1]??;
                
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
            else if(header.match(/^POST /)) {
puts("POST");
                string file_path = header.scan(/POST (.+) /)[1];
                setenv("REQUEST_METHOD", "POST", 1);
                
                string p = header.scan(/Content-Length: (\d+)/)[1]??;
                if(p) {
                    int content_length = atoi(p);
                    setenv("CONTENT_LENGTH", s"\{content_length}", 1);
                }
                
                char* p2 = strstr(header, "Cookie: ");
                if(p2) {
                    setenv("HTTP_COOKIE", p2, 1);
                }
                
                cinatora.header = header;
                cinatora.contents = contents;
                cinatora.path = string(file_path);
                
                string output = (&cinatora).post_main();
                
                if(output.match(/Location:/)) {
                    write(it, output, strlen(output));
                }
                else {
                    string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", output);
                    
                    write(it, response, strlen(response));
                }
            }
            else {
                const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                        "<html><body><h1>404 Not Found</h1></body></html>";
                write(it, not_found, strlen(not_found));
            }
        }
    }
    
    return 0;
}

