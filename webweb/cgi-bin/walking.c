#include <neo-c.h>
#include <neo-c-net.h>

int main(int argc, char** argv)
{
    string input = stdin.read();
    
    char *cookie = getenv("HTTP_COOKIE");
    
    char username[1024];
    if (cookie) {
        sscanf(cookie, "Cookie: username=%s", username);
    }
    
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
<p>散歩に行きました</p>

<img src="/cgi-bin/images/walking.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi" rel="nofollow">戻る</a>


</body>
</html>
    """);

    return 0;
}

