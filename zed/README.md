A text processing language for one-liners.
If you want to write a script, use bash, Python, or Ruby.

ワンライナー用のテキスト処理言語です。
スクリプトを書きたい場合はbashやPythonやRubyを使ってください。

```
    > zed '"HELLO WORLD"'
    HELLO WORLD
    > cat a.c
    AAA
    BBB
    CCC
    > cat a.c | zed '.split(/\n/)'
    [AAA,BBB,CCC]
    > cat a.c | zed '.split(/\n/).join("+")'
    AAA+BBB+CCC
    > echo 123 | zed '.scan(/./)'
    [1,2,3]
    > echo 123 | zed '.scan(/./).map  { it + "ab" }'
    [1ab,2ab,3ab]
    > zed '(1+1).to_string() + "B"'
    2B
    > echo abc | zed '.sub_block(/./g) { it * 2 }'
    aabbcc
    
    > echo abc | zed '(.scan(/./) * 2).join("")'
    abcabc
    > zed '"HELLO WORLD".scan(/./).map { it * 2 }.join("")'
    HHEELLLLOOO  WWOORRLLDD
    > zed '"HELLO WORLD".scan(/./).map { it * 2 + "\n" }.join("").chomp()'
    HH
    EE
    LL
    OO
    
    WW
    OO
    RR
    LL
    DD
    
    > zed '[1,4,3,10].sort()'
    [1,3,4,10]
    > zed 'sum=0; [1,4,3,10].each { sum = sum + it }; sum'
    18
    > zed '"HELLO WORLD".scan(/./).map { if it == " " { it } else { it + "B" } }.join("")'
    HBEBLBLBOB WBOBRBLBDB
    > ls | zed '.scan(/./).sort().uniq()'
    [-,.,2,3,4,5,6,7,8,9,A,C,D,E,I,L,M,N,R,S,_,a,b,c,d,e,f,g,h,i,k,l,m,n,o,p,r,s,t,u,v,x,y,z]
```

# 型

1. 数値型

    1,2,3など
    
2. 文字列型

    "ABC"
    
3. 真偽型

    true, false
    
4. Null

    null
    
5. 正規表現

    /.+/
    
6. List

    [1,2,3]
    
7. Map

    ["AAA":1, "BBB":2]

# 出力

最後に実行された式の値が出力されます

# 文字列メソッド

```
    "aaa\n".chomp();  # aaa
```

```
    "ABC".loser_case();  # abc
```

```
    "ABC".reverse();  # CBA
```

```
    "abc".upper_case(); # ABC
```

```
    "ABC".length();  # 3
```

```
    "コントール文字列".printable();  # ^Iなど
```

```
    "abc".scan(/./);  # [a,b,c]
```

```
    "abc".xsprintf("[%s]");  # [abc]
```

```
    "abc".compare("def");    # -1
```

文字列の大きさを比べます。<0なら左が小さく、>0なら右が小さいです。== 0なら同じ値です。

```
    "abc".sub(/./g, "X");    # XXX
    "abc".sub(/a/, "A");     # Abc
```

```
    "ABCDEFG".delete(1,3);   # ADEFG
```

```
    "ABCDEFG".index_count("CDE",1,-1);   # 2
```

index_count(str, count, default_value); 

count回数だけ文字列を左から探します。default_valueは見つからなかった時の値です

```
    "ABCDEFG".index_regex_count(/CDE/,1,-1);   # 2
```

index_regex_count(regex, count, default_value); 

count回数だけ文字列を左から探します。default_valueは見つからなかった時の値です

```
    "ABCDEFG".rindex_regex_count(/CDE/,1,-1);   # 2
```

rindex_regex_count(regex, count, default_value); 

count回数だけ文字列を右から探します。default_valueは見つからなかった時の値です

```
    "ABCDEFG".substring(1,3);   # BC
```

```
    "ABCDEFG".index("C", -1);    # 2
```

-1は見つからなかった時の値です。

```
    "ABCDEFG".index_regex(/C/, -1);    # 2
```

-1は見つからなかった時の値です。


```
    "ABCDEFG".replace(1, "X");    # AXCDEFG
```

```
    "ABCDEFG".rindex("C", -1);    # 2
```

右から文字列を探します。-1が見つからなかった時に値です。


```
    "ABCDEFG".rindex_count("C", 1, -1);    # 2
```

rindex_count(str, count, default_value);

count回数右から文字列を探します。

```
    "ABCDEFG".index_regex(/C/, 1);    # 2
```

count回数左から文字列を探します。

```
    "ABCDEFG".rindex_regex(/C/, 1);    # 2
```

count回数右から文字列を探します。


```
    "ABC".multiply(3);    # ABCABCABC
```

```
    "ABC".match(/A/);     # true
```

```
    "ABC".match_count(/A/, 1);   # true
```

```
    "A,B,C".split(/,/, 1);   # [A,B,C]
```

```
    "A,B,C\n".strip();   # A,B,C
```

```
    "A,B,C".split_char(",");   # [A,B,C]
```

```
    "ABC".sub_count(/A/, "X", 1);   # XBC
```

```
    "ABC".sub_block(/./) { it + "X" }   # AXBXCX
```

# 数値メソッド

```
    1.to_string()    # "1"
```

# listメソッド

```
    ["1", "2", "3"].join("+");   # 1+2+3
```

```
    [1,2,3,4,5].sublist(2,4);   # [3,4]
```

```
    [1,1,2,2,3,3].uniq();   # [1,2,3]
```

```
    [1,2,3].reverse();   # [3,2,1]
```

```
    [3,1,2,5,7].sort();   # [1,2,3,5,7]
```

```
    [3,1,2,5,7].find(2);   # 2
```

```
    [3,1,2,5,7].find(2);   # 2
```

```
    [3,1,2,5,7].length();  # 5
```

```
    [3,1,2,5,7].filter { it > 2 }   # [3,1,5,7]
```

```
    ["a","b","c","d","e"].map { it + "X" }    # "aXbXcXdXeX
```

```
    ["a","b","c","d","e"].each { print it; }    # a\nb\nc\nd\ne\n
```

```
    ["a","b","c","d","e"].add(["f","g"]);       # [a,b,c,d,e,f,g]
```

```
    ["a","b","c","d","e"].insert(1, "X");       # [a,X,b,c,d,e]
```

```
    ["a","b","c","d","e"].delete(1, 3);       # [a,d,e]
```

```
    ["a","b","c","d","e"].replace(1, "X");       # [a,X,c,d,e]
```

```
    ["a","b","c","d","e"].replace(1, "X");       # [a,X,c,d,e]
```

```
    ["AAA":1, "BBB":2, "CCC":3].length();        # 3
```

```
    ["AAA":1, "BBB":2, "CCC":3].find("AAA");     # true
```

```
    ["AAA":1, "BBB":2, "CCC":3].keys();          # ["AAA","BBB","CCC"]
```

```
    ["AAA":1, "BBB":2, "CCC":3].values();          # [1,2,3]
```

