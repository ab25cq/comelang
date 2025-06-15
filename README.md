
# comelang

Another modern Object Oriented C compiler. It has Rerfference Count GC, and includes the generics collection libraries.

もう一つのモダンなオブジェクト指向Cコンパイラ。リファレンスカウントGCがありコレクションライブラリを備えてます。

version 50.1.0

``` C
#include <comelang.h>

class sData
{
    int a;
    int b;
    
    void show()
    {
        printf("a %d b %d\n", self.a, self.b);
    }
};

class sData2 extends sData
{
    int c;
    
    void show()
    {
        printf("a %d b %d c %d\n", self.a, self.b, self.c);
    }
};

int main() 
{
    var data = new sData2 { a:123, b:234, c:345 };
    
    data.show();  // a 123 b 234 c 345
    
    puts("HO!" * 3);             // HO!HO!HO!\n

    return 0;
}
```

Comelang outputs c source with standard C libraries only. So you can use this for micro computer or other system working c language.

# インストール

sh fast_build.sh will automatically install the necessary packages.

Supports Linux, MacOS (Darwin), termux (Android) userland (Android), and raspberry pi(pico).

sh fast_build.shとすると自動的に必要なパッケージがインストールされます。

LinuxとMacOS(Darwin), termux(Android), raspberry pi, raspberry pi picoをサポートしています。

sudoとgitは事前にインストールしてください。

Please install sudo and git before the build.

```
git clone https://github.com/ab25cq/comelang
cd comelang
sh fast_build.sh
sh clean-self-host.sh
```

To install a vi clone called vin, a string processing interpreter called zed, a console filer called mf, and an original shell called shsh, do the following:

vinというviクローン、zedという文字列処理インタプリタ、mfというコンソールファイラ、shshというオリジナルのシェルをインストールするには以下のようにします。

```
sh all_build.sh
```

# wiki Japanese

