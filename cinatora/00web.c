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

string Cinatora::get(Cinatora* self)
{
puts("CINATORA::get");
puts("self.path");
puts(self.path);
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
                string path = clone header.scan(/GET (.+) HTTP/)[1]??;
                
puts(path);
                char* p2 = strstr(path, "?");
                
                if(p2 == NULL) {
                    cinatora.header = header;
                    cinatora.contents = contents;
                    cinatora.path = string(path);
                
                    string output = (&cinatora).main();
puts("output");
puts(output);
                    string response = xsprintf("HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n%s", output);
                    write(it, response, strlen(response));
                }
                /*
                else {
                    p2++;
                    
                    string query_string = string(p2);
                    
                    var cgi_path = new buffer();
                    char* p = strstr(file_path, "?");
                    cgi_path.append(file_path, p - file_path);
                    
                    run_get_cgi_http(it, cgi_path.to_string(), header, contents, query_string);
                }
                */
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
/*
            else if(header.match(/^POST /)) {
puts("POST");
                char* str = header.scan(/POST (.+) /)[1]??;
                
                if(str === "/") {
                    str = "/index.html";
                }
                
                string file_path = str.substring(1,-1);
puts("file_path");
puts(file_path);
                
                run_post_cgi_http(it, file_path, header, contents);
            }
*/
            else {
                const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                        "<html><body><h1>404 Not Found</h1></body></html>";
                write(it, not_found, strlen(not_found));
            }
        }
    }
    
    return 0;
}

