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
        const char *query1 = "CREATE DATABASE testdb";
        (void)client_socket2(port:3336, query1);
        
        const char *query2 = "use testdb";
        (void)client_socket2(port:3336, query2);
        
        const char *query3 = "CREATE TABLE IF NOT EXISTS food ("
                             "id INT AUTO_INCREMENT PRIMARY KEY, "
                             "username VARCHAR(100) NOT NULL, "
                             "time VARCHAR(100) NOT NULL"
                             ")";
        (void)client_socket2(port:3336, query3);
        
        string query4 = s"SELECT MAX(time) FROM food WHERE username = '\{username}'";
        string read_data = client_socket2(port:3336, query4);
        
        long time_ = 0L;
        (void)sscanf(read_data, "%ld", &time_);
        
        if(time_ == 0L) {
            long time_value = time(NULL);
            string time = xsprintf("%ld", time_value);
            
            string query = s"INSERT INTO food(username, time) VALUES('\{username}', '\{time}')";
            (void)client_socket2(port:3336, query);
            puts("""
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1, user-scalable=no">
    <title>メインページ</title>
    <style>
        a {
            touch-action: manipulation;
            text-decoration: none;
            color: blue;
        }
    </style>
</head>
<body>
<p>エサを食べています</p>

<img src="/cgi-bin/images/food2.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi" rel="nofollow">戻る</a>


</body>
</html>
            """);
        }
        else {
            long time_value = time(NULL);
            
            if((time_value - time_) > 60*60*3) {
                string time_str2 = xsprintf("%ld", time_value);
                
                string query = s"INSERT INTO food(username, time) VALUES('\{username}', '\{time_str2}')";
                (void)client_socket2(port:3336, query);
                puts("""
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1, user-scalable=no">
    <title>メインページ</title>
    <style>
        a {
            touch-action: manipulation;
            text-decoration: none;
            color: blue;
        }
    </style>
</head>
<body>
<p>エサを食べています</p>

<img src="/cgi-bin/images/food2.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi" rel="nofollow">戻る</a>


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
    <meta name="viewport" content="width=device-width, initial-scale=1.0,maximum-scale=1, user-scalable=no">
    <title>メインページ</title>
    <style>
        a {
            touch-action: manipulation;
            text-decoration: none;
            color: blue;
        }
    </style>
</head>
<body>
<p>お腹いっぱいな様子です。 </p>

<a href="/cgi-bin/main.cgi" rel="nofollow">戻る</a>

</body>
</html>
                """);
            }
        }
    }

    return 0;
}