[wiki Japanese](https://github.com/ab25cq/comelang/wiki)

# wiki English

[wiki English](https://github.com/ab25cq/comelang/wiki/DOC%E2%80%90english)

# Histories

```
50.1.0 user finalize and user clone removed. It makes bugs.
50.0.0 This project may be complete.
40.0.0 Refactoring this project may be complete.
38.0.0 Refactoring
37.0.0 type infference come again. 
36.0.0 template remove type infference, list::map require type. [1,2,3].map<string>{ xsprintf("%d", it }
35.0.0 foreach is macro. Refactoring. complete project, maybe.
32.1.0 foreach is no macro
32.0.2 xv6
32.0.1 _Atomic support.
32.0.0 mutex lock, and unlock finally bellow spec.
31.1.0 immutable attribute
31.0.1 uniq class
31.0.0 New exception coming with simply way. It's simple and convinient. Well, I can feel this projects the end. If I can, more make simplify self host codes.
30.0.0 Remove exception. If my concentrate will continue, rescue method call implement for convinient returning tuple2 function. Allmost project the end.
26.0.0 heap alignment bug fiexed.
25.0.3 on_drop implemeted. See comelang-pthread.h. If not binded, right_value object called on_drop method.
25.0.1 Mutex lock unlock added.
25.0.0 Mutex added.
24.0.0 Myabe complete. After my works, refactoring or more gets speed.
23.0.2 Fixed some bugs. More speed. More Power.
23.0.1 Refactoring
23.0.0 Fixed the bug of list::sort
22.0.0 Remove smart_pointer, no genarete collection, vector, nil, more faster compiler
21.0.0 comelang really complete. Refactoring repeated.
20.0.2 Refactoring
20.0.1 Refactoring
20.0.0 comelang complete. Refactoring repeated.
17.0.0 Exception really complete. Perfectly 
16.0.2 Exception really complete
16.0.1 Exception really complete
16.0.0 Exception complete
15.0.5 Refactoring
15.0.4 Type eraser generics collection finally complete.
15.0.3 Type eraser generics collection finally complete.
15.0.2 Type eraser generics collection finally complete.
15.0.1 Type eraser generics collection finally complete.
15.0.0 Type eraser generics collection finally complete.
14.0.0 Type eraser generics collection finally complete.
13.0.3 Type eraser generics collection complete.
13.0.2 no generating code collection finally comes. Some bugs may remained. It's usefull for embbeded system because it doesn't take few code size.
13.0.1 no generating code collection finally comes. Some bugs may remained. It's usefull for embbeded system because it doesn't take few code size.
13.0.0 no generating code collection finally comes. Some bugs may remained. It's usefull for embbeded system because it doesn't take few code size.

12.3.2 valgrind check, no invalid memory access.
12.3.1 no generating code collection 
12.3.0 no generating code collection 
12.2.9 no generating code collection buggy.
12.2.8 no generating code collection perfectly releally complete. More improved;
12.2.6 no generating code collection releally complete. More improved;
12.2.5 no generating code collection complete. More improved;
12.2.4 no generating code collection complete. More improved;
12.2.3 no generating code collection comming. Bug fixed.
12.2.2 no generating code collection comming. More improved.
12.2.1 no generating code collection comming.
12.2.0 __attribute__ more proper
12.1.2 __attribute__ more proper
12.1.1 __attribute__ more proper
12.1.0 vin
12.0.9 char*::sub_plain added to comelang.h. vin bug fixed.
12.0.8 minux2 timer intterupt task switching pico os.
12.0.7 minux1 roudrobin task switching pico os, minux2 timer intterupt task switching pico os.
12.0.6 arrange cpp option and clang option.
12.0.5 -gc option support again to use boehm GC
12.0.2 -gcc option to use gcc instead of clang
12.0.1 Refactoring.
12.0.0 Really complete.
11.0.5 pico support. pico os project starts.
11.0.4 avr os. yaos
11.0.3 avr os.
11.0.2 m5stack support. More compatibilities for C Language.
11.0.1 Cinatora project finished. support m5stack. More compatibilities for C Language.
11.0.0 Colelction library bug fixed. Really complete. Cinatora project starts.
10.2.4 Searching for method algorithm more powerfull.
10.2.3 Maybe complete.
10.2.2 Maybe complete.
10.2.1 Maybe complete.
10.2.0 Maybe complete.
10.1.2 /* */ comment can nest like Java or Rust. /* */ and // comment can write in here docment.
10.1.1 Function attribute, type attribute, more compability for C Language.
10.1.0 remove libcomelang.a, Only need include comelang.h. delete floaint,integer, and -gc option.
10.0.2 comelang can build piccolo os. comelang can make operating system.
10.0.1 raspi pico.
10.0.0 Really complete. see DOC-ja.md. DOC-en.md
8.2.3 Remove $ function with emebbed string.
8.2.2 char*::delete bug is fiexed.
8.2.1 buffer expression.
8.2.0 named tuple.
8.1.8 named tuple.
8.1.7 refactoring.
8.1.6 module param bug fixed. refactoring.
8.1.5 refactoring, force_finalize, force_delete removed.
8.1.4 rescue more powerfull.
8.1.3 list<tup:int, string>*% equals to list<tuple2<int, string>*%>*%
8.1.2 buffer*::apppend_format.
8.1.1 comelang pralell coding and channel.
8.1.0 raspi pico.
8.0.5 raspi pico.
8.0.3 Exception bug fixed.
8.0.2 Exception bug fixed.
8.0.1 Exception.
8.0.0 Exception.
7.9.9 Exception recoming.
7.1.0 Real wildcard coming. map equals bug fixed.
7.0.5 can omit new keyword for creating object.
7.0.4 wildcard bug fixed.
7.0.3 wildcard bug fixed.
7.0.2 Pattern maching more improved. more fixed bugs. wildcard supported.
7.0.1 Pattern maching bug fixed.
7.0.0 Exception removed. I can't debug....
6.9.9 Exception removed. I can't debug....
5.1.6 and or had been bug from long time ago.
5.1.5 Improved pattern matching.
5.1.4 Improved pattern matching.
5.1.3 Improved pattern matching.
5.1.2 Pattern matching else block has been added.
5.1.1 Pattern matching bug fixed.
5.1.0 to_string automatically defined. Object Initializer.
5.0.9 The result of if bug fixed.
5.0.8 Exception bug is fixed maybe. Smash the damn bug to the sky.
5.0.7 if statment has the result type. pattern matching is coming. The bug fixed.
5.0.6 if statment has the result type. pattern matching is coming. The bug fixed.
5.0.5 if statment has the result type. pattern matching is coming.
5.0.4 if statment has the result type.
5.0.3 pattern matching is coming soon.
5.0.2 Fixed bug maybe.
5.0.1 Exception bug is fiexed maybe.
5.0.0 Exception is perfect. 
4.0.5 Exception bug fixed maybe. Some critically bug fixed. I'm sorry.
4.0.2 Some library function which uses regex entered bug when 4.0.1, fixed.
4.0.1 Some library function start to use exception. When exception, resuce Err Msg is now "Err" not "it".
4.0.0 Exception is perfect like Java, ruby, Python.
3.5.2 More improvement of exception
3.5.1 More improvement of exception
3.5.0 Exception
3.0.4 -gc and regex bug fixed.
3.0.3 -gc and regex bug fixed.
3.0.1 Method generics is complete. Type infference is maybe perfect.
3.0.0 Method generics is complete. Type infference is enabled.
2.2.2 struct initializer.
2.2.0 [1,2,3].map<string> { return it.to_string(); }.each { puts(it); } <=> [1,2,3].map { it.to_string() }.each { puts(it); }
2.1.0 [1,2,3].map2<string> { return it.to_string(); }.each { puts(it); } <=> [1,2,3].map { it.to_string() }.each { puts(it); }
2.0.1 an embbeded string bug fiexed.
2.0.0 Release
```

# Language specifications

The syntax is almost the same as C language. It may not be POSIX compliant. If you do not #include <comelang.h>, you can use it as a normal C compiler.

文法はC言語とほとんど一緒です。POSIXに準拠しているとは言えないかもしれません。#include <comelang.h>をしないと普通のCコンパイラとして使えます。

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

# grammar

It is not POSIX compliant, but is compatible with the C language. I think most C header files can be included as is.

POSIXには準拠していませんが、C言語と互換性があります。大抵のCヘッダーファイルはそのままincludeできると思います。

# Libraries

The grammar library includes list, map, tuple, buffer, and string. 

ライブラリにはlist, map, tuple, buffer, stringがあります。

# list

```
#incldue <comelang.h>

int main(int argc, char** argv)
{
    list<char*>*% li = ["AAA", "BBB", "CCC", "DDD", "EEE"];
    
    foreach(it, li.sublist(0,3)) {   // "AAA"\n"BBB"\n"CCC"
        puts(it);
    }
    
    li.add("FFF").add("GGG");
    
    foreach(it, li) {   // "AAA"\n"BBB"\n"CCC"\n"DDD"\n"EEE"\n"FFF"\n"GGG"\n
        puts(it);
    }
    
    return 0;
}
```

li.each { puts(it); } can also access all list elements, but break, continue, and return cannot be used. It is more efficient to use foreach. foreach takes the first argument as the name of the variable containing the element, and the second argument as the list.

foreach is implemented as a macro.

li.each { puts(it); }としても全てのリストの要素にアクセスできますが、break, continu, returnが使えません。foreachを使った方が効率的にもいいです。foreachは第一引数が要素が入った変数の名前、第二引数がリストとなります。

foreachはマクロで実装されてます。

```C
#define foreach(o1, o2) for(var o2_saved = (o2), var o1 = (o2_saved).begin(); !(o2_saved).end(); o1 = (o2_saved).next())
```

Below is an explanation of all methods.

以下は全メソッドの解説です。

```C
list<T>*% initialize(list<T>*% self);
```

A constructor. It will be called by typing new list<int>();. Internally this is new list<int>.initialize();
It is an abbreviation of

The constructor must add a % to the first argument and add 1 to the reference count. If you do not add %, it will be determined that the heap can be freed and will be automatically freed. The return value must also be marked with a % to prevent it from being released.

Write return self; at the end of the constructor. It cannot be omitted.

You can easily write constructors by using the class function described later.

コンストラクタです。new list<int>();とすれば呼び出されます。これは内部的にはnew list<int>.initialize();
の略です。

コンストラクタは第一引数に%をつけてリファレンスカウントを＋１しなければなりません。%をつけてないと解放していいヒープだと判断されて自動的にfreeされます。戻り値も%をつけて解放されないようにしないといけません。

コンストラクタの最後にはreturn self;と書いてください。略することはできません。

後述するclass機能を使えば、簡単にコンストラクタなどが記述できます。

```C
var li = new list<int>.initialize();
li.add(1).add(2).add(3);

var li2 = new list<int>();
li2.add(1).add(2).add(3);
```

```C
list<T>*% initialize_with_values(list<T>*% self, int num_value, T&* values) 
```

Creates a list initialized with an array.

配列で初期化されたリストを作成します。

```C
int values[3] = { 1, 2, 3 };

var li = new list<int>.initialize_with_values(3, values);
```

```C
void finalize(list<T>* self) 
```

It's a destructor. Called when automatically deleted or manually deleted.

デストラクターです。自動的に消去される場合、手動でdeleteする場合に呼ばれます。

```C
list<int>* li = borrow gc_inc(new list<int>());
li.add(1).add(2).add(3);
delete li;  // finalize is called. finalizeが呼ばれる
```

gc_inc increments the heap reference count by 1. borrow removes the heap from being automatically released and allows it to be assigned to a variable without a %. In this case the heap is managed manually and memory leaks will occur if you don't delete it. If a memory leak occurs When you run the program, the number of memory leaks will be displayed. If you compile with the -cg option, the stack frame at the location of the source file where the heap was generated will be displayed. I think it's easy to debug.

gc_incはヒープのリファレンスカウントを+1します。borrowはヒープの自動解放対象から外し、%をつけない変数に代入できるようにします。この場合ヒープは手動で管理されて、deleteしないとメモリリークが発生します。 メモリリークが発生した場合プログラムを実行するとメモリリークの回数が表示されます。-cgオプションをつけてコンパイルするとヒープが生成されたソースファイルの位置のスタックフレームが表示されます。デバッグも容易だと思います。

```C
list<T>*% clone(list<T>* self)
```

```C
var li = [1,2,3,4,5];
var li2 = clone li;   // cloneがよばれる
```

clone is a deep copy. Elements are also recursively cloned to duplicate memory. Since li and li2 have a reference count of 1, they will be automatically deleted when they exit the scope.

If you don't want to deep copy, follow the steps below.

cloneはディープコピーです。要素も再起的にcloneされて、メモリが複製されます。liとli2はリファレンスカウントが1のためスコープを抜けると自動的に消去されます。

ディープコピーしたくない場合は以下です。

```C
var li = [1,2,3,4,5];
var li2 = li;
```

li2 refers to the same thing as li. The heap of [1,2,3,4,5] has a reference count of 2, so when li and li2 exit the scope, the reference count is -2 and becomes 0, and [1,2,3,4,5 ] will be released.

li2はliと同じものを指しています。[1,2,3,4,5]のヒープはリファレンスカウントが２のためliとli2がスコープを抜けるとその時リファレンスカウントが-2されて0になり、[1,2,3,4,5]は解放されます。

```C
var li = [1,2,3,4,5];
list<int>* li2 = li;
```

In this case, li and li2 refer to the same thing, but if li2 is accessed after li is released, a segmentation fault will occur.

In most cases, you can just add a % to the pointer. Reference count GC handles this well.

この場合もliとli2は同じものをさしていますが、liが解放された後にli2にアクセスするとセグメンテーションフォルトを起します。

たいていの場合はポインタに%をつけておけば大丈夫です。リファレンスカウントGCがうまく対処してくれます。

```C
list<T>* add(list<T>* self, T item)
```

```C
var li = [s"ABC", s"DEF", s"GHQ"]:
li.add(s"OPQ");
```

s"ABC" is a string type character string and is allocated on the heap. The same is true for string("ABC"). string is defined as typedef char*% string; and can also be treated as a simple char type array. So, putting(s"ABC"); will output ABC\n. In this case, the generated string will be automatically freed.

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

s"ABC"はstring型の文字列でヒープに確保されます。string("ABC")としても同じです。stringはtypedef char*% string;と定義されていて、単なるchar型の配列としても扱えます。なのでputs(s"ABC");とするとABC\nが出力されます。この場合生成された文字列は自動的にfreeされます。

li is list<string>*%. The reference count of s"OPQ" in li.add(s"OPQ"); is incremented by 1 and it is correctly stored in li. The stored s"ABC", s"DEF", s"GHQ", and s"OPQ" are correctly freed when li is freed.

liはlist<string>*%です。li.add(s"OPQ");のs"OPQ"はリファレンスカウントが+1されて、正しくliに格納されます。liが解放されるとき格納された、s"ABC", s"DEF", s"GHQ", s"OPQ"は正しくfreeされます。

```C
void pop_front(list<T>* self) 
```

Delete the beginning of the list. If the heap is stored, the element will be freed. If it is a non-heap pointer such as "ABC", it will not be freed.

リストの先頭を削除します。ヒープが格納されていた場合要素がfreeされます。ヒープでなく"ABC"などヒープでないポインタの場合はfreeされません。

```C
list<T>* push_back(list<T>* self, T item)
```

Same as add.

addと同じです。

```C
string to_string(list<T>* self)
```

```C
    var li = ["ABC", "DEF", "GHQ"];
    puts(li.to_string());
```

[ABC,DEF,GHQ] will be output. to_string is executed on all elements. 

li is list<char*>*%, which stores string pointers. The stored element will not be freed because it is not char*%.

[ABC,DEF,GHQ]が出力されます。要素の全てにto_stringが実行されます。

liはlist<char*>*%で文字列のポインタが格納されています。char*%ではないため格納された要素はfreeされません。

```C
T& begin(list<T>* self) 
T& next(list<T>* self) 
bool end(list<T>* self) 
```

Defined for foreach. Use this if you want to access all elements.

foreachのため定義されてます。すべての要素にアクセスしたい場合使います。

```C
list<T>* each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    
    li.each {
        puts(it);
    }
```

ABC\nDEF\nGHI\n will be output. Method block arguments are stored in it, it2, and it3. In this case, it contains each element. Unlike foreach, break, continue, and return cannot be executed. Returning just escapes from the method block.

ABC\nDEF\nGHI\nが出力されます。メソッドブロックはit,it2,it3にメソッドブロックの引数が格納されます。この場合itは各要素が入っています。foreachと違い、break, continue, returnは実行できません。returnするとメソッドブロックから脱出するだけです。

```C
T item(list<T>* self, int position, T default_value) 
```

```C
    var li = ["ABC", "DEF", "GHI"];
    puts(li.item(0, null)); // ABC
    puts(li.item(-1, null)); // GHI
    puts(li.item(-9999, "")); // ""
```

default_value is the value returned in case of out-of-range access. If <0, the elements counted from the back are returned.

default_valueは範囲外アクセスの場合その値が返されます。<0の場合は後方から数えた要素が返されます。

```C
int length(list<T>* self)
```

```C
    var li = [1,2,3];
    puts(li.length().to_string()); // 3
```

Returns the number of elements.

要素の数が返されます。

```C
list<T>* insert(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3];
    
    li.insert(1@position, 5@item); // [1,5,2,3]
```

Add element to position. @postion is an annotation and is treated as a comment.

li should be [1,5,2,3].

要素をpositionに追加します。@postionはアノテーションでコメントとして扱われます。

liは[1,5,2,3]となるはずです。

```C
list<T>* reset(list<T>* self) 
```

```C
    var li = [1,2,3];
    
    li.reset();
    
    li.length().to_string().puts(); // 0
```

Clears the element. 0 will be output.

要素をクリアします。0が出力されます。

```C
list<T>* remove(list<T>* self, T item) 
```

```C
    var li = [1,2,3];
    
    li.remove(3); // [1,2]
    
    li.to_string().puts();
```

Delete items that match item and equals.
li is [1,2].

itemとequalsがマッチするものを削除します。
liは[1,2]です。

```C
list<T>* delete(list<T>* self, int head, int tail)
```

```C
    var li = [1,2,3,4,5];
    
    li.delete(3,-1); // [1,2,3]
    li.delete(0,1); // [2,3];
```

Delete what is in the range. -1 is the tail.
li is [1,2,3].

範囲に入っているものを削除します。-1は末尾です。
liは[2,3]です。

```C
list<T>* replace(list<T>* self, int position, T item)
```

```C
    var li = [1,2,3,4,5];
    
    li.replace(1, 7); // [1,7,3,4,5]
```

Replace the item.
li is [1,7,3,4,5]. If the element is a heap, the reference count of the replaced element will be -1, and if the reference count is 0, it will be deleted.

アイテムを置き換えます。
liは[1,7,3,4,5]です。要素がヒープの場合置き換える要素はリファレンスカウントが-1されて、リファレンスカウントが0なら削除されます。

```C
int find(list<T>* self, T& item, int default_value) 
```

```C
    var li = [1,2,3,4,5];
    
    li.find(3, -1@default_value); // 2
```

Returns the position from the beginning of the element matched by equals. In this case it is 2. default_value is the value if not found.

equalsがマッチする要素の先頭からの位置を返します。この場合2です。default_valueは見つからなかった場合の値です。

```C
bool equals(list<T>* left, list<T>* right)
```

```C
    [1,2,3].equals([1,2,3]).to_string().puts(); // true
```

Checks whether the object has the same argument and content. Equals is executed for each element and returns true if it is true for all elements.

オブジェクトが引数と内容が一緒か確認します。要素ごとにequalsが実行されすべての要素で真ならtrueを返します。

```C
list<T>*% sublist(list<T>* self, int begin, int tail) 
```

```C
    [1,2,3,4,5].sublist(0,2); // [1,2]
    [1,2,3,4,5].sublist(3,-1); // [4,5]
    [1,2,3,4,5].sublist(3,-2); // [4]
```


```C
T operator_load_element(list<T>* self, int position) 
```

```C
    var li = [1,2,3,4,5];
    
    printf("%d\n", li[3]); // 4
    printf("%d\n", li[-1]); // 5
    printf("%d\n", li[-9999]); // 0
```

If the index is not found, 0 clear value returned.

もしインデックスが見つからないなら0clearされた値が返されます。

```C
void operator_store_element(list<T>* self, int position, T item) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0] = 123; // [123,2,3,4,5]
```

```C
list<T>*% operator_load_range_element(list<T>* self, int begin, int tail) 
```

```C
    var li = [1,2,3,4,5];
    
    li[0..2].to_string().puts(); // [1,2]
    li[3..-1].to_string().puts(); // [4,5]
```

```C
bool operator_equals(list<T>* self, list<T>* right) 
```

```C
    [1,2,3] === [1,2,3]; // true
    [1,2,2] === [1,2,3]; // false
```

equals is called for each element.

各要素にequalsが呼ばれます。

```C
bool operator_not_equals(list<T>* left, list<T>* right) 
```

```C
    [1,2,3] !== [1,2,3]; // false
    [1,2,2] !== [1,2,3]; // true
```

```C
bool contained(list<T>* self, T item) 
```

```C
    [1,2,3].contained(3); // true
    [1,2,3].contained(4); // false
```

```C
list<T>*% merge_list_with_lambda(list<T>* left, list<T>* right, int (*compare)(T&,T&)) 
list<T>*% merge_sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 
list<T>*% sort_with_lambda(list<T>* self, int (*compare)(T&,T&)) 
```

```C
    [3,7,2,5].sort_with_lambda(int lambda(int left, int right) {
        if(left < right) {
            return -1;
        }
        else if(left > right) {
            return 1;
        }
        else {
            return 0;
        }
        
        return 0;
    }); // [2,3,5,7]
```

Sort by lambda expression.

lambda式でソートします。

```C
list<T>*% merge_list(list<T>* left, list<T>* right) 
list<T>*% merge_sort(list<T>* self) 
list<T>*% sort(list<T>* self) 
```

```C
    [3,7,2,5].sort(); // [2,3,5,7]
```

```C
template<R> list<R>*% map(list<T>* self, void* parent, R (*block)(void*, T&))
```

```C
    ["1","2","3"].map { atoi(it) }  // [1,2,3]
```

Executes an expression on each element and returns a list of results. 

各要素に式を実行して、その結果のリストを返します。

```C
list<T>*% reverse(list<T>* self) 
```

```C
    [1,2,3].reverse(); // [3,2,1]
```

```C
list<T>*% uniq(list<T>* self) 
```

```C
    [8,8,2,2,3,3].uniq(); // [8,2,3]
```

Delete adjacent identical elements. It may not work unless you use sort().

隣あった同じ要素を削除します。sort()しないとダメかもしれません。

```C
list<T>*% filter(list<T>* self, void* parent, bool (*block)(void*, T&))
```

```C
    [1,2,3,4,5].filter { it > 2 };  // [3,4,5]
```

```C
list<T>*% operator_add(list<T>*% left, list<T>*% right) 
```

```C
    [1,2,3] + [4,5]; // [1,2,3,4,5]
```

```C
list<T>*% operator_mult(list<T>* left, int right) 
```

```C
    [1,2,3] * 2; // [1,2,3,1,2,3]
```

```C
string join(list<T>* self, char* sep=" ") 
```

```C
    [1,2,3].join("+");    // 1+2+3
```

# map

map is a dictionary.

mapは辞書です。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    map<char*, int>*% ma = new map<char*, int>();
    
    ma.insert("AAA", 1);
    ma.insert("BBB", 2);
    ma.insert("CCC", 3);
    
    foreach(it, ma) {
        int item = ma[it];
        
        printf("element %s %d\n", it, item);
    }
    
    return 0;
}
```

```C
map<T,T2>*% initialize(map<T,T2>*% self)
```

```C
var ma = new map<char*,int>();
ma.insert("AAA", 1);
ma.insert("BBB", 2);
ma.insert("CCC", 3).insert("DDD", 4);
```

```C
map<T,T2>*% initialize_with_values(map<T,T2>*% self, int num_keys, T&* keys, T2&* values) 
```

```
    char* keys[] = { "AAA", "BBB", "CCC", "DDD" };
    int values[] = { 1, 2, 3, 4 };
    
    var ma = new map<char*,int>.initialize_with_values(4, keys, values);
```

```C
void finalize(map<T,T2>* self)
```

```C
map<T, T2>*% clone(map<T, T2>* self)
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3];
    var ma2 = clone ma;
