
# comelang

come together!

Yet another modern compiler. It has a collection and string library using Boehm GC or Refference count GC heap system. 

もう一つのモダンコンパイラ。boehm GC もしくはリファレンスカウントを使ったコレクション、文字列ライブラリを備えます。


version 1.3.6

``` C
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
    puts(xsprintf("%d", 1+1));   // 2\n
    
    3.times { puts(("HO" + "!") * 3); }    // HO!HO!HO!\nHO!HO!HO!\nHO!HO!HO!\n
    
    int xxx = 123;
    
    3.times {
        xxx+=2;
        printf("xxx %d\n", xxx); // xxx 125\nxxx 127\nxxx 129\n
    }
    printf("xxx %d\n", xxx); // xxx 129\n

    var li = ["AAA", "BBB", "CCC"]

    foreach(it, li) {
        puts(it);           // AAA\nBBB\nCCC\n
    }
    
    [1,2,3].each {
        printf("%d\n", it);   //1\n2\n3\n
    }

    var m = ["AAA":1, "BBB":2, "CCC":3]
    
    foreach(key, m) {
        var item = m[key];

        printf("%s %d\n", key, item); // AAA 1\nBBB 2\nCCC 3\n
    }

    puts("ABC".substring(0,1));   // A\n

    int fd = open("ABC", O_RDONLY).except {
        fprintf(stderr, "can't open ABC");
        exit(1);
    }

    3.times {
        puts("HELLO METHOD BLOCK");
    }

    var li2 = [1,2,3]

    li.filter { it > 1; }.each {
        printf("%d\n", it);       // 2\n3\n
    }
    
    var li2 = ["1", "2", "3", "4", "5"]

    li2.map { atoi(it); }.filter { it > 3; }.each { printf("%d\n", it); }  // 4\n5\n
    
    if("123 456 789".scan_block(/\d\d\d/) { it.substring(0,1); }.join("") === "147") {
        puts("OK");
    }
    
    [3,1,2,7].filter { it > 2; }.each { printf("%d\n", it); }   // 3\n7\n
    
    var ma1 = ["AAA":1, "BBB":2, "CCC":3];
    
    if(ma1["AAA"] == 1 && ma1["BBB"] == 2 && ma1["CCC"] == 3) {
        puts("OK");
    }
    
    fopen("AAA", "w").fprintf("ABC\n").fclose();
    
    fopen_block("AAA", "r") {
        it.read().print();   // ABC\n
    }
    
    puts("AAA".read());   // ABC\n\n
    
    unlink("AAA");
    
    stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n"); // if stdin is aaa\nbbb\nccc --> [aaa,bbb,ccc]\n
    
    int, int, char* t1 = (1,2,"ABC");
    
    xassert("tuple value test1", t1.0 == 1 && t1.1 == 2 && t1.2 === "ABC");
    
    xassert("string equals test1", "ABC" === "ABC");
    xassert("operator overload test", "ABC" * 2 === "ABCABC");
    xassert("operator overload test", "ABC" + "DEF" === "ABCDEF");
    xassert("operator overload test2", [1,2] + [3] === [1,2,3]);
    xassert("operator overload test3", [1,2] * 2 === [1,2,1,2]);
    
    var z = [1,2,3];
    
    xassert("operator overload test", z[0] == 1 && z[1] == 2 && z[2] == 3);
    
    z[1] = 22;
    
    xassert("operator overload test", z[0] == 1 && z[1] == 22 && z[2] == 3);
    
    var zz = ["AAA":1, "BBB":2, "CCC":3];
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3);
    
    zz["DDD"] = 4
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3 && z["DDD"] == 4);
    
    fun(y:2,x:1);  // print x 1 y 2 z 345
    
    putc('X');     // print X\n
    
    var l, m = fun2();
    
    xassert("multiple return", l == 1 && m === "ABC");
    
    "12345\n".write("AAA");
    "12345\n".write("AAA", append:true);
    
    printf("AAA".read());  // print out 12345\n12345\n
    
    //puts(null);          // exception. print out source file name and line
    //puts(null!);         // segmentaion fault

    var data = new sData(3,5);
    
    xassert("class test", data.a == 3 && data.b == 5);
    
    var z = [new sData(1,2), new sData(3,4)];
    
    //printf("%d\n", *z[5]!.a);  // exception. printout source code file name and source code line number
    
    var p = "ABC".to_buffer().to_pointer();
    
    p++;
    p++;
    //p++;
    //p++;  // exception. print out the source code file name and line number
    //p++;
    
    printf("CHARACTER %c\n", *p); // CHARACTER C\n
    
    int x = 2;
    ([1,2] + [3]).each {
        printf("%d\n", it*x);  // 1\n6\n9\n
        x = 3;
    }
    
    printf("x %d\n", x);   // x 3\n

    return 0;
}
```

