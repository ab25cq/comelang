# comelang

come together!

Modern C compiler. It has some compatibility with C language. It has a collection and string library using BoehmGC or Original Heap System.

モダンなCコンパイラ。C言語とある程度の互換性があります。BoehmGCもしくはオリジナルのヒープシステムを使ったコレクション、文字列ライブラリを備えます。

With version 7.0.0, we were able to obtain compatibility with C language of about 9cc. try it.

version 7.0.0で9cc程度のC言語との互換を得ることができました。試してみてください。

version 7.0.8で何処かのCコンパイラのコンパイル実行に成功しました。かなりCコンパイラとして完成度上がってます。

version 10.0.0で配列、構造体、unionの初期化子をサポートしました。普通にCコンパイラと言ってもいいかもしれません。

With version 10.0.0, we were suported with struct initializer, array initializer, union initializer. We can call comelang as C laguage.


This language is self-host.

完全なセルフホストを行います。

version 10.0.0

```
#include <comelang.h>

int fun(int x=123, int y = 234, int z = 345) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

int, string fun2() 
{
    (1, string("ABC"))
}

class sData(int a, int b)
{
    int self.a = a;
    int self.b = b;
}

int putc(int c, FILE* f) version 2
{
    inherit(c, f);
    puts("");
    
    return 1;
}

int main() 
{
    puts("HO!" * 3);             // HO!HO!HO!\n
    puts(xsprintf("%d", 1+1));
    
    3.times { puts(("HO" + "!") * 3); }    // HO!HO!HO!\nHO!HO!HO!\nHO!HO!HO!\n
    
    int xxx = 123;
    
    3.times {
        xxx+=2;
        printf("xxx %d\n", xxx);
    }
    printf("xxx %d\n", xxx);

    auto li = ["AAA", "BBB", "CCC"]

    foreach(it, li) {
        puts(it);           // AAA\nBBB\nCCC\n
    }

    auto m = ["AAA":1, "BBB":2, "CCC":]
    
    foreach(key, m) {
        auto item = m[key];

        printf("%s %d\n", key, item);
    }

    puts("ABC".substring(0,1));   // A

    int fd = open("ABC", O_RDONLY).except {
        fprintf(stderr, "can't open ABC");
        exit(1);
    }

    3.times {
        puts("HELLO METHOD BLOCK");
    }

    auto li2 = [1,2,3]

    li.filter { it > 1; }.each {
        printf("%d\n", it);
    }
    
    list<char*>*% li2 = ["1", "2", "3", "4", "5"]

    li2.map { atoi(it); }.filter { it > 3; }.each { printf("%d\n", it); }  // 4\n5\n
    
    if("123 456 789".scan_block(/\d\d\d/) { it.substring(0,1); }.join("") === "147") {
        puts("OK");
    }
    
    [3,1,2,7].filter { it > 2; }.each { printf("%d\n", it); }   // 3\n7\n
    
    auto ma1 = ["AAA":1, "BBB":2, "CCC":3];
    
    if(ma1["AAA"] == 1 && ma1["BBB"] == 2 && ma1["CCC"] == 3) {
        puts("OK");
    }
    
    fopen("AAA", "w").fprintf("ABC\n").fclose();
    
    fopen_block("AAA", "r") {
        it.read().print();
    }
    
    unlink("AAA");
    
    stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n");
    
    int, int, char* t1 = (1,2,"ABC");
    
    xassert("tuple value test1", t1.0 == 1 && t1.1 == 2 && t1.2 === "ABC");
    
    xassert("string equals test1", "ABC" === "ABC");
    xassert("operator overload test", "ABC" * 2 === "ABCABC");
    xassert("operator overload test", "ABC" + "DEF" === "ABCDEF");
    xassert("operator overload test2", [1,2] + [3] === [1,2,3]);
    xassert("operator overload test3", [1,2] * 2 === [1,2,1,2]);
    
    list<int>*% z = [1,2,3];
    
    xassert("operator overload test", z[0] == 1 && z[1] == 2 && z[2] == 3);
    
    z[1] = 22;
    
    xassert("operator overload test", z[0] == 1 && z[1] == 22 && z[2] == 3);
    
    map<char*, int>*% zz = ["AAA":1, "BBB":2, "CCC":3];
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3);
    
    zz["DDD"] = 4
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3 && z["DDD"] == 4);
    
    fun(y:2,x:1);  // print x 1 y 2 z 345
    
    putc('X');     // print X\n
    
    auto_immutable l, m = fun2();
    
    xassert("multiple return", l == 1 && m === "ABC");
    
    "12345\n".write("AAA");
    "12345\n".write("AAA", append:true);
    
    printf("AAA".read());  // print out 12345\n12345\n
    
    int*? a = null;
    
    guard(a) {
        fprintf(stderr, "a is null\n");
        return 1;
    }
    
    //printf("%d\n", *a!);  // exception. printout source code file name and source code line number
    
    int* b = a;         /// no compile error

    auto data = new sData(3,5);
    
    xassert("class test", data.a == 3 && data.b == 5);
    
    auto z = [new sData(1,2), new sData(3,4)];
    
    //printf("%d\n", *z[5]!.a);  // exception. printout source code file name and source code line number
    auto buf = "ABC".to_buffer();
    
    auto p = buf.to_pointer();
    
    p++;
    p++;
    //p++;
    //p++;  // exception. print out the source code file name and line number
    //p++;
    
    printf("CHARACTER %c\n", *p);

    return 0;
}
```

In pipes filter or cmmand lines.

```
> comelang -e 'puts("HELLO WORLD");'
HELLO WORLD
> comelang -e 'puts("HO! * 3);'
HO!HO!HO!
> ls
a.c
b.c
c.c
> ls | comelang -e 'stdin.read().split(/\n/).join(",").puts();'
a.c,b.c,c.c
```

1. It is compatible with C language to some extent. The C preprocessor also works.

1. C言語とある程度互換性があります。Cプリプロセッサーも動きます。

2. The GC less original heap system is suported at the system level. The default heap system is using boehmGC.

2. GCを使わないオリジナルヒープシステムをサポートします。デフォルトではBoehmGCによるヒープ管理をします。

3. It has Generics, Method Generics, inline function, debug info (-g option), and lambda.

3. ジェネリクス、メソッドジェネリクス、インライン関数、デバッグ情報、ラムダをサポートします。

4. It has a mixin-layers system. You can implement your application in layers. Each layer is complete and useful for debugging and porting. A vi clone called vin is implemented as an editor implemented in mixin-layers. Please refer to it because it is in a directory called vin. Also I'm creating a text processing interpreter(zed), 1000 lines shell(shsh) and 1000 lines filer(mf).

4. mixin-layersシステムを備えます。アプリケーションをレイヤーを重ねるように実装できます。各レイヤーは完結しており、デバッグや移植作業でも有効です。mixin-layersで実装されたエディッタとしてvinというviクローンを実装しています。vinというディレクトリの中に入っているので参考にしてください。またテキスト処理系をzedというディレクトリに作っています。shshという1000行シェルもあります。



5. Macro and Reflection. Combination using with its can generate code on compile time. Compile time reflection.

5. マクロとリフレクションを備えます。コンパイルタイムにリフレクションとコード生成が行えます。

6. method block like Ruby

6. Rubyのようなメソッドブロックがあります。

7. It has using regex library(pcre) string libraries.