```


```C
string to_string(map<T,T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].to_string().puts();   // [AAA:1,BBB:2,CCC:3]
```

All elements and keys must implement to_string(). All basic types of comelang have to_string() implemented. Struct will automatically define to_string method.

すべての要素とキーにto_string()が実装されている必要があります。comelangの基本的な型はすべてto_string()が実装されてます。to_stringは構造体の場合自動的に定義されます。

```C
T2 at(map<T, T2>* self, T& key, T2 default_value) 
```

```
    ["AAA":1, "BBB":2, "CCC":3].at("AAA", -1).to_string().puts();  // 1
```

Takes value by key. This is the value if default_value is not found.

キーで値をとります。default_valueが見つからない場合の値です。

```C
map<T,T2>* remove(map<T, T2>* self, T& key) 
```

```
    var ma = ["AAA":1, "BBB":2, "CCC":3].remove("AAA");
    ma.to_string().puts();   // [BBB:2, CCC:3]
```

Delete value by key.

キーで値を削除します。

```C
T& begin(map<T, T2>* self)
T& next(map<T, T2>* self) 
bool end(map<T, T2>* self) 
```

It is for foreach. To access all keys:

foreachのためにあります。すべてのキーにアクセスするには以下のようにします。

```
    var ma = ["AAA":1, "BBB":2, "CCC"];
    
    foreach(key, ma) {
        var item = ma[key];
        
        printf("%s %d\n", key, item);
    }