In pipes filter or command lines.

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
> echo "aaa bbb" | comelang 'stdin.read().chomp().spit(/ /).to_string().puts()'
[aaa,bbb]
```

1. It is compatible with C language in some content. The C preprocessor also works.

2. The default heap system is boehm GC with reffrence count, optionally my original refference count heap system with -no-gc option.

3. It has Generics, Method Generics, inline function, debug info (-g option), and lambda.

4. It has a mixin-layers system. You can implement your application in layers. Each layer is complete and useful for debugging and porting. A vi clone called vin is implemented as an editor implemented in mixin-layers. Please refer to it because it is in a directory called vin. Also I'm creating a text processing interpreter(zed), 1000 lines shell(shsh), 1000 lines filer(mf) and constructing python3 clone(yappy).

5. Protocol(Interface)

6. method block like Ruby

7. It has using regex library(pcre) string libraries.

8. defer

9. Default parametor values, and label parametor are supported.

10. operator overload.

11. Guard from the segmentation of null pointer.

12. Smart pointer

13. Simple exception statment

14. Detect dangling pointer in some content.

15 In safe mode, runtime is memory safe. no segmention fault in some content.

1. C言語とある程度の互換性があります。Cプリプロセッサーも動きます。

2. boehmGCを使ったヒープ管理をします。オプションとして-no-gcとするとオリジナルのリファレンスカウントGCが使えます。

3. ジェネリクス、メソッドジェネリクス、インライン関数、デバッグ情報、ラムダをサポートします。

4. mixin-layersシステムを備えます。アプリケーションをレイヤーを重ねるように実装できます。各レイヤーは完結しており、デバッグや移植作業でも有効です。mixin-layersで実装されたエディッタとしてvinというviクローンを実装しています。vinというディレクトリの中に入っているので参考にしてください。またテキスト処理系をzedというディレクトリに作っています。shshという1000行シェルもあります。mfという1000行ファイルマネージャー。yappyという作りかけのPython3クローンもあります。

5. プロトコル（インターフェース）

6. Rubyのようなメソッドブロックがあります。

7. 正規表現を使った文字列ライブラリがあります。

8. 遅延評価(defer)があります。

9. デフォルト引数、引数のラベルをサポートします。

10. 演算子オーバーロードがあります。

11. null pointerのセグメンテーションを防ぐ機能があります。

12. 範囲チェックするポインターがあります

13. 簡易な例外処理があります。

14. できる限りダンジリングポインタを検出する機能があります。

15. セーフモードではできるかぎりメモリセーフです。

# INSTALL

Required libraries are clang, g++, gcc, llvm-dev, pcre-dev, gc-dev, readline-dev, ncurses-dev, make, autoconf, valgrind, gdb, lldb, musl-dev(alpine linux)

For Linux, WSL, MacOS(Darwin), userland(android), raspiberry pi, iSH(iPhone)

Fast Build. No self host

速いビルドです。

```
git clone https://github.com/ab25cq/comelang
cd comelang
bash fast_build.sh
```

With debug info. 

デバッグ情報を入れたビルドは以下です。

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash debug_build.sh
```

with self hosting.

セルフホストするビルドは以下です。

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash self_host.sh
```

For termux.

```
git clone https://github.com/ab25cq/comelang

