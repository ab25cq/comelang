#include <comelang2.h>
#include <comelang2-str.h>
#include <comelang2-net.h>

int main(int argc, char** argv)
{
    string input = stdin.read();
    
    var result = input.scan(/username=(.+)&password=(.+)/);
    
    var username = result[1]??;
    
    var password = result[2]??;
    
    if(username && password) {
        const char *create_table_query = "CREATE TABLE IF NOT EXISTS users ("
                                         "id INT AUTO_INCREMENT PRIMARY KEY, "
                                         "username VARCHAR(100) NOT NULL, "
                                         "password VARCHAR(100) NOT NULL"
                                         ")";

        xmysql_query(create_table_query, create_user:true, create_database:true);

        string query = s"SELECT username, password FROM users WHERE username = '\{username}'";
        list<list<string>*%>*% li = xmysql_query_and_fetch_row(query)

        if(li.length() == 0) {
            xmysql_query(s"INSERT INTO users(username, password) VALUES('\{username}', '\{password}')");

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
            list<string>* li2 = li[0]??;
            
            if(password === li2[1]??) {
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