```

The output is AAA 1\nBBB 2\n CCC 3\n.
foreach(key, ["AAA":1, "BBB":2, "CCC":3]) is not possible. Because foreach is a macro, it has meaning.
Maybe include foreach in the language specification instead of a macro.

出力はAAA 1\nBBB 2\n CCC 3\nです。
foreach(key, ["AAA":1, "BBB":2, "CCC":3])とはできません。foreachはマクロのため,が意味を持つためです。
ちょっとforeachをマクロでなく言語仕様に含めるかもしれません。

```C
void rehash(map<T,T2>* self) 
```

For internal use.

内部的に使用します。

```C
map<T,T2>* insert(map<T,T2>* self, T key, T2 item)
```

```
    var ma = ["AAA":1].insert("BBB",2).insert("CCC",3);
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
T2 operator_load_element(map<T, T2>* self, T& key) 
```

```
    var ma = ["AAA":1,"BBB":2,"CCC":3];
    var item = ma["AAA"];
    item.to_string().puts(); // 1
```

If the key is not found, zero clear value is returned.

キーが見つからない場合0クリアされた値が返されます。

```C
void operator_store_element(map<T, T2>* self, T key, T2 item) 
```

```
    var ma = ["AAA":1, "BBB":2];
    ma["CCC"] = 3;
    ma.to_string().puts(); // [AAA:1,BBB:2,CCC:3]
```

```C
bool equals(map<T, T2>* left, map<T, T2>* right)
```

```
    ["AAA":1,"BBB":2,"CCC":3].equals(["AAA":1,"BBB":2,"CCC":3]); // true
    ["AAA":1].equals(["BBB":2]); // false
```

```C
bool operator_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] === ["AAA":1,"BBB":2,"CCC":3]; // true
    ["AAA":1] === ["BBB":2]; // false
```

```C
bool operator_not_equals(map<T, T2>* left, map<T,T2>* right) 
```

```
    ["AAA":1,"BBB":2,"CCC":3] !== ["AAA":1,"BBB":2,"CCC":3]; // false
    ["AAA":1] !== ["BBB":2]; // true
```

```C
bool find(map<T, T2>* self, T& key) 
```

```
    ["AAA":1, "BBB":2].find("AAA"); // true;
    ["AAA":1, "BBB":2].find("CCC"); // false;
```

Returns true if the key is included.

キーが含まれればtrueを返します。


```C
map<T,T2>*% operator_add(map<T,T2>* left, map<T,T2>* right) 
```

```
    (["AAA":1] + ["BBB":2]).to_string().puts(); // [AAA:1,BBB:2]
```

```C
map<T,T2>*% operator_mult(map<T,T2>* left, int right) 
```

```
    (["AAA":1] * 2).to_string().puts(); // [AAA:1,AAA:1]