cd comelang
bash home_build.sh
```


compile the compiler, editor, interpreter, shell and console filer with configure and Makefile

コンパイラやエディッターなどもコンパイルします。

```
bash xfast_build.sh
```

in termux

```
bash xhome_build.sh
```

# Histories

From version 1.0.2 The default GC system is boehmGC. I think it's easier than my original heap system. Let's enjoy easy programing.

バージョン1.0.2よりデフォルトのGCシステムがboehmGCになりました。こっちのほうが簡単なんで。簡単なプログラミングを楽しみましょう。

From version 1.0.3 push_backがselfを返さなくなりました。[1,2,3,4].push_back(5).push_back(6)はうごきません。コスト的な問題です。あとオリジナルのリファレンスカウントGCでライブラリにバグがあったため修正しています。boehmGCの方は特に問題がないです。オリジナルのリファレンスカウントGCは難しいですが利点は小さなメモリで動く点です。オリジナルのリファレンスカウントGCで作ったvinとzed2はラズパイZEROでも動くと思います。

From version 1.0.4 ラズパイで動作確認しました。bash xfast_build.shでcomelangで作ったソフトウェアも動いてます。

From version 1.0.5 iPhone(iSH)で動作確認しました。bash xfast_build.shですべてコンパイルできます。

From version 1.0.6 パフォーマンス上問題となるselfを返すメソッドがselfを返さなくなってます。buffer*::append_str(char*)など。using no-null-check;が入ってます。これもパフォーマンスのためです。iSHやラズパイでvinが遅かったためです。

From version 1.0.6 A method that returns self does not return self, which is a performance problem~
It's getting buffer*::append_str(char*), etc. It contains using no-null-check;
. This is also for performance. Because vin was slow on iSH and Raspberry Pi.

From version 1.1.0 -tオプションでトランパイルします。

From version 1.1.0 With -t option, traspiled to C code.

From vresion 1.1.1 smart_pointerが1.1.0でバグがでてました。修正。

From version 1.1.1 There is a bug with smart pointer. At version 1.1.1 repaire it.

From version 1.1.2 例外のバグを修正しました。

From version 1.1.2 Fixed a bug with exception.

From version 1.1.3 例外とヒープとのバグを修正しました。

From version 1.1.3 Fixed a heap bug with exception.

From version 1.1.4 例外とヒープとマルチアサインのバグを修正しました。

From version 1.1.4 Fixed a multi-assign, heap, exception bug.

From version 1.1.5 例外とヒープとマルチアサインのバグを修正しました。

From version 1.1.5 Fixed a multi-assign, heap, exception bug.

From version 1.1.6 例外とヒープとマルチアサインのバグを修正しました。

From version 1.1.6 Fixed a multi-assign, heap, exception bug.

From version 1.1.8 例外のバグを修正しました。

From version 1.1.8 Fixed exception bug.

From version 1.2.0 プロトコルと例外のバグを修正しました。

From version 1.2.0 Fixed exception and protocol bug.

From version 1.2.1 リファレンスカウントを+1するgc_incとリファレンスカウントを-1するgc_decが入りました。浅いコピーをするshallow_cloneが入りました。マルチディフィニションと例外とヒープの3使った場合のバグを修正。

From version 1.2.1 gc_inc to +1 the reference count and the reference count to -1 gc_dec entered. shallow_clone for shallow copying is included. Fixed a bug when using multi-definition, exceptions and heap 3.

From version 1.2.3 stringの!==が定義されてませんでした。定義しました。

From version 1.2.3 appended string !==

From version 1.2.4 Fixed bug with map::finalize

From version 1.2.4 mapのファイナライザのバグを修正しました。

From version 1.2.5 int a = 0; a(); --> segmentation fault. This bug has been fixed.

From version 1.2.6 Fixed exception heap bug.

From version 1.2.7 Fixed exception heap bug. No support to transpile mode, -t option.

From version 1.2.8 !==, ===, operator overloads has been null-checked.

From version 1.2.9 Detected invalid inherit

From version 1.3.0 Default is unsafe mode.

From version 1.3.1 multiple result values and exception bug has been fixed.

From version 1.3.2 type name limits was exteneded. some case , it occured problem.(segmentation fault)

From version 1.3.3 void* operand had occured segmentation fault. Fixed. Multidifinition of struct is detected.

From version 1.3.4 map expression bug has been fixed.

From version 1.3.5 map foreach bug has been fixed.

From version 1.3.6 fun().catch { throws } ==> fun() throws;

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

The compilation result is output to the source file name.ll with -S option. The output of the C preprocessor is saved in the source file name .i with -E option. It can be used like a normal C compiler. Of course, you can freely use the library in C language. If you add the -g option, debug information will also be output. 

コンパイル結果は-Sオプションでソースファイル名.llに出力されます。-Eオプションでソースファイル名.iにCプリプロセッサの出力が保存されます。
通常のCコンパイラと同じように使えます。もちろんライブラリもC言語のものを自由に使えます。-gオプションをつけるとデバッグ情報も出力されます。

If you want to object file only, use -c option.

オブジェクトファイルを出力するためには-cオプションを使ってください。

# Boehm GC libraries

With -no-gc option for my orignal refference count gc, enable my original refference count GC and disable boehmGC. The default heap system is boehm GC.

boehmGCはデフォルトです。オリジナルのリファレンスカウントGCを使うには-no-gcをオプションに加えてください。

comelang uses boethm gc with reffrence count, so no stop the world in your application.

boehmGCはリファレンスカウントをデフォルトにしているため、画面が固まることもないとおもいます。

# libraries

```
    if(xsprintf("%d", 1 + 1) === "2") {
        puts("OK");
    }
```

xsprintf is a function that returns the memory of a format string. === internally is operator_equal ~

xsprintfはフォーマット文字列のメモリーを返す関数です。===は内部的にはoperator_equals関数が呼ばれてます。
ポインターでは同じアドレスを指さないとtrueになりませんが===は同じ値ならtrueを返します。

```
    if("ABC".reverse() === "CBA") {
        puts("OK");
    }
```

reverse () returns a string in reverse order.

reverse()は文字列を逆順にした文字列を返します。

```
    if("ABC".substring(0,1) === "A") {
        puts("OK");
    }
```

substring () returns a range string. -1 means the end and -2 means the first character from the end. Does not include the character of the second argument.

substring()は範囲文字列を返します。-1だと末尾を-2だと末尾から一文字目の意味となります。２つ目の引数の文字は含みません。

listの使い方は以下です。

```
    list<char*>*% li = new list<char*>();
    
    li.push_back("AAA");
    li.push_back("BBB");
    li.push_back("CCC");
    
    if(li === ["AAA", "BBB", "CCC"]) {
        puts("OK");
    }
```

new list <char *> (); is an abbreviation for new list <char *> .initialize ()

new list<char*>();はnew list<char*>.initialize()の省略形です。

push_back adds an element to the list. ["AAA", "BBB", "CCC"] is a representation of the values ​​in the list

push_backはリストに要素を追加します。["AAA", "BBB", "CCC"]はリストの値の表現です。

```
    [7.3.2.8.5,9].sort() === [2,3,5,7,8,9]
```

Since sort() internally calls compare, you need to implement compare.

sort()は内部的にはcompareが呼ばれているためcompareを実装する必要があります。

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

This way sData can also be sort

このようにすればsDataもsortできます。

```
    [1,2,3,4,5].filter { it > 2 }.map { xsprintf("%d", it) + "A" } === ["3A", "4A", "5A"]