7. 正規表現を使った文字列ライブラリがあります。

8. For command line pipes, comelang can run C code with -e command option.

8. コマンドラインのパイプのためにcomelangは-eコマンドオプションによってCコードを実行できます。

9. Macro

9. マクロがあります。

10. defer

10. 遅延評価(defer)があります。

11. Default parametor values, and label parametor are supported.

11. デフォルト引数、引数のラベルをサポートします。

12. operator overload.

12. 演算子オーバーロードがあります。

13. Guard from the segmentation of null pointer.

13. null pointerのセグメンテーションを防ぐ機能があります。

14. Protocol(Interface)

14. 動的な関数呼び出しのプロトコルがあります。(インターフェース)

15. Smart pointer

14. 範囲チェックするポインターがあります

# INSTALL

Required libraries are clang, g++, gcc, llvm-dev, pcre-dev, gc-dev, readline-dev, ncurses-dev, make, autoconf, valgrind, gdb, lldb, musl-dev(alpine linux)

For PC, WSL, Raspberry PI OS, MacOS(Darwin) and iSH(iPhone)

WSL, linux, raspberry PI OS, MacOS(Darwin)とiSHでは以下のようにインストールします。

Fast Build. No self host

速いビルドです。セルフホストしません。

```
git clone https://github.com/ab25cq/comelang
cd comelang
bash fast_build.sh
```

With self-host. 

セルフホストします。環境によってはコンパイルが失敗するかもしれません。

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash all_build.sh
```

Install to home directory. For termux(android)

androidのtermuxは/usr/localにインストールできないので以下です。

```
git clone https://github.com/ab25cq/comelang
cd comelang
bash home_build.sh
```

With debug info. 

デバッグ情報を入れたビルドは以下です。

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash debug_build.sh
```

With CMake && Ninja

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash ninja_build.sh
```

compile the compiler, editor, interpreter, shell and console filer with configure and Makefile>

```
bash xfast_build.sh
```

compile the compiler, editor, interpreter, shell and console filer with ninja build.

```
bash xninja_build.sh
```

# Language specifications

It is almost the same as C language. Since it is not POSIX compliant, it is not compatible with C language in every detail, but I think that anyone who can use C language can use it immediately. If you don't use the heap system and do #include <comelang.h>, you can just use it as a C compiler. 

C言語とほぼ一緒です。POSIX準拠じゃないため、あまり細部までC言語とは互換性がありませんが、C言語を使える人ならすぐ使えると思います。
ヒープシステムを使わずに#include <comelang.h>をしなければ、単なるCコンパイラとして使えます。

# HELLO WORLD

```
> vim a.c
#include <stdio.h>

int main()
{
    puts("HELLO WORLD");
    return 0;
}
> comelang a.c
> ./a
HELLO WORLD
```

The compilation result is output to the source file name.ll. The output of the C preprocessor is saved in the source file name .i. It can be used like a normal C compiler. Of course, you can freely use the library in C language. If you add the -g option, debug information will also be output. 

コンパイル結果はソースファイル名.llに出力されます。ソースファイル名.iにCプリプロセッサの出力が保存されます。
通常のCコンパイラと同じように使えます。もちろんライブラリもC言語のものを自由に使えます。-gオプションをつけるとデバッグ情報も出力されます。

If you want to object file only, use -c option.

オブジェクトファイルを出力するためには-cオプションを使ってください。

# Boehm GC libraries

BoehmGCを使ったメモリ管理はデフォルトです。オリジナルのヒープシステムを使う場合は-no-gcをしてください。

With -no-gc option for comelang, disable boehm GC enable original heap system.
The default heap system is using BoehmGC.

# libraries

```
    if(xsprintf("%d", 1 + 1) === "2") {
        puts("OK");
    }
```

xsprintfはフォーマット文字列のメモリーを返す関数です。GCによってアロケートされた文字列を返します。===は内部的にはoperator_equals関数が呼ばれてます。
==はポインターでは同じアドレスを指さないとtrueになりませんが===は同じ値ならtrueを返します。

```
    if("ABC".reverse() === "CBA") {
        puts("OK");
    }
```

reverse()は文字列を逆順にした文字列を返します。

```
    if("ABC".substring(0,1) === "A") {
        puts("OK");
    }
```

substring()は範囲文字列を返します。-1だと末尾を-2だと末尾から一文字目の意味となります。２つ目の引数の文字は含みません。

listの使い方は以下です。

```
    list<char*>* li = new list<char*>();
    
    li.push_back("AAA").push_back("BBB").push_back("CCC");
    
    if(li === ["AAA", "BBB", "CCC"]) {
        puts("OK");
    }
```

new list<char*>();はnew list<char*>.initialize()の省略形です。

push_backはリストに要素を追加します。["AAA", "BBB", "CCC"]はリストの値の表現です。

```
    [7.3.2.8.5,9].sort_default() === [2,3,5,7,8,9]
```

sort_default()は内部的にはcompareが呼ばれているためcompareを実装する必要があります。

```
    strcut sData {
        int value;
    };
    
    int sData*::compare(sData* left, sData* right)
    {
        if(left.value < right.value) {
            return -1;
        }
        else if(left.value > right.value) {
            return 1;
        }
        else {
            return 0;
        }
    }
```

このようにすればsDataもsort_defaultできます。

```
    [1,2,3,4,5].filter { it > 2 }.map { xsprintf("%d", it) + "A" } === ["3A", "4A", "5A"]
```

filterは式が真となる要素を集めたlistを返します。mapは全ての要素を変換します。it, it2, it3がメソッドブロックの引数となります。
メソッドブロックは親のブロックの変数にもそのままアクセスできます。

```
    int sum = 0;
    [1,2,3,4,5,6].each {
        sum += it;
    }
    sum.to_string().puts();
```

1,2,3,4,5,6の総和を返します。

```
    [1,2] + [3,4] === [1,2,3,4]
```

```
    [1,2] * 2 === [1,2,1,2]
```

```
    immutalbe list<char*>* li = ["AAA", "BBB"];
    
    li.push_back("CCC");  /// compile error
```

immutable指定すると値が変化しないことを保証します。push_backはmutable指定されたメソッドのためコンパイルエラーとなります。

foreachは全ての要素にイテレータでアクセスします。

```
    int sun = 0;
    foreach(it, [1,2,3,4,5]) {
        sum += it;
    }
    sum.printf("sum %d\n");
```

```
    [1,2,3,4,5].to_string().puts();
```

listは文字列に変換できます。[1,2,3,4,5]が出力されるはずです。要素はto_string()が実装されている必要があります。
int, char*, string, float,doubleなどはto_string()が実装されています。

```
    [1,2,3].length() == 3
```

```
    auto li = [1,2,3];
    
    li[0] == 1 && li[1] == 2 && i[2] == 3 && li[-1] == 3 && li[99999] == 0
```

autoは型推論します。要素は-1は末尾を表します。範囲外のアクセスは0クリアされた値が返されます。

```
    [1,2,3].insert(position:0, item:4) === [4,1,2,3]
```

引数ラベルも使えます

```
    [1,2,3,4,5].delete(head:0,tail:2) === [3,4,5]
```

```
    [1,2,3].replace(position:1, 999) === [1,999,3]
```

```
    [1,2,3,4].find(2) == 1
```

```
    [1,2,3,4].sublist(begin:1, tail:3) === [2,3]