```

```C
list<T>*% keys(map<T, T2>* self)
```

```
    ["AAA":1, "BBB":2, "CCC":3].keys().to_string().puts();  // [AAA,BBB,CCC]
```

```C
list<T2>*% values(map<T, T2>* self) 
```

```
    ["AAA":1, "BBB":2, "CCC":3].values().to_string().puts();  // [1,2,3]
```

# tuple

A tuple is a collection of elements of different types. It may be called a simple structure.

タプルは型の違う要素を持つコレクションです。簡易的な構造体と呼べるかもしれません。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    tuple3<int, int, char*>*% tu = new tuple3<int, int, char*>(1, 2, "ABC");
    
    printf("%d %d %s\n", tu.v1, tu.v2, tu.v3);
    
    return 0;
}
```

Up to 5 tuples are defined.

tupleは5つまで定義されてます。

```
    tuple5<int,int,int,string,char*>*% tu = (1,2,3,s"ABC","DEF");
    
    tu.to_string().puts(); // (1,2,3,ABC,DEF)
```

int, bool have the same meaning as tuple2<int, bool>*%. Used to return multiple values. When you want to store multiple values in each variable, you can use var a,b = div(1,1); Int is placed in a and bool is placed in b.

To access the element, use v1 etc.

int, boolはtuple2<int, bool>*%と同じ意味です。複数の値を返すために使います。複数の値を各変数に格納したい時、個の場合はvar a,b = div(1,1);とすればいいです。aにint, bにboolが入ります。

要素にアクセスするにはv1などとします。

```
    var tu = (1,2,"ABC");
    
    tu.v1 === 1; // true
    tu.v2 === 2; // true
    tu.v3 === "ABC"; // true
```

tup: int, stringはtuple2<int,string>*%と同じです。list<tuple2<int,string>*%>*%の代わりにlist<int, string>*%は使えませんが、list<tup:int,string>*%は使えます。

tup: int, string is the same as tuple2<int,string>*%. You cannot use list<int, string>*% instead of list<tuple2<int,string>*%>*%, ​​but you can use list<tup:int,string>*%.

named tuple

```C
    var tup = (x:1, y:2);
    puts(s"\{tup.x} \{tup.y}");
```

```C
int fun(tup(int:xx, int:yy) tup)
{
    puts(s"xx \{tup.xx} yy \{tup.yy}");
}

int main(int argc, char** argv) 
{
    var tup = (x:1, y:2);
    
    puts(s"\{tup.x} \{tup.y}");
    
    fun(tup);
    
    return 0;
}
```

# buffer

Buffer is memory that can be appended. Expression of buffer is b"".

bufferは追記できるメモリーです。

bufferの値の表現はb""です。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    buffer*% buf = new buffer();
    
    buf.append_str("ABC");
    buf.append_str("DEF");
    
    puts(buf.to_string()));
    
    buffer*% buf2 = new buffer();
    
    buf2.append_int(1);
    buf2.append_int(2);
    buf2.append_int(3);
    
    int* p = buf2.head_pointer();
    
    printf("%d\n", *p);  // 1
    p++;
    printf("%d\n", *p);  // 2
    p++;
    printf("%d\n", *p);  // 3
    
    return 0;
}
```

```C
buffer*% buffer*::initialize(buffer*% self);
```

```
    var buf = new buffer();
```

```C
void buffer*::finalize(buffer* self);

buffer*% buffer*::clone(buffer* self);
```

```
    var buf = new buffer();
    buf.append_int(1);
    buf.append_int(2);
    buf.append_int(3);
    
    var buf2 = clone buf;
```

```C
int buffer*::length(buffer* self);
```

```
    var buf = new buffer();
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.length().to_string().puts(); // 3
```

Returns the number of bytes of memory.

メモリーのバイト数を返します。

```C
void buffer*::reset(buffer* self);
```

```
    var buf = new buffer();
    
    buf.append_char('a');
    buf.append_char('b');
    buf.append_char('c');
    
    buf.reset();
    
    buf.length().to_string().puts(); // 0
```

Clear memory.

メモリーをクリアします。

```C
void buffer*::trim(buffer* self, int len);
```

Delete trailing memory by len.

lenだけ末尾のメモリを削除します。

```
    var buf = new buffer();
    
    buf.append_str("ABCDEFG");
    buf.trim(3);
    buf.to_string().puts(); // ABCD
```

```C
buffer* buffer*::append(buffer* self, char* mem, size_t size);
```

Add memory by mem size.

memのsizeだけメモリを追加します。

```
    var buf = new buffer();
    buf.append("ABCDEFG", 2);
    
    buf.to_string().puts(); // AB
```

```C
buffer* buffer*::append_char(buffer* self, char c);
buffer* buffer*::append_str(buffer* self, char* str);
buffer* buffer*::append_nullterminated_str(buffer* self, char* str);
buffer* buffer*::append_int(buffer* self, int value);
buffer* buffer*::append_long(buffer* self, long value);
buffer* buffer*::append_short(buffer* self, short value);
```

Add memory.

メモリーを追加します。

```C
buffer* buffer*::alignment(buffer* self);
```

Align memory.

メモリーのアライメントを取ります。

```C
int buffer*::compare(buffer* left, buffer* right);
```

Compare the buffer sizes. <0 means smaller on the left, >0 means smaller on the right. == 0 and have the same size.
Used in sort.

bufferの大きさを比べます。<0で左が小さい、>0で右が小さい。== 0で同じ大きさです。
sortで使います。

```C
buffer*% string::to_buffer(char* self);
buffer*% char*::to_buffer(char* self);
```

Convert string to buffer.

文字列をbufferに変換します。

```
    var buf = "ABCDEFG".to_buffer();
    buf.append_str("HIJ");
    
    buf.to_string().puts(); // ABCDEFGHIJ
```

```C
string buffer*::to_string(buffer* self);
```

Convert buffer to string.

bufferを文字列に変換します。

```C
static inline buffer*% char[]::to_buffer(char* self, size_t len) ;
static inline buffer*% short[]::to_buffer(short* self, size_t len) ;
static inline buffer*% int[]::to_buffer(int* self, size_t len) ;
static inline buffer*% long[]::to_buffer(long* self, size_t len) ;
static inline buffer*% float[]::to_buffer(float* self, size_t len) ;
static inline buffer*% double[]::to_buffer(double* self, size_t len) ;
```

```C
    char a[4] = { 'A', 'B', 'C', '\0' };
    
    var buf = a.to_buffer(4);
    
    puts(buf.to_string()); // ABC
```

```C
static inline list<char>*% char[]::to_list(char* self, size_t len) ;
static inline list<short>*% short[]::to_list(short* self, size_t len) ;
static inline list<int>*% int[]::to_list(int* self, size_t len) ;
static inline list<long>*% long[]::to_list(long* self, size_t len) ;
static inline list<float>*% float[]::to_list(float* self, size_t len) ;
static inline list<double>*% double[]::to_list(double* self, size_t len) ;
```

```C
    int a[3] = { 3, 2, 1 };
    
    a.to_list(3).sort().each {
        printf("%d\n", it);
    }
```

```C
static inline size_t char[]::length(char* self, size_t len) ;
static inline size_t short[]::length(short* self, size_t len) ;
static inline size_t int[]::length(int* self, size_t len) ;
static inline size_t long[]::length(long* self, size_t len) ;
static inline size_t float[]::length(float* self, size_t len) ;
static inline size_t double[]::length(double* self, size_t len) ;
```

```C
    int a[3] = { 3, 2, 1 };
    
    printf("%d\n", a.length(3));
```

# string 

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts(xsprintf("%d", 1 + 1));     // ==> 2
    puts(string("ABC").substring(0, 1));  // ==> "A"
    
    return 0;
}
```

```C
int string::length(char* str);
```

```
    s"ABC".length(); // 3
```

