#include <comelang.h>
#include <comelang-str.h>
#include <comelang-net.h>

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
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>メインページ</title>
</head>
<body>
<p>ボールで遊んでます</p>

<img src="images/ball.jpeg" alt="title" style="width: 30%; height: 30%;">

<a href="/cgi-bin/main.cgi">戻る</a>


</body>
</html>
    """);

    return 0;
}