```

filter returns a list of elements for which the expression is true. map transforms all the elements. it, it2, it3 are the argument of the method block. $
Method blocks can still access variables in the parent block

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

Returns the sum of 1,2,3,4,5,6.

```
    [1,2] + [3,4] === [1,2,3,4]
```

```
    [1,2] * 2 === [1,2,1,2]
```

```
    immutalbe list<char*>*% li = ["AAA", "BBB"];
    
    li.push_back("CCC");  /// compile error
```

Specifying immutable guarantees that the value does not change. Since push_back is a method specified as mutable, a compile error will occur.


immutable指定すると値が変化しないことを保証します。push_backはmutable指定されたメソッドのためコンパイルエラーとなります。

each accesses all elements with an iterator

eachは全ての要素にイテレータでアクセスします。

```
    int sum = 0;
    [1,2,3,4,5].each {
        sum += it;
    }
    sum.printf("sum %d\n");
```

```
    int sum = 0;
    var m = [1,2,3,4,5,6];
    foreach(it, m) {
        if(it > 3) {
            break;
        }
        sum += it;
    }
    sum.to_string().puts();
```

foreach can be breaking the loop

```
    [1,2,3,4,5].to_string().puts();
```

list can be converted to a string. [1,2,3,4,5] should be output. Element must implement to_string ()
to_string () is implemented for int, char *, string, float, double, etc.

listは文字列に変換できます。[1,2,3,4,5]が出力されるはずです。要素はto_string()が実装されている必要があります。
int, char*, string, float,doubleなどはto_string()が実装されています。

```
    [1,2,3].length() == 3
```

```
    auto li = [1,2,3];
    
    li[0] == 1 && li[1] == 2 && i[2] == 3 && li[-1] == 3 && li[99999] == 0
```

auto is type inferred. For elements, -1 represents the end. Access out of range will return 0 cleared values

autoは型推論します。要素は-1は末尾を表します。範囲外のアクセスは0クリアされた値が返されます。

```
    var li = [1,2,3];
```

var is type inferred.

varは型推論します。

```
    [1,2,3].insert(position:0, item:4) === [4,1,2,3]
```

You can also use argument labels

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
    [7,3,7,2,8,5,5].sort().uniq() === [2,3,5,7,8]
```

```
    [1,2,3].map { xsprintf("%d", it }.join("+") === "1+2+3"
```

There is also a vector. I think that the list is generally used more often. vector has fast random access.

vectorもあります。概ねリストの方がよく使うと思います。vectorはランダムアクセスが速いです。

No representation of value.

値の表現はありません。

```
    var v = new vector<int>();
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    if(v[0] == 1 && v[1] == 2 && v[2] == 3)
    {
        puts("OK");
    }
    
    var li = v.to_list();
```

There is also a map.

mapもあります。

```
    var m = new map<char*,int>();
    
    m.insert("AAA", 1)
    m.insert("BBB", 2)
    m.insert("CCC", 3);
    
    if(m === ["AAA":1, "BBB":2, "CCC":3]) {
        puts("OK");
    }
````

In order to be an element of map, it is necessary to define get_hash_key for hash value calculation in the type.

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
    var ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    
    ma === ["AAA":1, "BBB":2, "CCC":3];
```

```
    var ma = ["A":1, "B":2, "C":3];
    
    ma["A"] == 1 && ma["B"] == 2 && ma["C"] == 3 && ma["D"] == 0
```

```
    ["A":1, "B":2, "C":3].find("B") // => true
```

```
    ["A":1, "B":2, "C":3].keys() === ["A", "B", "C"]
```

```
    ["A":1, "B":2, "C":3].values() === [1,2,3]
```

```
    ["A":1, "B":2, "C":3].length() == 3
```

There is also a tuple.

tupleもあります。

```
    int, char*, float t = (1,"AAA", 1.1);
    
    t.0 == 1 && t.1 === "AAA" && t.2 == 1.1
```

There is also a buffer.

bufferもあります。

```
    var buf = new buffer();
    
    buf.append_str("AAA").append_str("BBB");
    
    buf.to_string() === "AAABBB"
```



# String libraries

sample

``` C
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
    
    var bufX = "ABC".to_buffer();
    bufX.append_str("DEF");
    
    xassert("to_buffer test", bufX.to_string() === "ABCDEF");
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

``` C
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

Removed.

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

``` C
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

``` C
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


``` C

stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n");

stdin.read().split(/\n/).join(",").puts();

fopen("AAA", "w").fprintf("ABC\n").fclose();
fopen_block("AAA", "r") {
    it.read().print();
}
```

# mutable, immutable

The variable can be immutable. Variables with immutable specified cannot call methods with mutable specified.

For example, list <T> :: push_back is mutable. Therefore, calling push_back on a variable declared as immutable list <int> * will result in a compile error.

It means immutable, but immutable guarantees that the specified variable does not change its state. The result of equals does not change. 
list, vector, map, buffer are also designed that way. It is a merit of immutable, but if you specify immutable when passing an object as an argument of a function, 
You can be assured that the state of that argument will not change.