```C
int char*::length(char* str);
```

```
    "ABC".length(); // 3
```

```C
string char*::substring(char* str, int head, int tail);
string string::substring(char* str, int head, int tail);
```

```
    "ABC".substring(0,2); // AB
```

```C
string string::operator_load_range_element(char* str, int head, int tail);
string char*::operator_load_range_element(char* str, int head, int tail);
```

```
    "ABC"[0..2]; // AB
```

```C
string char*::reverse(char* str) ;
string string::reverse(char* str) ;
```

```
    "ABC".reverse();   // CBA
```

```C
string xsprintf(char* msg, ...);
```

```
    var str = xsprintf("%d+%d+%d", 1,2,3); // 1+2+3
```

```C
static inline string string::xsprintf(char* self, char* msg, ...)
static inline string char*::xsprintf(char* self, char* msg, ...)
```

```
    s"ABC".xsprintf("[%s]").puts(); // [ABC]
```

```C
static inline string int::xsprintf(int self, char* msg, ...)
```

```
    [1,2,3,4,5].item(0, -1).xsprintf("[%d]\n").puts();  // [1]
```

```C
string char*::delete(char* str, int head, int tail) ;
string string::delete(char* str, int head, int tail);
```

```
    var str = s"ABCDEFG".delete(0,1); // CDEFG
```
```C
list<string>*% string::split_char(char* self, char c) ;
list<string>*% char*::split_char(char* self, char c);
```

```C
    s"A,B,C".split_char(','); // [A,B,C]
```

path related wrapper

pathの関連のラッパー

```C
string xrealpath(char* path);
```

string version of realpath(3)

realpath(3)のstring版

```C
xrealpath("/aaa/../bbb"); // /bbb
```

Maybe.

多分。

```C
string xbasename(char* path);
```

string version of basename(3)

basename(3)のstring版

```C
string xextname(char* path);
```

return extension

拡張子を返す

```C
string xdirname(char* path);
```

return directory

ディレクトリを返す

```C
string xnoextname(char* path);
```

Returns the file name without the extension.

拡張子をとったファイル名を返す。

```C
int FILE*::write(FILE* f, char* str);
```

```
    FILE* f = fopen("AAA", "a");
    
    f.write("ABC");
    
    f.fclose();
```

I just made it object oriented.

オブジェクト指向っぽくしただけ。

```C
string FILE*::read(FILE* f);
```

similar

同様

```C
int FILE*::fclose(FILE* f) ;
```

similar

同様。

```C
int* FILE*::fprintf(FILE* f, const char* msg, ...);
```

```
    FILE* f = fopen("AAA", "a"9;
    
    f.fprintf("%d\n", 1+1);
    
    f.close();
```

similar
同様

```C
list<string>*% FILE*::readlines(FILE* f);
```

```
    "AAA\nBBB\nCCC\n".write("FILE", append:true);
    
    FILE* f = fopen("FILE", "r");
    
    var li = f.readlines();
    
    li[0].puts(); // AAA
    li[1].puts(); // BBB
    li[2].puts(); // CCC
```

```C
int string::write(char* self, char* file_name, bool append=false);
int char*::write(char* self, char* file_name, bool append=false) ;

string char*::read(char* file_name) ;
string string::read(char* file_name) ;
```

```C
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    "ABC".write("FILE-NAME", append:true);
    
    "FILE-NAME".read().puts(); // ABC\nABC\nABC
```

If append:false, no appending will be done. append:false is the parameter label. Easy to view source files.
It is also good to use true@append and annotations.

append:falseだと追記なし。append:falseはパラメーターラベル。ソースファイルが見やすい。
true@appendとアノテーションを使うのもいい。

# Default parameters, parameter labels

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

# mixin-layers system

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

# multiple assign

``` C
#include <comelang.h>

int, string fun(int n, string m) 
{
    return (n, m);
}

int main(int argc, char** argv)
{
    var n, m = fun(1, string("AAA"));
    
    printf("n %d m %s\n", n, m);
    
    return 0;
}
```

# Interface

``` C
#include <comelang.h>

interface sBase
{
    void show();
};

struct sChildA
{
    int x;
    int y;
    int z;
    string str;
}

sChildA*% sChildA*::initialiize(sChildA*% self)
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
    list<sBase*%>*% li = new list<sBase*%>();
    
    li.add(new sChildA() implements sBase);
    li.add(new sChildB() implements sBase);
    
    foreach(it, v) {
        it.show();
    }
    
    return 0;
}

```

# Using C

``` C
    int main(int argc, char** argv)
    {
        using c { int a = (1,2); }     // no error. It's comma operator and blace
        
        int a = (1,2);  // error. It's tuple
        
        return 0;
    }
```

``` C
> vin a.h
static inline int fun()
{
    return (1,2);
}
> vin a.c
using C
{
#include "a.h"
}

int main(int argc, char** argv)
{
    return fun();   // no error. It's comma operator and brace
}
```

# Emmbeded expression string

```
int main(int argc, char* argv)
{
    string a = s"abc";
    
    puts(a);          // abc
    
    string b = S"def";
    
    puts(b);          // def
    
    int c = 123;
    
    puts(s"c == \{c}");   // c == 123;
    
    puts(s"1 + 1 == \{1+1}");   // 1+1 == 2;
    
    return 0;
}
```

# System call errro handling like perl

and or or is like perl

# Here document

```C
#include <comelang.h>

int main(int argc, char** argv)
{
    int a = 123;
    printf("""
AAA
\{a}
BBB
CCC
    """);
    
    return 0;
}
```

if head of charactor is '#', require quote.

# method block

```
#include <comelang.h>

int main(int argc, char** argv)
{
    3.times {
        printf("%d\n", it);
    }
    
    return 0;
}
```

```
#include <comelang.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { atoi(it) }.filter { it > 1 }.each { it. printf("%d\n"); }
    
    return 0;
}
```

```
#include <comelang.h>

int main(int argc, char** argv)
{
    3.times {
        printf("%d\n", it);
    }
    
    return 0;
}
```

# Package manager

```
> comelang new xyz
> cd xyz
> cat <EOS > a.c
int main(int argc, char** argv)
{
    return fun(0, 0);
}
EOS
>cat <EOS > b.c
int fun(int a, int b)
{
    return a + b;
}
EOS
> comelang header
(make header file named common.h)
> comelang compile
(compile with -O2 option)
> comelang run
(compile with -O2 option)
(run)
> comelang header
(make header file named common.h)
> comelang debug
(compile with -g and -cg option)
(run)
> comelang clean
(clean up tmp files)
> comelang install (target-directory:default is /usr/local)
(install command file to target-directory)
```

auto included common.h

# String libraries

with -str option to comandline.

sample