```

```
    [1,2,3].reverse() === [3,2,1]
```

```
    [7,3,7,2,8,5,5].sort_default().uniq() === [2,3,5,7,8]
```

```
    [1,2,3].map { xsprintf("%d", it }.join("+") === "1+2+3"
```

vectorもあります。概ねリストの方がよく使うと思います。vectorはランダムアクセスが速いです。
値の表現はありません。

```
    auto v = new vector<int>();
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    if(v[0] == 1 && v[1] == 2 && v[2] == 3)
    {
        puts("OK");
    }
    
    auto li = v.to_list();
```

mapもあります。

```
    auto m = new map<char*,int>();
    
    m.insert("AAA", 1).insert("BBB", 2).insert("CCC", 3);
    
    if(m === ["AAA":1, "BBB":2, "CCC":3]) {
        puts("OK");
    }
````

mapの要素になる為には型にハッシュ値の計算の為にget_hash_keyの定義が必要です。

```
    struct sData
    {
        int value;
    };
    
    unsigned int sData*::get_hash_key(sData* self)
    {
        return self.value;
    }
```

```
    ["AAA":1, "BBB":2] + ["CCC":3] === ["AAA":1, "BBB",2, "CCC":3]
```

```
    ["AAA":1, "BBB":2].to_string() === "[AAA:1,BBB:2]"
```

```
    auto ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    
    ma === ["AAA":1, "BBB":2, "CCC":3];
```

```
    auto ma = ["A":1, "B":2, "C":3];
    
    ma["A"] == 1 && ma["B"] == 2 && ma["C"] == 3 && ma["D"] == 0
```

```
    ["A":1, "B":2, "C":3].find("B") // => true
```

```
    ["A":1, "B":2, "C":3].keys() === ["A", "B", "C"]
```

ただしこれはtrueになるとは限りません。mapは順不同に入っているため戻り値が["B", "A", "C"]などとなるかもしれないからです。


```
    ["A":1, "B":2, "C":3].values() === [1,2,3]
```

```
    ["A":1, "B":2, "C":3].length() == 3
```

tupleもあります。

```
    tuple3<char*,int, double>* t = new tuple3<char*,int,double>();
    
    t.v1 = "AAA";
    t.v2 = 1;
    t.v3 = 1.1;
    
    t === ("AAA", 1, 1.1)
```

```
    auto t = (1,"AAA", 1.1);
    
    t.1 == 1 && t.2 === "AAA" && t.3 == 1.1
```

bufferもあります。

```
    auto buf = new buffer();
    
    buf.append_str("AAA").append_str("BBB");
    
    buf.to_string() === "AAABBB"
```



# String libraries

sample

```
#include <comelang.h>

int main()
{
    xassert("char_match test", "ABC".match(/A/));
    xassert("char_index test", "ABC".index("B", -1) == 1);
    xassert("char_rindex test", "ABCABC".rindex("B", -1) == 4);
    xassert("char_index_regex", "ABC".index_regex(/B/, -1) == 1);
    xassert("char_rindex_regex", "ABCABC".rindex_regex(/B/, -1) == 4);

    string str = string("ABC");

    str.replace(1, 'C');

    xassert("char_replace", str === "ACC"))
    xassert("char_multiply", "ABC".multiply(2) === "ABCABC");

    xassert("char_sub", "ABC".sub(/B/, "C" === "ACC");

    xassert("char_sub_count", "ABCABCABC".sub_count(/B/g, "C", 2) === "ACCACCABC");

    auto li = "ABC".scan(/./);

    xassert("char_scan", li[0] === "A" && li[1] === "B" && li[2] === "C");

    auto li2 = "A,B,C".split(/,/);

    xassert("char_split", li2[0] === "A" && li2[1] === "B" && li2[2] == "C");

    auto li3 = "A,B,C".split_char(',');

    xassert("char_split_char", li3[0] === "A" && li3[1] === "B" && li3[2] === "C");
    
    auto li4 = "A,,B,,C".split_str(",,");

    xassert("char_split_str", li4[0] === "A" && li4[1] === "B" && li4[2] === "C");
    
    auto li5 = "A,,B,,C".split_maxsplit(/,,/, 1);

    xassert("char_split_maxsplit", li5[0] === "A" && li5[1] === "B,,C");

    xassert("char_delete", "ABC".delete(0,1) === "BC);

    xassert("wchar_substring", wstring("ABC").substring(0,1) === wstring("A"));
    
    auto li6 = "A,B,C".split_str(",");
    
    xassert("join", li6.join(" ") === "A B C");
    
    auto li7 = "A,B,C".split(/,/g);
    
    xassert("split test", li7[0] === "A" && li6[1] === "B" && li7[2] === "C");
    xassert("index_count test", "ABCABC".index_count("ABC", 2, -1) == 3);
    xassert("index_regex_count test", "ABCABC".index_regex_count(/ABC/g, 2, -1) == 3);
    xassert("rindex_count test", "ABCABC".rindex_count("ABC", 2, -1) == 0);
    xassert("rindex_regex_count test", "ABCABC".rindex_regex_count(/CBA/g, 2, -1) == 0);
    xassert("rindex_regex test", "ABCABC".rindex_regex(/CBA/, -1) == 5);
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 3));
    xassert("match_count test", "ABCABCABC".match_count(/ABC/, 4) == false);
    xassert("sub_count test", "ABCABCABC".sub_count(/ABC/g, "X", 2) === "XXABC");
    xassert("sub_block test", "ABCABCABC".sub_block(/ABC/g) { string("X"); } === "XXX");
    xassert("sub_block_count test", "ABCABCABC".sub_block_count(/ABC/g, 2) { string("X"); } === "XXABC");
    xassert("sub_block_count test2", "ABCABCABC".sub_block_count(/ABC/g, 2) { it.substring(0,1); } === "AAABC");
    xassert("scan_block test", "123 456 789".scan_block(/\d\d\d/g) { it.substring(0, 1); }.join("") === "147");
    xassert("scan_block_count test", "123 456 789".scan_block_count(/\d\d\d/g, 2) { it.substring(0, 1); }.join("") === "14");
    
    auto li8 = "ABC".scan(/./);
    
    xassert("scan test", li8[0] === "A" && li8[1] === "B" && li8[2] === "C");
    
    xassert("to_buffer test", "ABC".to_buffer().append_str("DEF").to_string() === "ABCDEF");
    xassert("split block test", "ABC,DEF,GHI".split_block(/,/) { it.substring(0,1); }.join("") === "ADG");
    xassert("split block test", "ABC,DEF,GHI".split_block_count(/,/, 2) { it.substring(0,1); }.join("") === "AD");
    xassert("regex test", "ABC".scan(/./).join("") === "ABC");
    
    xassert("regex equals test", /aaa/g === /aaa/g);
    
    list<string>*% group_strings = new list<string>();
    
    int num_group_strings_in_regx = 0;
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+):/, group_strings, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test", group_strings[0] === "id" && group_strings[1] === "mail" && num_group_strings_in_regx == 1);
    
    list<string>*% group_strings2 = new list<string>();
    
    "id: abc mail: abc@icloud.com".scan_group_strings(/(\w+): ([\w@.]+)/, group_strings2, &num_group_strings_in_regx);
    
    xassert("regex scan group strings test2", group_strings2[0] === "id" && group_strings2[1] === "abc" && group_strings2[2] === "mail" && group_strings2[3] === "abc@icloud.com" && num_group_strings_in_regx == 2);

    return 0;
}
```

# Default parametor values, parametor labels

```
#include<stdio.h>

int fun(int x = 123, int y = 345, int z = 456) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

struct sData 
{
    int x;
    int y;
    int z;
};

int sData*::fun(sData* self, int x = 123, int y = 345, int z = 456)
{
    self.x = x;
    self.y = y;
    self.z = z;
}

void sData*::show(sData* self)
{
    printf("x %d y %d z %d\n", self.x, self.y, self.z);
}

int main(int argc, char** argv) 
{
    fun();           // x 123 y 345 z 456 are outputed
    fun(y:2);        // x 123 y 2 z 456
    
    fun(y:1, x:3);   // x 3 y 1 z 456
    
    fun(1);          // x 1 y 345 z 456
    fun(1,2);        // x 1 y 2 z 456
    
    sData data;
    (&data).fun(1,2,3);
    (&data).show();   // x 123 y 345 z 456
    
    (&data).fun(y:2); // x 123 y 2 z 456
    (&data).show();   // x 123 y 2 z 456
    
    (&data).fun(1);
    (&data).show();   // x 1 y 345 z 456
    
    return 0;
}
```

# Macro

```
macro vector
{
    export VALUE=$PARAMS
    cat <<EOS2
auto v = new vector<int>();

v.push_back(1);
v.push_back(2);
v.push_back($VALUE);
v
EOS2
}

macro list
{
    cat <<EOS3
auto li = new list<int>();

li.push_back(1);
li.push_back(2);
li.push_back(3);
li
EOS3
}

int main()
{
    auto v = vector@(7);

    xassert("macro test", v.item(0, -1) == 1 && v.item(1, -1) == 2 && v.item(2, -1) == 7);
    
    auto li = list@();
    
    xassert("macro test2", li.item(0, -1) == 1 && li.item(1, -1) == 2 && li.item(2, -1) == 3 && li.length() == 3);

    return 0;
}
```

The last statment value is the result value of macro.

マクロの最後の文の値はマクロの戻り値となります。

# defer

```
inline int fun()
{
    defer puts("fun finish");

    puts("in fun");

    return 123;
}

int fun2()
{
    defer puts("fun2 finish");

    puts("in fun2");

    if(true) {
        return 123;
    }
}

int main()
{
    defer puts("main FINISH");

puts("before fun");
    fun();

puts("before fun2");
    fun2();
puts("after fun2");

    return 0;
}
```

result is below:

```
before fun
in fun
before fun2
in fun2
fun2 finish
after fun2
main FINISH
fun finish
```

# -e command option

```
> ls
a.c
b.c
c.c
> ls | comelang -e 'stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n")'
[a.c,b.c,c.c]
> ls | comelang -e 'stdin.readlines().map { it.strip(); }.join(",").puts()'
a.c,b.c,c.c
> ls | comelang -e 'stdin.readlines().map { it.strip(); }.join(",").print()'
a.c,b.c,c.c
```

# extra, file

```
list<string>*% FILE*::readlines(FILE* f);
string FILE*::read(FILE* f);
FILE* FILE*::fprintf(FILE* f, const char* msg, ...);
void FILE*::fclose(FILE* f);

string char*::puts(char* self);
string char*::print(char* self);
string char*::printf(char* self, const char* msg);
int int::printf(int self, const char* msg);
char char::putc(char self);
void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f));

string char*::strip(string self);
```


```

stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n");

stdin.read().split(/\n/).join(",").puts();

fopen("AAA", "w").fprintf("ABC\n").fclose();
fopen_block("AAA", "r") {
    it.read().print();
}
```

# mutable, immutable

変数はimmutableを指定することができます。immutableを指定された変数はmutable指定されたメソッドを呼び出すことができません。
例えばlist<T>::push_backはmutable指定されています。そのためimmutable list<int>*などと宣言された変数にpush_backを呼び出すとコンパイルエラーとなります。

immutableの意味ですが、immutable指定された変数は状態が変わらないことを保証します。equalsの結果は変化しません。
list, vector, map, bufferもそのように設計されています。immutableのメリットですが関数の引数にオブジェクトを渡す場合immutable指定しておけば
その引数の状態を変えないことを保証できます。

immutableとmutableは相互に代入することができます。ただ、immutable指定された変数にmutalbe指定された関数が呼び出せないだけです。

The variable can be immutable. Variables with immutable specified cannot call methods with mutable specified.

For example, list <T> :: push_back is mutable. Therefore, calling push_back on a variable declared as immutable list <int> * will result in a compile error.

It means immutable, but immutable guarantees that the specified variable does not change its state. The result of equals does not change. 
list, vector, map, buffer are also designed that way. It is a merit of immutable, but if you specify immutable when passing an object as an argument of a function, 
You can be assured that the state of that argument will not change.

immutable and mutable can be assigned to each other. However, the function specified by mutalbe cannot be called for the variable specified by immutable.


```
struct vector<T> 
{
    T* items;
    int len;
    int size;

    int it;
};

impl vector<T> 
{
    vector<T>* initialize(vector<T>* self);
    void push_back(vector<T>* self, T item) mutable;
}
```

```
immutable vector<int>* li = [1,2,3].to_immutable();
li.push_back(4);
```

はコンパイルエラーとなります。

is compile error.

# operator overloads

```
string char*::operator_mult(char* str, int n);
string string::operator_mult(char* str, int n);
bool char*::operator_equals(char* left, char* right);
bool string::operator_equals(char* left, char* right);

    "ABC" * 3  // => "ABCABCABC"
    [1,2] * 3  // => [1,2,1,2,1,2]
    "ABC" === "ABC" // => true
    "ABC !== "DEF" // => true
    [1,2] + [3] // => [1,2,3]
    
    auto ma1 = ["AAA":1, "BBB":2]
    
    xassert("map test", ma1["AAA"] == 1)
    ma1["CCC"] = 3
```

```
+ operator_add
- operator_sub
* operator_mult
/ operator_div
% operator_mod
=== operator_equals
!== operator_not_equals
> operator_gt
>= operator_gteq
< operator_le
<= operator_leeq
[x] = y operator_store_element
[x]  operator_load_element
! operator_logical_denial
<< operator_left_shift
>> operator_right_shift
& operator_and
^ operator_xor
| operator_or
~ operator_commplement
```

# Guarding from the segmetation of null poiner


```
    //int* a = null;   /// compile error
    
    int*? a = null;
    
    //printf("%d\n", *a!);   // exception. print out the file name of source code and the line number
    
    int b = 123;
    
    // a = &b;  // compile error
    
    a = nullable &b;
    
    printf("%d\n", *a!);  // null check and get the value of a
    
    // b = *a;  /// compile error
    
    b = *(nonullable a);
```

```
#include <comelang.h>

int main(int argc, char** argv)
{
    int*? a = null;
    
    guard(a) {
        fprintf(stderr, "a is null\n");
        return 1;
    }
    
    int* b = a;
    
    return 0;
}
```


# Protocol

```
#include <comelang.h>

protocol sBase
{
    void (*show)(protocol_obj_t self);
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
};

sChildA*% sChildA*::initialize(sChildA*% self)
{
    self.x = 1;
    self.y = 2;
    self.z = 3;
    self.str = string("ABC");

    return self;
}

void sChildA*::show(sChildA* self)
{
    printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
}

struct sChildB
{
    int X;
    int Y;
    int Z;
};

sChildB*% sChildB*::initialize(sChildB*% self)
{
    self.X = 111;
    self.Y = 222;
    self.Z = 333;

    return self;
}

void sChildB*::show(sChildB* self)
{
    printf("X %d Y %d Z %d\n", self.X, self.Y, self.Z);
}

int main(int argc, char** argv)
{
    sChildA*% data = new sChildA();
    sChildB*% data2 = new sChildB();
    
    sBase*% interface = new sBase(clone data);
    interface.show->();
    
    interface.protocol_obj = clone data2;
    interface.show->();
    
    vector<sBase*%>*% v = new vector<sBase*%>();
    
    v.push_back(new sBase(new sChildA()));
    v.push_back(new sBase(new sChildB()));
    
    foreach(it, v) {
        it.show->();
    }
    
    vector<sBase*%>*% v2 = clone v;
    
    foreach(it, v2) {
        it.show->();
    }
    
    return 0;
}

```

# mixin-layers system

mixin-layersとはレイヤーを重ねるようにアプリケーションを作るプログラミング技法で、仕組み的には関数の上書きを許して、上書きされた関数を上書きした関数から呼び出せるというものです。

Mixin-layers is a programming technique that creates an application so that layers are layered. The mechanism is to allow overwriting of a function and call the overwritten function from the overwritten function.

```
#include <stdio.h>

int fun(char* str) version 1
{
    puts(str);
    return 1;
}

int fun(char* str) version 2
{
    int n = inherit(str);

    return n + 1;
}

int fun(char* str) version 3
{
    int n = inherit(str);

    return n + 1;
}

int main()
{
    if(fun("HELLO MIXIN-LAYERS") == 3) {
        puts("OK");
    }

    return 0;
}
```

# Parallel Processing

It can be executed in parallel with the come function name.

come 関数名で並列実行できます。

```
void fun(int n) 
{
    puts("HELLO PARALLEL WORLD");
    printf("%d\n", n);
}

int main()
{
    come fun(123);

    come join;

    return 0;
}
```

Channels add @ to the variable name.

チャネルは変数名に@をつけます。

```
void fun(int@ n)
{
    @n = 123;
}

int main()
{
    int@ m;
    come fun(m);

    printf("%d\n", @m);

    come join;

    return 0;
}
```

@mはfunの@n = 123が実行されるまでブロックされます。

複数のチャネルを同時に待つにはselectを使います。selectはブロックします。

@m is blocked until @ n = 123 of fun is executed. 
Use select to wait for multiple channels at the same time. select blocks.

```
void fun(int@ n)
{
    sleep(1);
    @n = 123;
}

void fun2(int@ m)
{
    sleep(2);
    @m = 234;
}

int main()
{
    int@ n;
    int@ m 

    come fun(n);
    come fun(m);

    while(true) {
        come select {
            n {
                printf("n %d\n", @n);
            }

            m {
                printf("m %d\n", @m);
            }
        }
    }

    come join;

    return 0;
}
```

polling select

```
void fun(int@ n)
{
    sleep(1);
    @n = 123;
}

void fun2(int@ m)
{
    sleep(2);
    @m = 234;
}

int main()
{
    int@ n;
    int@ m 

    come fun(n);
    come fun(m);

    while(true) {
        come pselect {
            n {
                printf("n %d\n", @n);
            }

            m {
                printf("m %d\n", @m);
            }

            default {
                puts("waiting....");
            }
        }
    }

    come join;

    return 0;
}
```

# Annotation

```
int fun(bool flag) 
{
    if(flag) {
        puts("TRUE");
    }
    else {
        puts("FALSE");
    }
}

int main()
{
    fun(false`flag);

    return 0;
}
```

`[a-zA-Z][a-zA-Z_0-9]* is a comment of expression.