immutable and mutable can be assigned to each other. However, the function specified by mutalbe cannot be called for the variable specified by immutable.

変数はimmutableを指定することができます。immutableを指定された変数はmutable指定されたメソッドを呼び出すことができません。
例えばlist<T>::push_backはmutable指定されています。そのためimmutable list<int>*%などと宣言された変数にpush_backを呼び出すとコンパイルエラーとなります。

immutableの意味ですが、immutable指定された変数は状態が変わらないことを保証します。equalsの結果は変化しません。
list, vector, map, bufferもそのように設計されています。immutableのメリットですが関数の引数にオブジェクトを渡す場合immutable指定しておけば
その引数の状態を変えないことを保証できます。

immutableとmutableは相互に代入することができます。ただ、immutable指定された変数にmutalbe指定された関数が呼び出せないだけです。


``` C
struct vector<T> 
{
    T* items;
    int len;
    int size;

    int it;
};

impl vector<T> 
{
    vector<T>*% initialize(vector<T>*% self);
    void push_back(vector<T>* self, T item) mutable;
}
```

``` C
immutable vector<int>*% li = [1,2,3].to_immutable();
li.push_back(4);
```

is compile error.

はコンパイルエラーとなります。

varはmutable, valはimmutableになります。

``` C
var v = [1,2,3];      /// v is mutable
val v2 = [1,2,3];     /// v2 is immutable
```

# operator overloads

``` C
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

``` C
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

``` C
#include <comelang.h>

int fun(int* p)
{
    if(p != null) {
        puts(a);
    }
}

int main(int argc, char** argv)
{
    int* a = null;
    
    //puts(a);   /// exception print out source file name and lines;
    
    //puts(a!);  // segmentaion fault;
    
    // fun(a);   // exception print out source file name and lines
    
    fun(a!);     // ok
    
    return 0;
}
```

Cで書かれた関数にはNULLを渡すことがありますが、普通はNULL!とすればわたすことができます。しかし、cursesのattron(A_REVERSE)などはNULL!を渡すことができないため実行時エラーとなります。防ぐためにはusing c {attron(A_REVERSE); }としてください。NULLチェックが実行時には行われません。

NULL may be passed to a function written in C, but normally it can be passed with NULL!. However, attron (A_REVERSE) of curses cannot pass NULL!, so a runtime error occurs. use c { attron(A_REVERSE); } to prevent it. No null checking is done at runtime.

using no-null-check; とすると以降のコードでnullチェックが行われません。パフォーマンスが問題になる場合は使ってみてください。

If using no-null-check; is used, null checks will not be performed in the subsequent code. Performance~
If performance is an issue, try using it.


# mixin-layers system

Mixin-layers is a programming technique that creates an application so that layers are layered. The mechanism is to allow overwriting of a function and call the overwritten function from the overwritten function.

mixin-layersとはレイヤーを重ねるようにアプリケーションを作るプログラミング技法で、仕組み的には関数の上書きを許して、上書きされた関数を上書きした関数から呼び出せるというものです。

``` C
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

# Annotation

``` C
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
    fun(false@flag);

    return 0;
}
```

@[a-zA-Z][a-zA-Z_0-9]* is a comment of expression.

# BoehmGC

comelang with -gc enable boehmGC. And incremental GC is enabled.
If you write char*% as type name, ignored % and it's char*.
 

# Original Heap System(Incremental GC)

``` C
puts(xsprintf("1 + 1 == %d\n", 1 + 1));
```

xsprintfはヒープを使ったメモリが生成されますが、右辺値なので、puts後に自動的にリファレンスカウントがdecrementされます。リファレンスカウントが０になるとfreeされます。右辺値がfreeされるタイミングですが、1文が実行された後です。
メソッドチェインしても１文の実行が終わるまで右辺値のヒープのメモリは存在しているためメソッドチェインを行うことも可能でしょう。

次のルールは%をつけた変数に代入されたヒープを生成する関数やnewなどのメモリはブロックの脱出後にリファレンスカウントが-1されます。

``` C
char*% str = new char[123];

strncpy(str, "AAA", 123);

puts(str);
```

```
var str = new char[123];

strncpy(str, "ABC", 123);

puts(str);
```

If you want to manage the memory yourself, add borrow to declare heap memory that is not an rvalue, and then assign it to a pointer without%.

自分でメモリを管理したい場合はborrowをつけて右辺値じゃないヒープメモリと宣言してから%をつけないポインタに代入してください。

``` C
char* str = borrow char str[123];

strncpy(str, "ABC", 123);

puts(str);

delete str;
```

If you add borrow, it will be excluded from the target of automatic free of rvalue, and automatic free of rvalue will not be done. Assignment between variables with% added to the type name causes a transfer of ownership.

borrowをつけると右辺値の自動freeの対象から外されて、右辺値の自動freeがされないようになります。
string is a function that returns a char *% type string. In this case, the return value (rvalue) of string is freed after calling fun. string is defined as follows.

stringはchar*%型の文字列を返す関数です。この場合はfunの呼び出し後にstringの戻り値(右辺値)がfreeされます。

stringは以下のように定義されています。

``` C
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

