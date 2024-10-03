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
<p>シバ犬物語</p>

<p>ようこそ、\{username}さん。</p>

<img src="images/title.jpeg" alt="title" style="width: 30%; height: 30%;">

<p>メニュー</p>

<a href="food.cgi">エサをやる</a>
<a href="walking.cgi">散歩に行く</a>
<a href="ball.cgi">ボールで遊ぶ</a>
<a href="pet.cgi">撫でる</a>


</body>
</html>
    """);

    return 0;
}