# Reflection

```
> vim a.c
struct sB {
    int a;
    char* b;
    struct sB* c;
};

int main() {
    sB b;
    b;
> comelang type a.c
struct sB
#0 int a
#1 char* b
#2 struct sB*
```

comelang type file name outputs the type of last expression and the type inner contents. It's useful for reflection. You will make a program output a program with any script languaged or comelang its self.

comelang type ファイル名で最後の式の型とその内容を出力することができます。これはリフレクションで便利です。プログラムを生成するプログラムを任意のスクリプト言語やcomelang自身で作ることができるでしょう。

```
> vim a.c
int gGlobal1;
int gGlobal2;
> comelang global a.c
gGlobal1 int
gGlobal2 int
```

```
> vim a.c
int fun(int a, int b)
{
    return a + b;
}

int fun2()
{
    return 123;
}
> comelang function a.c
fun extern 0 var args 0 gnerics function 0 num params 2
a int
b int
result type int
fun2 extern 0 var args 0 gnerics function 0 num params 0
result type int
```

```
> vim a.c
struct sA 
{
    int a;
    int b;
};

enum eEnumA { kA, kB };
> comelang class a.c
struct sA
#0 int a
#1 int b
enum eEnumA
kA 0
kB 1
```

```
> vim a.c
typedef int tType;
typedef int tType2;
> comelang typedef a.c
tType int
tType2 int
```

