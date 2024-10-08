#include <comelang.h>
#include <comelang-str.h>
#include <comelang-net.h>
#include <time.h>

int main(int argc, char** argv)
{
    string input = stdin.read();
    
    char *cookie = getenv("HTTP_COOKIE");
    
    char username[1024];
    if (cookie) {
        sscanf(cookie, "Cookie: username=%s", username);
    }
    
    if(username) {
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
            const char *create_table_query = "CREATE TABLE IF NOT EXISTS food ("
                                         "id INT AUTO_INCREMENT PRIMARY KEY, "
                                         "username VARCHAR(100) NOT NULL, "
                                         "time VARCHAR(100) NOT NULL"
                                         ")";
            
            write(it, create_table_query, strlen(create_table_query));
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            *it2 = true;
            return;
        }
        
        long time_ = 0L;
        client_socket(port:3336) {
            string query = s"SELECT MAX(time) FROM food WHERE username = '\{username}'";
            
            write(it, query, query.length());
            
            char buf[1024] = {0};
            int size = read(it, buf, 1023);
            buf[size] = '\0';
            
            char* time_str = buf;
            
            (void)sscanf(time_str, "%ld", &time_);
            
            *it2 = true;
            return;
        }
        
        if(time_ == 0L) {
            long time_value = time(NULL);
            string time = xsprintf("%ld", time_value);
            
            client_socket(port:3336) {
                string query = s"INSERT INTO food(username, time) VALUES('\{username}', '\{time}')";
                
                write(it, query, strlen(query));
                
                char buf[1024] = {0};
                int size = read(it, buf, 1023);
                buf[size] = '\0';
                
                *it2 = true;
                return;
            }
            puts("""
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>メインページ</title>
</head>
<body>
<p>エサを食べています</p>

<img src="images/food2.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi">戻る</a>


</body>
</html>
            """);
        }
        else {
            long time_value = time(NULL);
            
            if((time_value - time_) > 60*60*3) {
                string time_str2 = xsprintf("%ld", time_value);
                
                client_socket(port:3336) {
                    string query = s"INSERT INTO food(username, time) VALUES('\{username}', '\{time_str2}')";
                    
                    write(it, query, strlen(query));
                    
                    char buf[1024] = {0};
                    int size = read(it, buf, 1023);
                    buf[size] = '\0';
                    
                    *it2 = true;
                    return;
                }
                puts("""
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>メインページ</title>
</head>
<body>
<p>エサを食べています</p>

<img src="images/food2.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi">戻る</a>


</body>
</html>
                """);
            }
            else {
                puts("""
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>メインページ</title>
</head>
<body>
<p>お腹いっぱいな様子です。 </p>

<a href="/cgi-bin/main.cgi">戻る</a>

</body>
</html>
                """);
            }
        }
    }

    return 0;
}