``` C
#include <comelang.h>
#include <comelang-str.h>

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

```
    /193(#)#"00~|{}|{/.elif { /* Catch invalid regex */ }
```

r"" is also regex string.

```
    r"((((((((".if { "AAA".scan(Value).to_string().puts(); }
```

no ouput

```
    r".".if { "AAA".scan(Value).to_string().puts(); }
```
A,A,A

# stackfame

```C
> vin a.c
#include <comelang.h>

int fun()
{
    stackframe();
    return 0;
}

int fun2()
{
    return fun();
}

int main(int argc, char** argv)
{
    fun2();
    
    return 0;
}
> comelang -cg a.c
> ./a
a.c 5
a.c 11
a.c 16
```

for debugging.
require -cg option.

```C
#include <comelang.h>

record void fun()
{
    stackframe();
}

int main(int argc, char** argv)
{
    fun();
    return 0;
}
```

append record attribute to show stackframe. It's not required -cg option

# Template

```C
template<R> R fun(R x, R y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    fun(1,2).printf("%d\n");
    
    return 0;
}
```

type inference is no works.

```C
#include <comelang.h>

int main(int argc, char** argv)
{
    [1,2,3].map { it.to_string() }.each { puts(it); }
    
    return 0;
}
```

# Memory leak detector

```c 
#include <comelang.h>

void fun()
{
    var a = gc_inc(new int);
    *a = 123;

    stackframe();
                        
    printf("%d\n", *a);
}
                            
int main(int argc, char** argv) 
{
    fun();
                                    
    return 0;
}
~/comelang # comelang a.c
~/comelang # ./a
123
1 memory leaks. 1 alloc, 0 free.If you require debugging, copmpile with -cg option
~/comelang # comelang -cg a.c
~/comelang # ./a
a.c 9
a.c 16
123
#1 (int): a.c 16, a.c 5, 
1 memory leaks. 1 alloc, 0 free.
~/comelang # 
```

# Class

```C
#include <comelang.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

```C
#include <comelang.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

class sData2 extends sData
{
    int z;
   
    new(int x, int y, int z)
    {
        self.x = x;
        self.y = y;
        self.z = z;
    }
};

interface sDataRun
{
    void show();
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    sData2*% data2 = new sData2(1, 2, 3);
    
    data2.show();
    
    sDataRun*% inf = new sData2(1,2,3) implements sDataRun;
    
    inf.show();
    
    return 0;
}

```

```C
#include <comelang.h>

class sData
{
    int x;
    int y;
    
    new(int x, int y)
    {
        self.x = x;
        self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

class sData2 extends sData
{
    int z;
    
    new(int x, int y, int z)
    {
        self.super(x,y);
        self.z = z;
    }
    
    void show()
    {
        self.super();
        
        printf("z %d\n", self.z);
    }
};
```

```C
#include <comelang.h>

class sData
{
    new(int x, int y)
    {
        int self.x = x;
        int self.y = y;
    }
    
    void show()
    {
        printf("x %d y %d\n", self.x, self.y);
    }
};

int main(int argc, char** argv)
{
    sData*% data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

# Module

```
#include <comelang.h>

module MModule<T>
{
    T a;
    T b;
}

class sData
{
    include MModule<int>;
    
    new(int a, int b) {
        self.a = a;
        self.b = b;
    }
    
    void show() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc, char** argv)
{
    var data = new sData(111, 222);
    
    data.show();
    
    return 0;
}
```

# User finalize, User clone

version 50.1 REMOVE user_finalze, user_clone. It makes memory bug.


```
#include <comelang.h>

class sData
{
    string data;
    new() {
        self.data = string("A");
        initscr();
    }
    
    void user_finalize() {
        endwin();
    }
}

int main(int argc, char** argv)
{
    var data = new sData();
    
    return 0;
}
```

user_finalize is for use to non-memory management routine at finalize.

This is no memory leak.

user_clone is similer.

REMOVE this function.

# uniq

```
> vin a.h
using c
{
#include <stdio.h>
}

extern int gGlobalVar;

uniq int gGlobalVar = 777;

uniq void fun()
{
    printf("%d\n", gGlobalVar);
}
> vin a.c
#include "a.h"

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}
> vin b.c
#include "a.h"

void fun2()
{
    fun();
}
> comelang -c b.c
> comelang a.c b.c.o
> ./a
777
```

uniq function and global variable added to main module.
In other module, not defined contents.

# Output of standard c targeted C Source

Don't include comelang-str.h, comelang-net.h and comelang-pthread.h. Inlucde comelang.h only. It depends standard c library only. If you get c source depends standard c library only, use to "comelang -s"

# Extra libraries

Please use the C language extension library. The strength of comelang is that the C library can be used as is.

拡張ライブラリはC言語のものを使ってください。comelangの強みはCライブラリがそのまま使える点です。

# Net libraries

See libcomelang-net.c and comelang-net.h

with -net option to comandline.

# Omit return statment

```C
[1,2,3].map { return it.to_string(); }.each { puts(it); } 
    <=> [1,2,3].map { it.to_string() }.each { puts(it); ]
```

Omitting semicolon at the function block end means return statment.

# Pattern Matching

```C
#include <comelang.h>

int main(int argc, char** argv)
{
    string x = strcmp("A", "B").case {
        (Value < 0) { puts("Lesser"); puts("UHO!"); s"AAA" }
        (Value == 0) { puts("Equal"); s"BBB" }
        (Value > 0) { puts("Greater"); s"CCC" }
    }
    puts(x);
    string y = strcmp("A", "A").case {
        (Value == 0) s"Equal" }
        else s"Not Equal"
    }
    
    puts(y);
    
    return 0;
}
```

```C
#include <comelang.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    string a = fun(1).case {
        (Value == null) s"null"
        else Value + "X"
    }
    
    puts(a);
    
    return 0;
}
```

```C
#include <comelang.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    string a = fun(0).elif {
        s"null"
    }
    
    puts(a);  // "null"
    
    return 0;
}
```

```C
#include <comelang.h>

char*% fun(int a)
{
    if(a == 0) {
        return null;
    }
    else {
        return xsprintf("%d", a);
    }
}

int main(int argc, char** argv)
{
    string a = fun(1).elif {
        s"null"
    }
    
    puts(a);  // "1"
    
    return 0;
}
```
if omitting else block or statment, the value of expression is result value.

```C
#include <comelang.h>

int fun()
{
    return 0;
}

int fun2()
{
    return -1;
}