9. MACRO

~~~
```
ruby <<EOS
    puts("int gGlobal2;");
EOS
```
~~~

The output of the enclosed code is pasted into the source code. With this and reflection, you'll be able to generate code with reflection at compile time.

囲まれたコードの出力がソースコードに貼り付けます。これとリフレクションを使えばコンパイルタイムにリフレクションでコードを生成できるでしょう。

Do not expand macros with the -n option.

-nオプションを使うとマクロを展開しません。

Compile Time Reflection and code generation is below:

~~~
> vim g.c
int gGlobal;


```
ruby <<EOS
    type = "`comelang -n global $SOURCE_NAME | grep gGlobal`".split()[1];
    puts(type + " gGlobal2;");
EOS
```
> comelang global g.c
gGlobal int
gGlobal2 int
~~~

SOURCE_NAMEという環境変数にコンパイル中のソースファイル名が入ってます。

# Original Heap System

The cost of learning the library is low, but the heap system will take some time to learn. Basically, use valgrind to check if a memory leak is occurring. You can also find out illegal memory access by using valgrind. You can also use the -g option to find out the location of memory leaks in the source code and unauthorized memory access in the source code. The basic rule is that rvalues (temporary heap generation that is not assigned to variables) are automatically freed.

ライブラリの学習コストは低いですが、ヒープシステムは学習するのに少し時間がかかるでしょう。基本的にメモリーリークが起こっているかの確認はvalgrindを使ってください。
また不正なメモリアクセスもvalgrindを使えば分かるでしょう。-gオプションを使うとソースコードでのメモリーリークや不正なメモリアクセスのソースコードでの位置も分かります。

基本的なルールですが、右辺値（変数に代入されない一時的なヒープの生成)は自動的にfreeされます。

```
puts(xsprintf("1 + 1 == %d\n", 1 + 1));
```

xsprintf uses the heap to generate memory, but since it is an rvalue, it is automatically freed after puts. It is the timing when the rvalue is freed, but after one sentence is executed. If method chains are used, method chains can be performed because the memory of the rvalue heap exists until the execution of one sentence is completed. Probably. The next rule is that the function that creates the heap assigned to the variable with% and the memory such as new will be freed after the block escapes.

