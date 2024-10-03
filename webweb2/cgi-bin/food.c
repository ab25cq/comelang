#include <comelang2.h>
#include <comelang2-str.h>
#include <comelang2-net.h>
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
        const char *create_table_query = "CREATE TABLE IF NOT EXISTS food ("
                                         "id INT AUTO_INCREMENT PRIMARY KEY, "
                                         "username VARCHAR(100) NOT NULL, "
                                         "time VARCHAR(100) NOT NULL"
                                         ")";

        xmysql_query(create_table_query, create_user:true, create_database:true);

        string query = s"SELECT MAX(time) FROM food WHERE username = '\{username}'";
        list<list<string>*%>*% li = xmysql_query_and_fetch_row(query)
        
        if(li[0]??.length() == 0) {
            long time_value = time(NULL);
            string time = xsprintf("%ld", time_value);
            
            xmysql_query(s"INSERT INTO food(username, time) VALUES('\{username}', '\{time}')");
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
            
            list<string>* li2 = li[0]??;
            char* time_str = li2[0]??;
            
            long time_ = 0L;
            (void)sscanf(time_str, "%ld", &time_);
            
            if((time_value - time_) > 60*60*3) {
                string time_str2 = xsprintf("%ld", time_value);
                
                xmysql_query(s"INSERT INTO food(username, time) VALUES('\{username}', '\{time_str2}')");
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

