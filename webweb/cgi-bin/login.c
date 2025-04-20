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
        client_socket2(port:3366, "CREATE DATABASE testdb");
        
        client_socket2(port:3366, "use testdb");
        const char *create_table_query = "CREATE TABLE IF NOT EXISTS users ("
                                         "id INT AUTO_INCREMENT PRIMARY KEY, "
                                         "username VARCHAR(100) NOT NULL, "
                                         "password VARCHAR(100) NOT NULL"
                                         ")";
        client_socket2(port:3366, create_table_query);

        string query = s"SELECT username, password FROM users WHERE username = '\{username}'";
        string read_data = client_socket2(port:3366, query);
        list<string>*% li = read_data.scan(/\n/);

        if(li.length() == 1 && li[0]??.chomp() === "") {
            client_socket2(port:3366, s"INSERT INTO users(username, password) VALUES('\{username}', '\{password}')");
    
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