xsprintfはヒープを使ったメモリが生成されますが、右辺値なので、puts後に自動的にfreeされます。右辺値がfreeされるタイミングですが、1文が実行された後です。
メソッドチェインしても１文の実行が終わるまで右辺値のヒープのメモリは存在しているためメソッドチェインを行うことも可能でしょう。

次のルールは%をつけた変数に代入されたヒープを生成する関数やnewなどのメモリはブロックの脱出後にfreeされます。

```
char*% str = new char[123];

strncpy(str, "AAA", 123);

puts(str);
```

char* strとするとコンパイルエラーとなります。
char*%と書くのがめんどくさい場合はvarを使ってください。右辺値の型が型推論されて宣言されます。

```
auto str = new char[123];

strncpy(str, "ABC", 123);

puts(str);
```

If you want to manage the memory yourself, add borrow to declare heap memory that is not an rvalue, and then assign it to a pointer without%.

自分でメモリを管理したい場合はborrowをつけて右辺値じゃないヒープメモリと宣言してから%をつけないポインタに代入してください。

```
char* str = borrow char str[123];

strncpy(str, "ABC", 123);

puts(str);

delete str;
```

If you add borrow, it will be excluded from the target of automatic free of rvalue, and automatic free of rvalue will not be done. Assignment between variables with% added to the type name causes a transfer of ownership.

borrowをつけると右辺値の自動freeの対象から外されて、右辺値の自動freeがされないようになります。

型名に%をつけた変数同士の代入は所有権の移動が起こります。

```
    char*% a = new char[128];
    char*% b = a;
```

It is b that is freed. a cannot be used after char*% b. 

freeされるのはbです。aはchar*% b以降使えなくなります。

次は関数の場合です。関数の引数に%がついていた場合はヒープメモリの管理は関数側に移ります。逆に%をつけていない場合は単にメモリの参照をすることとなります。

```
void fun(char* str)
{
    puts(str);
}

int main()
{
    char*% str = new char[123];
    
    strncpy(str, "ABC", 123);

    fun(str);

    return 0;
}
```

In this case, str is freed before the return of the main function. You can still use str after calling fun.

この場合はmain関数のreturnの前にstrがfreeされます。funの呼び出し後もstrは使えます。

```
void fun(char*% str)
{
    puts(str);
}

int main()
{
    char*% str = new char[123];
    
    strncpy(str, "ABC", 123);

    fun(str);

    return 0;
}
```

In this case, str is freed in fun. You cannot use str after calling fun. The same rule applies when a heap is temporarily created with a function argument.

この場合はfunの中でstrがfreeされます。funを呼び出した後はstrは使えません。

関数の引数で一時的にヒープを生成した場合も同様のルールとなります。


```
void fun(char* str)
{
    puts(str);
}

int main()
{
    fun(string("AAA"));
}
```

string is a function that returns a char *% type string. In this case, the return value (rvalue) of string is freed after calling fun. string is defined as follows.

stringはchar*%型の文字列を返す関数です。この場合はfunの呼び出し後にstringの戻り値(右辺値)がfreeされます。

stringは以下のように定義されています。

```
typedef char*% string;

string string(char* str)
{
    int len = strlen(str) + 1;
    char* result = (char*)calloc(len, sizeof(char));

    strncpy(result, str, len);

    return dummy_heap result;
}
```

dummy_heapは普通のポインタに%を付与します。

便利なstring関数としては以下があります。

dummy_heap gives% to ordinary pointers. Some useful string functions are:

```
string xsprintf(char* msg, ...);
string char*::reverse(char* str);
string char*::substring(char* str, int head, int tail);
```

使い方は

Usage is bellow:

```
if(xsprintf("%d", 2) ===, "2") {
    puts("OK");
}
if("ABC".reverse() === "CBA")) {
    puts("OK");
}

if("ABC".substring(0,1) === "A") {
    puts("OK");
}
```

It will be. It is called when "object type name_method name" is called as an OOP-like function. In other words, "ABC" .reverse () is the same as calling char_reverse ("ABC") or char::reverse("ABC"). Another important point is that the memory allocated in the heap is called finalizer according to the type name.

となります。OOP的な機能として"オブジェクトの型名_メソッド名"がメソッドコールした場合は呼ばれます。
つまり、"ABC".reverse()はcharp_reverse("ABC")もしくはchar*::reverse("ABC")を呼び出したことと同じことです。

もう一つ重要な点はヒープで確保されたメモリは型名に応じてfinalizerが呼ばれることです。

```
struct sData
{
    string value1;
    string value2;
};

sData*% sData*::initialize(sData*% self)
{
    self.value1 = string("ABC");
    self.value2 = string("DEF");
    
    return self;
}

int main(int argc, char** argv)
{
    sData*% d = new sData.initialize();

    printf("%s %s\n", d.value1, d.value2);

    return 0;
}
```

sData*::finalizeではvalue1とvalue2がdeleteされます。自動的に定義されます。


```
struct sData
{
    int value1;
    int value2;
};

sData*% sData*::initialize(sData*% self)
{
    self.value1 = 123;
    self.value2 = 234;

    return self;
}

int main(int argc, char** argv)
{
    sData*% d = new sData.initialize();

    printf("%d %d\n", d.value1, d.value2);

    sData*% e = clone d;

    printf("%d %d\n", e.value2, e.value2);

    return 0;
}
```

sData*::cloneも自動的に定義されます。浅いコピーでなく深いコピーです。

構造体やunionも普通の変数と同じルールです。

```
struct sA {
   int*% a;
};

int main()
{
    int*% a = new int;
    *a = 5;

    sA*% data = new sA;
    data.a = a;  // the owner of a is changed

    return 0;
}
```

In this case, data.a will be freed when data will be freed. 
a will not be freed.

みたいなケースです。この場合、dataがfreeされるタイミングでdata.aがフリーされます。
aはfreeされません。

From version 1.2.4, automatically defined finalize and clone method.

バージョン 1.2.4よりfinalizeとcloneメソッドとequalsメソッドは自動的に定義されるようになりました。

# Generics(Original Heap version)

Generics is a code generation method. I have implemented it, but basically I am making it for the collection library of the basic library. We do not recommend using Generics for your own application code. This is because the code be comelang complicated. If you want to make your own library, you can use it. The vector is defined as follows.

Genericsはコード生成方式です。実装してますが、基本的に基本ライブラリのコレクションライブラリ用に作っています。
自作のアプリケーションコードにGenericsを使うことはお勧めしません。コードが複雑になるためです。
ライブラリを自作したい場合には使ってもいいと思います。

vectorは以下のように定義されています。

```
struct vector<T> 
{
    T&* items;
    int len;
    int size;

    int it;
};

impl vector<T> 
{
    vector<T>*% initialize(vector<T>*% self);
    void finalize(vector<T>* self);
    void push_back(vector<T>* self, T item);
    T& item(vector<T>* self, int index, T& default_value);
    bool equals(vector<T>* left, vector<T>* right);
    bool replace(vector<T>* self, int index, T value);
    int find(vector<T>* self, T& item, int default_value);
    int length(vector<T>* self);
    void reset(vector<T>* self);
    T& begin(vector<T>* self);
    T& next(vector<T>* self);
    bool end(vector<T>* self);

    list<T>*% to_list(vector<T>* self);
}

#define foreach(o1, o2) for(auto _obj = nomove (o2), auto o1 = _obj.begin(); !_obj.end(); o1 = _obj.next())
```