``` C
string xsprintf(char* msg, ...);
string char*::reverse(char* str);
string char*::substring(char* str, int head, int tail);
```

使い方は

Usage is bellow:

``` C
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

``` C
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


``` C
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
浅いコピーはshallow_copyとしてください。sData*::shallow_copyがもし定義されていれば呼ばれます。

構造体やunionも普通の変数と同じルールです。

sData*::clone is also defined automatically. It's a deep copy, not a shallow copy.
Use shallow_copy for shallow copies. At this time, if sData*::shallow_copy is defined ~
is called.

Structures and unions follow the same rules as ordinary variables.

``` C
struct sA {
   int*% a;
};

int main()
{
    using unsafe;
    
    int*% a = new int;
    *a = 5;

    sA*% data = new sA;
    data.a = a; // increment refference count

    return 0;
}
```

aのリファレンスカウントは２なので、aがfreeされるのはブロックをぬけだしたときです。

リファレンスカウントを+1するにはgc_incを使います。リファレンスカウントを-1するにはgc_decを使います。

``` C
struct sA {
   int*% a;
};

int main()
{
    sA*% data = new sA;
    
    gc_inc data; // no free data, memory leak

    return 0;
}
```

``` C
struct sA {
   int*% a;
};

int main()
{
    sA*% data = new sA;
    
    gc_inc data;
    gc_dec data;  // free object, calling finalizer

    return 0;
}
```


finalizeとcloneメソッドとequalsメソッドは自動的に定義されます。

``` C
#include <comelang.h>

struct sInfo
{
    list<string>*% li;
};

int main()
{
    sInfo*% info = new sInfo;
    info->li = new list<string>();
    
    string x = string("AAA");

    info->li.push_back(x);
    
    delete info;
    
    puts(x);
    
    return 0;
}
```

# Generics(Original Heap version)

Generics is a code generation method. I have implemented it, but basically I am making it for the collection library of the basic library. We do not recommend using Generics for your own application code. This is because the code be comelang complicated. If you want to make your own library, you can use it. The vector is defined as follows.

Genericsはコード生成方式です。実装してますが、基本的に基本ライブラリのコレクションライブラリ用に作っています。
自作のアプリケーションコードにGenericsを使うことはお勧めしません。コードが複雑になるためです。
ライブラリを自作したい場合には使ってもいいと思います。

vectorは以下のように定義されています。

``` C
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

``` C
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

``` C
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
    list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&));
    list<T>*% sort(list<T>* self);
    list<T>*% uniq(list<T>* self);
    bool equals(list<T>* left, list<T>* right);
    T& begin(list<T>* self);
    T& next(list<T>* self);
    bool end(list<T>* self);
}
```

Usage is almost the same as vector.

使い方はvectorとほぼ同じです。

``` C
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

``` C
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

``` C
int main(int argc, char** argv)
{
    list<int>*% l = [7,1,2];

    list<int>*% l2 = l.sort();

    if(l2 === [1,2,7]) {
        puts("OK");
    }
}
```

The map is below.

mapは以下です。

``` C
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

``` C
map<char*, int>*% m = new map<char*, int>();

m.insert("AAA", 1);
m.insert("BBB", 2);
m.insert("CCC", 3);

if(m.length() == 3 && m["AAA"] == 1 && m["BBB"] == 2 && m["CCC"] == 3 && m.at("DDD", -1) == -1) {
    puts("OK");
}
```

``` C
map<char*, int>*% m = ["AAA":1, "BBB":2, "CCC":3]

if(m.length() == 3 && m["AAA"] == 1 && m["BBB"] == 2 && m["CCC"] == 3 && m.at("DDD", -1) == -1) {
    puts("OK");
}
```

It will be. There is also a tuple. It is defined as follows.

となります。

tupleもあります。以下のように定義されています。

``` C
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
// int, int,int,char* t1 = (1,2,3,"AAA");

if(t1.0 == 1 && t1.1 == 2 && t1.2 == 3 && t1.3 === "AAA") {
    puts("OK");
}
```

# buffer

The definition is as follows.

定義は以下です。

``` C
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

``` C
buffer*% b1 = new buffer();

b1.append_str("ABC");
b1.append_str("DEF");

if(b1.to_string() === "ABCDEF") {
    puts("OK");
}
```

# lambda

``` C
var fun = int lambda(int x, int y) { return x + y; }

