#include <comelang.h>

int main(int argc, char** argv)
{
    string input = stdin.read();
    
    puts("""
    <!DOCTYPE html>
    <html lang="ja">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>排他的に選べる果物のテーブル</title>
    </head>
    <body>
    \{input}
    </body>
    </html>
    """);
    
    return 0;
}

