#include <comelang.h>
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
<p>シバ犬物語</p>

<p>ようこそ、\{username}さん。</p>

<img src="/cgi-bin/images/title.jpeg" alt="title" style="width: 30%; height: 30%;">

<p>メニュー</p>

<a href="/cgi-bin/food.cgi" rel="nofollow">エサをやる</a>
<a href="/cgi-bin/walking.cgi" rel="nofollow">散歩に行く</a>
<a href="/cgi-bin/ball.cgi" rel="nofollow">ボールで遊ぶ</a>
<a href="/cgi-bin/pet.cgi" rel="nofollow">撫でる</a>


</body>
</html>
    """);

    return 0;
}