if(fun(1, 2) == 3) {
    puts("OK");
}
```

```
int main(int argc, char** argv)
{
    int a;
    var fun = int lambda(__current__* parent, int b, int c) {
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

``` C
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

``` C
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

``` C
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

``` C
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
    sStruct<int>*% data = new sStruct<int>;

    xassert("method generics test", fun(1,2) == 3);
    xassert("method generics test", data.fun2(1,2) == 3);

    return 0;
}
```

``` C
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

# multiple assign

``` C
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
    var n, m = fun(1, string("AAA"));
    
    printf("n %d m %s\n", n, m);
    
    return 0;
}
```

# auto, auto_immutable

``` C

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

``` C
class sData(int x, int y, int z)
{
    int self.x = x;
    int self.y = y;
    
    void show(sData* self) {
        printf("x %d y %d\n", self.x, self.y);
    }
    
    int self.z = z;
    
    void show2(sData* self) {
        printf("x %d y %d z %d\n", self.x, self.y, self.z);
    }
};

int main()
{
    auto data = new sData(111, 222, 333);
    
    data.show();
    data.show2();
    
    xassert("class test", data.x == 111 && data.y == 222 && data.z == 333);
    
    return 0;
}
```

# smart pointer

``` C
#include <comelang.h>

int main(int argc, char** argv)
{
    auto p = "ABC".to_buffer().to_pointer();
    
    p++;
    p++;
    p++;
    p++;
    p++;
    
    printf("CHARACTER %c\n", *p);
    
    return 0;
}
```

``` shell
> comelang a.c
> ./a
a.c 12: out of range of smart pointer
```

``` C
#include <comelang.h>

int main(int argc, char** argv)
{
    buffer*% buf = new buffer();
    
    buf.append_int(1);
    buf.append_int(2);
    buf.append_int(3);
    
    smart_pointer<int>*% p = buf.to_int_pointer();
    
    printf("%d\n", *p); // 1;
    p++;
    printf("%d\n", *p); // 2;
    p++;
    printf("%d\n", *p); // 3;
    p++;
    //p++;              // exception. print out source file name and line.
    
    return 0;
}
```

``` C
#include <comelang.h>

int main(int argc, char** argv)
{
    using unsafe;
    
    int a[10];
    for(int i=0; i<10; i++) {
        a[i] = i;
    }
    
    auto p = new smart_pointer<int>.initialize(a, 10);
    
    printf("%d\n", *p); // 0
    p++;
    printf("%d\n", *p); // 1
    
    return 0;
}
```

# exception

``` C
#include <comelang.h>

exception int div_op(int left, int right)
{
    if(right == 0) {
        throw;
    }
    return left / right;
}

exception int test(int left, int right)
{
    return div_op(left, right) throws;
/*
    <=>
    
    return div_op(left, right).catch {
        throw;
    }
*/
}

int main()
{
    int n = test(4,0).catch {
        fprintf(stderr, "zero div\n");
        exit(1);
    }
    
    printf("n %d\n", n);
    
    return 0;
}
```

# unsafe, safe

``` C
#include <comelang.h>

void fun(char* p)
{
    printf("%c\n", *p);   // compile error
    
    p++;                  // compile error
    p--;                  // compile error
    
    var p2 = "ABC".to_buffer().to_pointer();
    
    p2++;                 // no compile error
    
    printf("%c\n", *p2);  // no compile error
    
    using unsafe;
    
    printf("%c\n", *p);   // no compile error
}
```

ポインタのデリファレンスとインクリメント、デクリメントは、safeモードでは許されていません。safeモードはデフォルトです。ポインタのデリファレンスとインクリメント、デクリメントをしたい場合はusing unsafeとしてください。関数の外で宣言するとそれ以降全てのソースでunsafeとなります。関数内で宣言すると、その関数の中でunsafeとなります。ポインタの操作はsafeモードでは原則禁止です。スマートポインタを使ってください。スマートポインタでは範囲チェックを行います。セグメンテーションフォルトが起こりません。

Pointer dereference and increment/decrement are allowed in safe mode~
Is not ... safe mode is the default. Dereferencing and incrementing pointers~
If you want to decrement, use using unsafe. When declared outside a function ~
After that, all sources will be unsafe. Declaring it inside a function makes it unsafe inside that function. Pointer manipulation is prohibited in principle in safe mode. smart pointer ~
please use it. Smart pointers do bounds checking. Segmentation~
no faults.

配列もセーフモードでは宣言禁止です。配列を使う場合はusing unsafeしてください。

Arrays are also not allowed to be declared in safe mode. Use unsafe when using arrays.

From version 1.3.0, unsafe mode is default.

1.3.0よりアンセーフモードがデフォルトになりました。

# fn

``` C
#include <comelang.h>

fn fun(a:int, b:int*) -> int
{
    return a + b[0];
}

int main()
{
    var a = new int[10];
    
    int i;
    for(i=0; i<10; i++) {
        a[i] = fun(1, a);
    }
    
    return 0;
}
```

# post derefference

```C
#include <comelang.h>

int main()
{
    using unsafe;
    
    char* p = "ABC";
    
    printf("%c\n", p>>>); // put A
    
    return 0;
}

# as

``` C
#include <comelang.h>

int main()
{
    using unsafe;
    
    var a = 123;
    void* b = &a;
    
    printf("%d\n", b as int*>>>); // put 123
    
    return 0;
}
```

# val

``` C
int main()
{
    val a = [1,2,3];
    
    //a.push_back(4); // compile error
    
    return 0;
}
```

# detected dagling pointer

``` C
    int* fun() 
    {
        int b;
        return &b; // compile error
    }
    
    void fun2(int** a)
    {
        int b;
        *a = &b; // compile error
    }
    
    void fun3()
    {
        int* a;
        {
            int b = 123;
            a = &b;   // compile error
        }
    }
    }
```

# Protocol, interface

``` C
#include <comelang.h>

interface sBase
{
    void show();
};

class sChildA
{
    int self.x = 1;
    int self.y = 2;
    int self.z = 3;
    string self.str = string("ABC");
    
    void show(sChildA* self)
    {
        printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
    }
}

class sChildB
{
    int self.X = 111;
    int self.Y = 222;
    int self.Z = 333;
    
    void show(sChildB* self)
    {
        printf("X %d Y %d Z %d\n", self.X, self.Y, self.Z);
    }
};

int main(int argc, char** argv)
{
    vector<sBase*%>*% v = new vector<sBase*%>();
    
    v.push_back(new sBase(new sChildA()));
    v.push_back(new sBase(new sChildB()));
    
    foreach(it, v) {
        it.show->();
    }
    
    return 0;
}

```

# Reflection

removed.

# MACRO

removed.

# あとがき

ダンジリングポインタについては僕は防ぐのは自明なので、あんまどうでもいいですね
。
あれがわかってないとC言語わかっているとは言えないような。
というかCPUとメモリについて。
まあ、一応今防ぐ仕組み入ってますが、消すかもしれません。
自明すぎて。
ダンジリングポインタでセグってC言語嫌いになられては嫌ですが。
やっぱ入れとくか。
一応ある程度はメモリセーフです。comelang。
コンパイラ自体がセグることは論外ですがたまにあります。
実行時の実行ファイルはあまりセグらないと思います.
まあリファクタリングとメモリセーフが課題ですかね
メモリの管理については慣れが必要です
まあ、結局メモリとCPUがわかってないと無理かもしれません
ただ、STWも起きないですし、それなりのパフォーマンスはでてます
puts(null)がセグらないのはまだましじゃないでしょうか
かなりコストかかりますが
まあ、RubyとPythonよりは速いでしょ
あと成果物のzedはかなり良いです
僕的にはテキスト処理はzedで事足りると思います
zedで遊んでて飽きないくらい面白いですよ
echo HELLO WORLD | zed '.scan_block(/./) { if it == " " { it } else { it + "B" }' => HBEBLBLBOB WBOBRBLBDB
って動き面白くないですか？
マニュアルはソース読めと言いたいところですが、また書きます
ソースはmixin-layersで書いてあるのでVMのサンプルとしても良いと思います
読みやすいですよ。mixin-layersは。
mixin-layersとはレイヤーを重ねるようにソフトウェアを作っていく技法です
photoshopのレイヤーと同じです
あれは可読性も良く、また移植も簡単です。
デバッグも小さいレイヤーから、動かして、バグを突き止めることができます
複数のレイヤーがあっても、どのレイヤーの時点でもソフトウェアは完結しているので
zedはきれいなソースですよ。多分初心者が読んでも読めると思います
まあ、可読性といえばboehmGCをデフォルトにしたほうが良い気はしますが
borrow , dummy_heapあたりは難しいと思います
ただ慣れれば割と楽にかけるとは思います
まあ、あとはリファクタリングとメモリセーフを追求します。

C言語については思い残すところがありません。30年間楽しみをありがとう。
UNIX, C, vi, sed, awk, perl, ruby, pythonあたりの製作者に深く感謝です。
30年間楽しませてもらいました。まだまだ楽しみたいと思います。

comelangは嫁の結花と飼い犬の柴犬ハチに捧げます。
嫁はパソコンオタクの僕にも広い心で接してくれて、結婚生活が順調だったため
comelangが作れました。割と良いものが作れたと思います。
まだまだ楽しみます。
一緒に楽しみましょう。
come together!


# Postscript

As for the dangling pointer, it's self-evident for me to prevent it, so I don't care. If you don't understand that, you can't say you understand the C language. About CPU and memory. Well, I have a mechanism to prevent it now, but I might delete it. is. It's out of the question that the comelang compiler itself segregates, but it happens sometimes.I don't think the executable file at runtime will segregate much.I guess refactoring and memory safety are issues.It's necessary to get used to managing memory.Well, after all, memory and CPU It may be impossible if you don't understand it However, STW does not occur, and the performance is reasonable. And it's faster than Python, isn't it? Also, zed is pretty good as a result. I think zed is enough for text processing. /) { if it == " " { it } else { it + "B" }' => HBEBBLLBOB WBOBBRBLBDB Isn't it fun? I would like to say that you should read the source manual, but I will write it again. The source is written in mixin-layers, so I think it can be used as a VM sample. mixin-layers. Mixin-layers is a technique to create software layer by layer, which is the same as photoshop layers. Debugging can also be started from a small layer, and bugs can be found. Even if there are multiple layers, the software is complete at any layer, so zed is a clean source. I think even beginners can read it. Well, I think it's better to use boehmGC as the default when it comes to readability, but I think borrow and dummy_heap are difficult. Pursue refactoring and memory safety. I have no regrets about the C language. Thank you for 30 years of fun. I am deeply grateful to the creators of UNIX, C, vi, sed, awk, perl, ruby, and python. I have enjoyed it for 30 years. I still want to enjoy it.

comelang is dedicated to his wife, Yuka, and his dog, Hachi, a Shiba Inu. My wife treated me with a big heart, even though I'm a computer geek, and my marriage was going well, so I was able to create comelang. I think I made something pretty good. I still enjoy it. Let's have fun together. come together!