int main(int argc, char** argv)
{
    int n = fun().less {   // n == 0 block not runned
        puts("ERR");
        return 1;
    }
    int m = fun2().less {  // block runned
        puts("ERR");
        return 1;
    }
    
    return 0;
}
```

UNIX library and systemcall error handling

Pattern matching block should return the value at the end of blocks.

パターンマッチングのブロックではブロックの最後に値を返すべきです。

Pattern matchin can use wildcard.

```C
    [1,2,3].case {
        (Value === [wildcard, 2, 3]) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    struct Data { int a; int b; };
    
    Data{a:123, b:234}.case {
        (Value === Data {a:wildcard, b:234}) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    ["AAA":1,"BBB":2,"CCC":3].case {
        (Value === [wildcard:wildcard, "BBB":2, "CCC":3]) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
```

```C
#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    var data = new sData { a:123, b:234 };
    
    data.case {
        (Value === new sData { a:wildcard, b:234 }) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}
```

Example for fopen

```C
fopen("AAA", "r").if { 
    fprintf(Value, "UHO!");
    fclose(Value);
}
else {
     die("fopen"); 
}
```

```C
fopen("AAA", "r").case {
    (Value) {
        fprintf(Value, "UHO!");
        fclose(Value);
    }
    (Value == NULL) {
        die("fopen");
    }
}
```

```C
FILE* f = fopen("AAA", "r").elif {
     die("fopen");
     null
}
fprintf(f, "UHO!");
fclose(f);
```

# Object initializer

```C
#include <comelang.h>

struct sData
{
    int a;
    int b;
};

int main(int argc, char** argv)
{
    var data = new sData { a:123, b:234 };
    
    data.to_string().puts(); // new sData {a:123,b:234}
    
    return 0;
}
```

```C
#include <comelang.h>

struct sData<T>
{
    T a;
    T b;
};

int main(int argc, char** argv)
{
    var data = new sData<int> { a:123, b:234 };
    
    data.case {
        (Value === new sData<int>(a:wildcard, b:234) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    data.to_string().puts(); // new sData {a:123,b:234}
    
    return 0;
}
```

# Thread, Channel

```C
#include <comelang.h>
#include <comelang-pthread.h>

int fun(int a, int b)
{
    printf("%d %d\n", a, b);
    
    return 3;
}

int main(int argc, char** argv)
{
    int@ a = __channel__;
    int@ b = __channel__;
    
    var thread = come {
        fun(1, 2);
        a <- 111;
        a <- 222;
    }
    
    b <- 222;
    
    come_join(thread);
    
    come_poll {
        a {
            printf("a %d\n", <-a);
        }
        
        b {
            printf("b %d\n", <-b);
        }
    }
    
    return 0;
}
```

```
#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc, char** argv)
{
    int@ a = __channel__;
    int@ b = __channel__;
    
    var thread = come {
        a <- 111;
        a <- 222;
    }
    var thread2 = come {
        b <- 333;
        b <- 444;
    }
    
    while(1) {
        come_poll {
            a {
                printf("a %d\n", <-a);
            }
            b {
                printf("b %d\n", <-b);
            }
            else {
                break;
            }
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

スレッド間のデータのやり取りはグローバル変数やローカル変数で行わず全てチャネル経由で行ってください。
グローバル変数やローカル変数でやり取りするとデータの競合が起こります。
もしグローバル変数やローカル変数でやり取りする場合ミューテックスを使ってください。
コンパイラ側では禁止しませんが、みんな、大人ですし、わかりますよね。

When exchanging data between threads, do not use global or local variables, but rather use channels.
Exchanging data using global or local variables will result in data conflicts.
If you do use global or local variables, use a mutex.
The compiler will not prohibit this, but we're all adults, so we know what to do.
 

```
#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        li.sync() {
            it.to_string().puts();
        }
        sleep(1);
        li.sync() {
            it.to_string().puts();
        }
    }
    
    var thread = come {
        li.sync() {
            it.add(4);
        }
        li.sync() {
            it.add(5);
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        sleep(3);
        var it = li.lock();
        
        it.to_string().puts();
        
        li.unlock();
    }
    
    var thread = come {
        li.sync() {
            it.add(4);
        }
        li.sync() {
            it.add(5);
        }
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        sleep(3);
        
        li.lock().to_string().puts();  // on_drop call unlock()
    }
    
    var thread = come {
        li.lock().add(4); // on_drop call unlock()
        li.lock().add(5); // on_drop call unlock()
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

# on_drop, on_load

```
#include <unistd.h>
#include <pthread.h>
#include <poll.h>

using comelang-pthread;

struct come_mutex<T>
{
    T value;
    pthread_mutex_t mutex;
    bool lock;
};

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        pthread_mutex_init(&self.mutex, NULL).if {
            perror("Failed to initialize mutex");
            exit(EXIT_FAILURE);
        }
        self.value = value;
        return self;
    }
    
    void sync(come_mutex<T>* self, void* parent, void (*block)(void* parent, T it)) {
        pthread_mutex_lock(&self.mutex);
        block(parent, self.value);
        pthread_mutex_unlock(&self.mutex);
    }
    T~ lock(come_mutex<T>* self) {
        pthread_mutex_lock(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            pthread_mutex_unlock(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
}
```


25.0.1 on_drop implemeted. See comelang-pthread.h. If not binded, right_value object called on_drop method.

```
#include <comelang.h>
#include <comelang-pthread.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    come_mutex<sData<int>*%>*% data = new come_mutex<sData<int>*%>(new sData<int>());
    
    data.a = 3333;
    
    if(data.a == 3333) {
        puts("AAA");
    }
    
    return 0;
}
```

```
#include <comelang.h>
#include <comelang-pthread.h>

int main(int argc,char** argv)
{
    var li = new come_mutex<list<int>*%>([1,2,3]);
    
    var thread2 = come {
        sleep(3);
        
        li.to_string().puts();  // on_drop call unlock()
    }
    
    var thread = come {
        li.add(4); // on_drop call unlock()
        li.ck().add(5); // on_drop call unlock()
    }
    
    come_join(thread);
    come_join(thread2);
    
    return 0;
}
```

```
struct come_mutex<T>
{
    T value;
    mutex_t mutex;
    bool lock;
};

#define MUTEX_INITIALIZER (mutex_t){ .locked = false, .core = NULL }

impl come_mutex<T>
{
    come_mutex<T>*% initialize(come_mutex<T>*% self, T value) {
        mutex_init(&self.mutex);
        self.value = value;
        return self;
    }
    
    void sync(come_mutex<T>* self, void* parent, void (*block)(void* parent, T it)) {
        mutex_enter_blocking(&self.mutex);
        block(parent, self.value);
        mutex_exit(&self.mutex);
    }
    T~ lock(come_mutex<T>* self) {
        mutex_enter_blocking(&self.mutex);
        self.lock = true;
        
        return self.value;
    }
    void unlock(come_mutex<T>* self) {
        if(self.lock) {
            mutex_exit(&self.mutex);
        }
    }
    
    void on_drop(come_mutex<T>* self) {
        self.unlock();
    }
    T~ on_load(come_mutex<T>* self) {
        return self.lock();
    }
}
```

31.2.0 on_load implemeted.

```
#include <comelang.h>
#include <comelang-pthread.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    come_mutex<sData<int>*%>*% data = new come_mutex<sData<int>*%>(new sData<int>());
    
    data.a = 3333; // lock and unlock automatically
    
    if(data.a == 3333) { // lock and unlock automatically
        puts("AAA");
    }
    
    return 0;
}
```


# Exception

```
#include <comelang.h>

exception int fun()
{
    return (3, false);
}

int main(int argc,char** argv)
{
    int a = fun().expect;
    
    printf("a %d\n", a);
    
    return 0;
}
```
exited.

```
#include <comelang.h>

exception int fun()
{
    return (3, true);
}

int main(int argc,char** argv)
{
    int a = fun().expect;
    
    printf("a %d\n", a);
    
    return 0;
}
```
a 3

```
#include <comelang.h>

exception int fun()
{
    return (3, false);
}

int main(int argc,char** argv)
{
    int a = fun().rescue {
        5
    }
    
    printf("a %d\n", a);
    
    return 0;
}
```
a 5


```
#include <comelang.h>

exception int fun()
{
    return (3, true);
}

int main(int argc,char** argv)
{
    int a = fun().rescue {
        5
    }
    
    printf("a %d\n", a);
    
    return 0;
}
```
a 3


# Immutable

```C
#include <comelang.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

class sData2
{
    int a;
    int b;
    
    new() {
        self.a = 111;
        self.b = 222;
    }
    
    immutable void fun() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    immutable sData<int> data;
    
    (&data).fun();
    
    val data2 = new sData2();
    
    data2.fun();
    
    return 0;
}
```

immutable put on the head of function definition.
immutable prohibits the storing fields an the storing array index.
immutable prohibits the storing variable of self.

immutable convenients for the paralle processing programing.

mutable is default.

```
#include <comelang.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

class sData2
{
    int a;
    int b;
    
    new() {
        self.a = 111;
        self.b = 222;
    }
    
    immutable void fun() {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    immutable sData<int> data;
    
    (&data).fun();
    
    immutable sData2*% data2 = new sData2();
    
    data2.fun();
    
    immutable list<int>*% data3 = [1,2,3];
    
    //data3.add(4);
    
    puts(data3.to_string());
    
    return 0;
}

```

finally this is comming.

```
#include <comelang.h>
#include <comelang-pthread.h>

struct sData<T>
{
    T a;
    T b;
};

impl sData<T>
{
    sData<T>*% initialize(sData<T>*% self) {
        self.a = 111;
        self.b = 222;
        
        return self;
    }
    immutable void fun(sData<T>* self) {
        printf("%d %d\n", self.a, self.b);
    }
}

int main(int argc,char** argv)
{
    come_mutex<sData<int>*%>*% data = new come_mutex<sData<int>*%>(new sData<int>());
    
    data.lock().a = 444;  // automaticaly unlock
    
    sData<int>*% data2 = data.lock();
    
    data2.a = 3333;
    
    
    // cope out , unlock, automatically
    
    return 0;
}

```
