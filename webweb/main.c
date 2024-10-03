#include <comelang-net.h>

#define RESPONSE "HTTP/1.1 200 OK\r\n" \
                 "Content-Type: text/plain\r\n" \
                 "Content-Length: 11\r\n" \
                 "\r\n" \
                 "Hello World"

int main() {
    httpd_socket() {
        char buf[1024] = {0};
        read(it, buf, 1024);
        printf("Received request:\n%s\n", buf);
    
        it.write(string(RESPONSE)) and die("write");
    }

    return 0;
}

