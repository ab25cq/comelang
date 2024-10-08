#include <comelang.h>
#include <comelang-str.h>
#include <comelang-net.h>

int main(int argc, char** argv)
{
    string input = stdin.read();
    
    var result = input.scan(/username=(.+)&password=(.+)/);
    
    var username = result[1]??;
    
    var password = result[2]??;
    
    if(username && password) {
        client_socket(port:3336) {
            const char *create_table_query = "CREATE DATABASE testdb";
            
            write(it, create_table_query, strlen(create_table_query));
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            *it2 = true;
            return;
        }
        client_socket(port:3336) {
            const char *create_table_query = "use testdb";
            
            write(it, create_table_query, strlen(create_table_query));
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            *it2 = true;
            return;
        }
        client_socket(port:3336) {
            const char *create_table_query = "CREATE TABLE IF NOT EXISTS users ("
                                             "id INT AUTO_INCREMENT PRIMARY KEY, "
                                             "username VARCHAR(100) NOT NULL, "
                                             "password VARCHAR(100) NOT NULL"
                                             ")";
            
            write(it, create_table_query, strlen(create_table_query));
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            *it2 = true;
            return;
        }

        list<string>*% li = new list<string>();
        client_socket(port:3336) {
            string query = s"SELECT username, password FROM users WHERE username = '\{username}'";
            write(it, query, strlen(query));
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            li = string(buf).scan(/\n/);
            
            *it2 = true;
            return;
        }

        if(li.length() == 1 && li[0]??.chomp() === "") {
            client_socket(port:3336) {
                string query = s"INSERT INTO users(username, password) VALUES('\{username}', '\{password}')";
                write(it, query, strlen(query));
                
                char buf[1024] = {0};
                int size = read(it, buf, 1023);
                buf[size] = '\0';
    
                string redirect_response = """
HTTP/1.1 302 Found\r
Set-Cookie: username=\{username};\r
Location: /cgi-bin/main.cgi\r
Content-Length: 0\r
\r
                """;
    
                printf(redirect_response);
                
                *it2 = true;
                return;
            }
        }
        else {
            if(password === li[1]??) {
                string redirect_response = """
HTTP/1.1 302 Found\r
Set-Cookie: username=\{username};\r
Location: /cgi-bin/main.cgi\r
Content-Length: 0\r
\r
                    """;

                printf(redirect_response);
            }
            else {
                const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                        "<html><body><h1>Invalid Password</h1></body></html>";
                puts(not_found);
            }
        }
    }
    else {
        const char *not_found = "HTTP/1.1 404 Not Found\r\nContent-Type: text/html\r\n\r\n"
                                "<html><body><h1>404 Not Found</h1></body></html>";
        puts(not_found);
    }
    
    return 0;
}