The & in the type name removes% from the generic type name. Even if T has a%, it is treated as a pointer. managed removes% from variables with%. The usage is as follows.

型名の&はジェネリクスの型名から%を消すものです。Tに%がついていてもポインタとして処理されます。managedは%がつけられた変数から%を取り除きます。

使い方は以下です。

```
vector<int>*% v = new vector<int>();

v.push_back(1);
v.push_back(2);
v.push_back(3);

if(v.length() == 3 && v[0] == 1 && && v[1] ==2 && v[2] == 3 && v.item(10000, -1) == -1) {
    puts("OK");
}

foreach(it , v) {
    printf("%d\n", it);
}
```

-1 of item is the default value. If index is out of range, the default value is returned. foreach is a macro that accesses all elements. list is below. 

itemの-1はデフォルト値でもしindexが範囲外ならデフォルト値を返します。foreachは全ての要素にアクセスするマクロです。

listは以下です。

```
impl list <T>
{
    list<T>*% initialize(list<T>*% self);
    void finalize(list<T>* self);
    list<T>*% clone(list<T>* self);
    int length(list<T>* self);
    void push_back(list<T>* self, T item) ;
    T& item(list<T>* self, int position, T& default_value);
    void insert(list<T>* self, int position, T item);
    void reset(list<T>* self) ;
    void delete(list<T>* self, int head, int tail);
    void replace(list<T>* self, int position, T item);

    int find(list<T>* self, T& item, int default_value) ;
    list<T>*% sublist(list<T>* self, int begin, int tail) ;

    list<T>*% reverse(list<T>* self);
    list<T>*% merge_list(list<T>* left, list<T>* right, int (*compare)(T&,T&));
    list<T>*% merge_sort(list<T>* self, int (*compare)(T&,T&));
    list<T>*% sort(list<T>* self, int (*compare)(T&,T&));
    list<T>*% sort_default(list<T>* self);
    list<T>*% uniq(list<T>* self);
    bool equals(list<T>* left, list<T>* right);
    T& begin(list<T>* self);
    T& next(list<T>* self);
    bool end(list<T>* self);
}
```

Usage is almost the same as vector.

使い方はvectorとほぼ同じです。

```
list<int>*% l = new list<int>();

l.push_back(1);
l.push_back(2);
l.push_back(3);

if(l.length() == 3 && l[0] == 1 && l[1] == 2 && l[2] == 3 && l.item(1000, -1) == -1) {
    puts("OK");
}

foreach(it, l) {
    printf("%d\n", it);
}
```

```
list<int>*% l = [1,2,3];

if(l.length() == 3 && l[0] == 1 && l[1] == 2 && l[2] == 3 && l.item(1000, -1) == -1) {
    puts("OK");
}

foreach(it, l) {
    printf("%d\n", it);
}
```

The difference from vector is that there is an insert for element insertion. insert is fast. Instead, item is slow. (Random access). foreach will not be too slow. Use sort as follows. 

vectorと違う点は要素の挿入のinsertがある点です。insertは高速です。その代わりitemは遅いです。（ランダムアクセス)。foreachはそれほど遅くないでしょう。

sortは以下のように使います。

```
int main(int argc, char** argv)
{
    list<int>*% l = [7,1,2];

    list<int>*% l2 = l.sort_default();

    if(l2 === [1,2,7]) {
        puts("OK");
    }
}
```

The map is below.

mapは以下です。

```
impl map <T, T2>
{
    map<T,T2>*% initialize(map<T,T2>*% self);
    T2& at(map<T, T2>* self, T& key, T2& default_value);
    void rehash(map<T,T2>* self) ;
    void insert(map<T,T2>* self, T key, T2 item) ;
    map<T, T2>*% clone(map<T, T2>* self);
    bool find(map<T, T2>* self, T& key);
    bool equals(map<T, T2>* left, map<T, T2>* right);
    int length(map<T, T2>* self);
    T& begin(map<T, T2>* self);
    T& next(map<T, T2>* self);
    bool end(map<T, T2>* self) ;
}
```

使い方は

Usage is bellow:

```
map<char*, int>*% m = new map<char*, int>();

m.insert("AAA", 1);
m.insert("BBB", 2);
m.insert("CCC", 3);

if(m.length() == 3 && m["AAA"] == 1 && m["BBB"] == 2 && m["CCC"] == 3 && m.at("DDD", -1) == -1) {
    puts("OK");
}
```

```
map<char*, int>*% m = ["AAA":1, "BBB":2, "CCC":3]

if(m.length() == 3 && m["AAA"] == 1 && m["BBB"] == 2 && m["CCC"] == 3 && m.at("DDD", -1) == -1) {
    puts("OK");
}
```

It will be. There is also a tuple. It is defined as follows.

となります。

tupleもあります。以下のように定義されています。

```
struct tuple1<T>
{
    T v1;
};

impl tuple1 <T>
{
    tuple1<T>*% clone(tuple1<T>* self);
    void finalize(tuple1<T>* self)
    bool equals(tuple1<T>* left, tuple1<T>* right);
}

struct tuple2<T, T2>
{
    T v1;
    T2 v2;
};

impl tuple2 <T, T2>
{
    tuple2<T,T2>*% clone(tuple2<T, T2>* self);
    void finalize(tuple2<T, T2>* self);
    bool equals(tuple2<T, T2>* left, tuple2<T, T2>* right);
}

struct tuple3<T, T2, T3>
{
    T v1;
    T2 v2;
    T3 v3;
};

impl tuple3 <T, T2, T3>
{
    tuple3<T,T2, T3>*% clone(tuple3<T, T2, T3>* self);
    void finalize(tuple3<T, T2, T3>* self)
    bool equals(tuple3<T, T2, T3>* left, tuple3<T, T2, T3>* right);
}

struct tuple4<T, T2, T3, T4>
{
    T v1;
    T2 v2;
    T3 v3;
    T4 v3;
};

impl tuple4 <T, T2, T3, T4>
{
    tuple4<T,T2, T3, T4>*% clone(tuple4<T, T2, T3, T4>* self);
    void finalize(tuple4<T, T2, T3, T4>* self);
    bool equals(tuple4<T, T2, T3, T4>* left, tuple4<T, T2, T3, T4>* right);
}
```

```
tuple4<int,int,int,char*>*% t1 = (1,2,3,"AAA");

if(t1.0 == 1 && t1.1 == 2 && t1.2 == 3 && t1.3 === "AAA") {
    puts("OK");
}
```

# Collection and heap system

All the elements added to the Collection are also released from memory and cloned on the collection side. When adding elements, do not add the heap managed by the variable table. This is because the heap managed by the variable table be comelang double free because automatic free occurs when it exits the block and free also occurs on the collection side. For example:

Collectionに追加された要素は全てコレクション側でメモリの解放やcloneなども行われます。要素を追加する場合は変数テーブルで管理されたヒープを追加しないようにしてください。
変数テーブルで管理されたヒープはブロックから出たときに自動freeが起こりコレクション側でもfreeが起こるので、2重freeとなるためです。例えば以下のようにします。

```
list<string>*% l = new list<string>.initialzie();

char*% str = string("ABC");

managed str;

l.push_back(str)
```

When it is managed str, str is no longer a heap managed by the variable table. The% mark disappears from the variable type. str is just char *. Or

managed strとされるとstrは変数テーブルで管理されるヒープでなくなります。変数の型に%マークがなくなります。strは単なるchar*となります。

もしくは

```
list<string>*% l = new list<string>();

char* str = borrow string("ABC");

l.push_back(str);
```

You can also do it. borrow removes the% mark on the heap. str is treated as just char *. In both cases str is freed when auto l is freed. Another way is to clone the variables in the variable table. Since two heaps are created, one is freed in the variable table and the other is freed in the Collection.

borrow is also excluded from the target of automatic free of rvalues

としてもいいでしょう。borrowはヒープの%マークを消します。strは単なるchar*として扱われます。
どちらの場合もlist<string>*% lがfreeされるときにstrは一緒にfreeされます。

borrowは右辺値の自動freeの対象からも外れます。

もう一つの方法としては変数テーブルの変数をcloneすることです。２つのヒープが生成されるため、一つは変数テーブルでfreeされて、もう一つはCollectionの中でfreeされます。

```
list<string>*% l = new list<string>();

char*% str = string("ABC");

l.push_back(clone str);
```

This may be the easiest.

これが一番簡単かもしれません。

# buffer(Original Heap version)

The definition is as follows.

定義は以下です。

```
impl buffer*
{
buffer*% initialize(buffer*% self);
void finalize(buffer* self);
int length(buffer* self) 
void append(buffer* self, char* mem, size_t size);
void append_char(buffer* self, char c);
void append_str(buffer* self, char* str);
void append_nullterminated_str(buffer* self, char* str);
string to_string(buffer* self);
void append_int(buffer* self, int value) ;
void append_long(buffer* self, long value) ;
void append_short(buffer* self, short value);
void alignment(buffer* self);
int compare(buffer* left, buffer* right);
}
```

使い方は以下です。

Usage is bellow:

```
buffer*% b1 = new buffer();

b1.append_str("ABC");
b1.append_str("DEF");

if(b1.to_string() === "ABCDEF") {
    puts("OK");
}
```

# lambda

```
auto fun = int lambda(int x, int y) { return x + y; }

if(fun(1, 2) == 3) {
    puts("OK");
}
```

```
int main(int argc, char** argv)
{
    int a;
    auto fun = int lambda(__current__* parent, int b, int c) {
        *parent.a = 4;
        return (*parent.a + b + c);
    }

    printf("%d\n", fun(__stack__, 1, 2));
    printf("a %d\n", a);
}
```

__current__ defines a structure that contains pointers to all variables in the current stack frame. __stack__ returns the pointer of the structure in which the pointer of the stack frame is assigned to the structure that stores the pointers of all variables of the current stack frame. In this case, the structure struct {int * a, int * argc, char *** argv}; is defined.

__current__は現在のスタックフレームのすべての変数のポインタを格納している構造体を定義します。
__stack__は現在のスタックフレームのすべての変数のポインタを格納している構造体にスタックフレームのポインタを代入した構造体のポインタを返します。
この場合はstruct { int* a, int* argc, char*** argv };という構造体が定義されます。

# Method block

```
void times(int n, void* parent, void (*fun)(void* parent))
{
    int i;
    for(i=0; i<n; i++) {
        fun(parent);
    }
}

int main(int argc, char** argv)
{
    int a = 1;

    3.times() {
        puts("HELLO METHOD BLOCK");
        printf("a %d\n", a);
    }
}
```

メソッドブロックの引数はit, it2, it3, it4,... という変数に代入されます。

```
static int int::expect(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

static void int::times(int self, void* parent, void (*block)(void* parent))
{
    int i;
    for(i=0; i<self; i++) {
        block(parent);
    }
}

impl list<T>
{
    list<T>* filter(list<T>* self, void* parent, bool (*block)(void*, T));
    list<T>* each(list<T>* self, void* parent, void (*block_)(void*, T,int,bool*));
}
```

```
int fd = open("ABC", O_RDONLY).expect {
    fprintf(stderr, "can't open ABC");
    exit(1);
}

3.times {
    puts("HELLO METHOD BLOCK");
}

list<int>*% li = [1,2,3]

int a = 1;

li.filter { it > 1; }.each {
    a = 2;
    printf("%d\n", it, + a);
}
// result is 4\n5\n

printf("a %d\n", a);
// result is a 2
```

```
    list<char>*% li = ["AAA", "BBB"]
    
    char buf[128];
    
    strncpy(buf, "CCC", 128);
    
    li.each {
        printf("%s %s\n", it, buf);
    }
    /// result is AAA CCC\nBBB CCC\n
```

# Method Generics

```
struct sStruct<T>
{
    T a;
    T b;
};

impl sStruct<T>
{
    void fun(sStruct<T>* self, T xxx, void* parent, void (*fun)(void* parent, T a)) {
        fun(parent, xxx);
    }

    template <R> R fun2(sStruct<T>* self, R a, R b) {
        return a + b;
    }
}

template <R> R fun(R a, int b)
{
    return a + b;
}

int main() 
{
    sStruct<int>* data = new sStruct<int>;

    xassert("method generics test", fun(1,2) == 3);
    xassert("method generics test", data.fun2(1,2) == 3);

    return 0;
}
```

```
impl list<T> {
    template <R> list<R>* map(list<T>* self, void* parent, R (*block)(void*, T))
    {
        auto result = new list<R>();

        list_item<T>?* it = self.head;
        while(it != null) {
            result.push_back(block(parent, it.item));

            it = it.next;
        }

        return result;
    }
}

int main()
{
    list<char*>*% list3 = ["1", "2", "3"]
    list<int>*% list4 = list3.map { atoi(it); }

    xassert("map test", list4[0] == 1 && list4[1] == 2 && list4[2] == 3);

    return 0;
}
```

# automatically output to common header

comelang header common.h a.c b.c, ...

とするとcommon.hにa.c b.c, ...の宣言が出力されます。

public { #include <comelang.h> }

とするとcommon.hに#include <comelang.h>が追加されます。

ファイル内だけの宣言はprivate int A;などとします。static int A;でも同じです。関数、union, struct, typedefも同様です。


# multiple assign

```
#include <comelang.h>

int, string fun(int n, string m) 
{
    (n, m);
}

void fun()
{
    int n;
    string m;
    
    n,m = fun(1, string("BBB"));
}

int main(int argc, char** argv)
{
    auto n, m = fun(1, string("AAA"));
    
    printf("n %d m %s\n", n, m);
    
    return 0;
}
```

# auto, auto_immutable

```

int main(int argc, char** argv)
{
    auto l = [1,2,3];
    l.push_back(4);
    
    auto_immutable m = [1,2,3];
    m.push_back(4); /// error
    
    return 0;
}
```

# class

```
class sData(int a, int b)
{
    int self.a = a;
    int self.b = b;
    
    for(int i=0; i<self.a; i++) {
        printf("%d\n", i);
    }
}

int main(int argc, char** argv)
{
    auto data = new sData(3,5);
    
    xassert("class test", data.a == 3 && data.b == 5);
    
    return 0;
}
```

# smart pointer

```
#include <comelang.h>

int main(int argc, char** argv)
{
    auto buf = "ABC".to_buffer();
    
    auto p = buf.to_pointer();
    
    p++;
    p++;
    p++;
    p++;
    p++;
    
    printf("CHARACTER %c\n", *p);
    
    return 0;
}
```

```
> comelang a.c
> ./a
a.c 12: out of range of smart pointer
```

