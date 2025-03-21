Welcome to the comelang wiki!

ようこそ、comelangのwikiへ。このwikiではある程度のC言語の知識があると仮定して記述していきます。C言語の基本を勉強するには他の書籍に任せたいと思います。

comelangはC言語拡張した言語でGoやRust、Swift、Kotlinなどの影響を受けています。みなさんご存知でしょうがC言語にはオブジェクト指向プログラミングの拡張をしたC++という言語があります。C++は組み込み系でも使われていて業界標準と言えるかもしれません。しかし、仕様が複雑で学習が難しい言語でもあります。

comelangはC++のようなCを拡張した言語ですがGoやRust, Swift, Kotlinのようなモダンな言語に備わった機能に絞ってC言語を拡張していて、実装したいソフトウェアを簡単に作れるように工夫されてます。データベースサーバーやwebサーバー、コンパイラやインタプリタなどは驚くほど簡単に実装できます。私は自分自身でcomelangを使ってエディッタやシェル、インタプリタ、webサーバーやデータベースサーバーを作ってみましたが、非常に簡単に実装することができました。だいたい思いついてから2,3日で形にすることができました。私がC言語に熟練していることもあるとは思いますが、comelangにはGCとコレクションライブラリがあるため、煩わしいメモリ管理をしなくていいこともあると思います。

Cしか使えない環境でもcomelangは-Sオプションを使うとCソースを出力するため、Cが動く環境なら多少の工夫で動くはずです。まあ、そういう環境ではクロスコンパイルしてアプリを作成するため、C++が使えることも多いかもしれません。でも、そのような環境で使うコンパイラの選択肢としてcomelangを使うことも考えられるでしょう。

# Hello World

プログラミングの第一歩といえば、これです。UNIX端末でHello Worldと出力させます。（表示させる）

```
> vim hello.c
#include <stdio.h>

int main(int argc, char** argv) 
{
    puts("HELLO WORLD");

    return 0;
}
> comelang a.c
> ./a
HELLO WORLD
```

\>のあとはシェルにタイプするコマンドです。ここではvimを使っています。emacsでもいいです。vimは強力な編集機能が特徴のエディッターです。僕はvimのようなvinというエディターをcomelangで作って愛用していますが、世の中の有名なハッカーはemacsを使っていることが多いそうです。まあ、好きな方を使いましょう。
僕も昔はemacsを使っていましたが、カスタマイズに凝りすぎて本題のアプリ作成が進まず、vimに鞍替えしました。
どちらのエディッターもカスタマイズができますが、エディッターのカスタマイズは最小限にすることをお勧めします。

話題がそれました。\#include <stdio.h>はプリプロセッサーへの指示でstdio.hというヘッダーファイルをソースファイルに貼り付ける指示です。この場合\#include <stdio.h>の場所にstdio.hというテキストファイルが貼り付けられて、そのテキストと\#includeの後の部分全てをcomelangが処理します。
C言語ではソースファイルはまずcppという名前のプリプロセッサーが処理します。comelangのコンパイルの処理の流れは

cpp→comelang→c compiler→assembler→機械語

と工場のラインのように処理されます。comelangは実は正確にはコンパイラではなくC言語のソースファイルを出力するトランスパイラです。このC言語を出力する方法には利点がいくつかあります。一つはC言語が動くコンパイラさえあればcomelangが使えること、二つ目はセルフホスト（自分自身をコンパイルする。comelangはcomelangで作られてます）が容易であること、C言語用のデバッガーが使えることです。

comelangは-sオプションをつけると、a.cというcomelangのソースファイルならa.c.cというファイルを出力させることができます。内部的にはa.c.cというファイルをさらにCコンパイラがコンパイルして、アセンブラがさらにアセンブルして最終的に機械語へと翻訳します。

まあ、ここでは\#include <stdio.h>とするとputsという出力用の関数が使えるようになると覚えておけばいいでしょう。

```C
int main(int argc, char** argv)
{
    puts("HELLO WORLD");

    return 0;
}
```

というのはプログラムに一つだけあるメイン関数を定義しています。メイン関数はプログラムが起動された時に呼ばれる関数でメイン関数が終了するとプログラムが終了します。
最初のintというのは32bitの数値型で、まあ、普通に一般的な数字を扱う数値型と覚えればいいでしょう。これは関数の戻り値の型を定義しています。この場合main関数という関数の実行結果を数値型としています。main関数はint型を返さないといけないとされていて、main関数の戻り値がシェルの`$?`という環境変数に入れられるコマンドのステータスコードとされています。
0が正常に終了した場合で0でない場合はエラーがあった場合です。C言語のライブラリではint型を返す関数やUNIXのシステムコールは大抵正常終了が０で<0が異常終了です。./aを実行した後にシェルでecho `$?`とすれば0が表示されるはずです。エラーがあった場合はreturn 1としてメイン関数が1を返すようにすればecho `$?`は1が表示されます。

(の後のint argc, char\*\* argvはメイン関数に渡される引数で、メイン関数の場合はコマンドライン引数となります。例えば./a 1 2 3とした場合argcは4が入っていてargv[0]には./aという文字列が、argv[1]には1がargv[2]には2がargv[3]には3が入っています。注意すべきなのは最初のargvには./aというコマンド名自身が渡されている点です。
charというのは8bit数値型でASCII文字列を表します。簡単いうと文字1文字分の型名です。コンピュータでは文字も数字にマッピングされているため、charは数値型でもあります。
char\*\*の\*\*というのはポインタです。これの理解がC言語では難しいと言われていますが、簡単にいうとメモリのアドレスが入っています。この場合はポインタのポインタ、まあ、要するに文字列の配列みたいなものと思ってもらえれば結構です。

関数の引数は以下のように使います。

```C
int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    int y = fun(1, 2);

    return 0;
}
```

この場合funのxには1が代入されてyには2が代入され、funの戻り値は3となります。main関数の引数は特別にコマンドラインの引数となるだけです。

comelangの場合ブロックの最後にセミコロンをつけないと戻り値とされるため以下のようにも書けます。

```C
int fun(int x, int y)
{
    x + y
}

int main(int argc, char** argv)
{
    int y = fun(1, 2);

    return 0;
}
```

これは最近のモダンな言語ではこのようにされていることが多いです。後述するメソッドブロックで簡潔に戻り値が書けるようにこの表記が入っていることが多いです。

```C
int main(int argc, char** argv)
{
    puts("HELLO WORLD");

    return 0;
}
```

に戻りましょう。putsというのは引数の文字列を出力して改行コードを追加して出力します。改行コードはMac, Linuxでは\n(10)です。改行コードはchar型(8bit整数）で数値にすると10のことです。コンピュータでは実は文字ですら数値に過ぎないため、このように改行コードも10がマッピングされています。要するにABCDEFGなどと人間が読める文字だけでなく特別な意味を持つ機能的な文字もchar型（8bit数値型)として扱われます。これはコントロール文字と呼ばれ、画面のクリアやベル音を出す、端末の出力を止めるなどの機能も特定の数字が割り当てられてます。

"HELLO WOLRD"というのは出力される文字列のことでこれは内部的には8bit整数型の羅列になります。この場合はputsに"HELLO WORLD"という文字列を渡して出力させています。

returnというのは関数の戻り値を返すもので関数の実行結果です。この場合0を返して正常に終了したことを表しています。
{}というのは関数の始まりと終わりを示すものです。Pythonなどとは違いC言語はフリーフォマットの言語のため、始まりと終わりを示す必要があります。
フリーフォーマットというのはソースファイルの改行やスペースが特別な意味を持たず、例えば、このソースの場合
```C
int main(int argc, char** argv) { puts("HELLO WORLD"); return 0; }
```
と書いても同じということです。C言語ではユーザーが自由にソースを見えやすいように整形することができます。

```C
int main(int argc, char** argv) {
    puts("HELLO WORLD");

    return 0;
}
```

というJavaのようなスタイルで書くことも最近では多いようです。

```
> comelang a.c
> ./a
HELLO WORLD
```

に戻りましょう。comelangのソースファイルの拡張子はC言語と同じく.cです。こうしたのは賛否両論だと思います。特に深い理由はありません。

comelangはコンパイルすると拡張子を除いたファイル名を持った実行形式(機械語）を返します。この場合はaです。-oオプションで指定すれば、出力ファイルを変更できます。
comelang -o hello a.cとするとhelloという実行形式がつくられます。

```
> comelang -s a.c
```

とすればa.c.cというCソースが得られます。aも得られます。この場合コンパイルエラーやデバッグ時のソースファイルの行番号もa.c.cに合わせられます。a.c.cを見ながらバグを特定したい場合に便利です。comelang a.cの場合、デバッグ時はa.cの行番号となります。

```
> comelang -E a.c
```

でa.c.iというファイルが得られてcppの出力結果となります。中にstdio.hの内容が貼り付けられていると思います。
stdio.hの中身は関数の宣言や構造体の定義、typedefの定義、グローバル変数の定義などさまざまです。
.hが拡張子のファイルはヘッダーファイルと呼ばれて、ライブラリを呼び出すときに\#includeすると、そのライブラリを使うことができます。
元々プログラミング言語は拡張可能でなかった時代もありC言語は言語の基本機能は最小限にして、ライブラリでどんどん機能を拡張できるのが特徴でもありました。
例えば正規表現を行うpcreというライブラリの機能を使いたい場合は\#include <pcre.h>としてオプションとして-lpcreとライブラリをリンクすれば
C言語でも正規表現を使うことができるようになります。
comelangは正規表現の文字列ライブラリを持っており\#include <comelang-str.h>とすればRubyのような文字列処理を行うライブラリが使えます。
もちろんpcreを自分で使いオリジナルの文字列ライブラリを作ることも可能でしょう。

自分でもヘッダーファイルは作れます。

```
> vim b.h
extern int fun(int x, int y);
> vim a.c
#include "b.h"

int main(int argc, char** argv) {
    int y = fun(1, 2);

    printf("%d\n", y);

    return 0;
}
> vim b.c
int fun(int x, int y)
{
    return x + y;
}
> comelang -c b.c
> comlenag a.c b.c.o
```
これを分割コンパイルと言います。b.cの関数定義をb.hというヘッダーをincludeして使っています。comelang -c b.cとするとb.c.oというファイルが得られます。-cをつけるとmain関数がないモジュールとしてコンパイルすることができます。b.c.oの機能を使いたい場合\#include "b.h"とすればいいです。

```
extern int fun(int x, int y);
```

は関数の内容は定義せずに関数の宣言をしています。C言語では呼び出す前に必ず関数の宣言が必要です。型チェックができないためです。
funという関数の実体はb.c.oに入っています。それを調べるためにはnmコマンドでnm b.c.oとすればいいです。funという関数の内容が入っていることがわかるはずです。
うろ覚えですがTとマークがついていれば実態がある場合、Uの場合は外部の関数を参照しているという意味だったと思います。この辺りの情報はAIに聞くのが早いです。
もし、a.cでもfunという関数の内容を定義しているとリンク時に同じ関数が多重定義されているのでエラーとなります。

```
extern int fun(int x, int y);
```

の場合は関数の内容を定義せずに関数の宣言のみを行なっているので、多重定義にはなりません。

comelangにはパッケージマネージャーがあるためヘッダーファイルを作らなくても分割コンパイルが行えます。

```
> comelang new X
> cd X
> vim 01b.c
int fun(int x, int y)
{
    return x + y;
}
> vim 02a.c
int main(int argc, char** argv)
{
    int y = fun(1, 2);
    return 0;
}
> comelang compile
```

comelang new XでXというプロジェクトを作っています。その中で02a.cというソースファイルと01b.cというソースファイルを作っています。
02a.cは01b.cで定義されたfunという関数を使っています。本来であれば、01b.cのヘッダーファイルを作成しないといけませんが、comelangは自動的にヘッダーファイルを作ってくれます。
最初の数字は自動的に生成するヘッダーファイルの処理順です。comelangのプロジェクトマネージャーで生成したいヘッダーの順番を書いてください。例えば、この場合funは02a.cで参照されているため、01b.cとしています。構造体や列挙型などの順番も考えないといけません。一応ヘッダーはMakefileでcomelang header common.h *.cとされているので、ここで順番を指定すれば、数字は必要ありません。順番を制御したい場合はこれを修正してください。
comelang compileすると.cという拡張子があるファイルからヘッダーファイルcommon.hを自動的に作成して、02a.cと01b.cで自動的に\#includeします。
comelang compileするとXという実行形式がつくられるでしょう。
comelang runとするとコンパイルだけでなく実行も行います。
comelang debugとするとデバッグモードをONにして実行を行います。デバッグモードはコンパイルオプションとしてC言語のデバッグオプション-gとcomelangのデバッグオプション-cgをつけてコンパイルします。

# 変数

まずはプログラミングで必須の知識として変数について書きます。変数というのは数値や文字、文字列などを格納するメモリのことです。

```
int a = 3;
```

とするとaには3が入ります。変数というのは必ずメモリ上に取られているもので、C言語の場合はメモリについて意識してプログラミングする必要があります。
メモリというのはコンピュータにある０と1の状態を持つ装置で、1つの番地に対して32bitのCPUなら２進数で32桁、64bitのCPUなら64桁の0と1の数値を格納することができます。
アドレスというのはこの番地のことで、単なる数値でもあります。アドレスのサイズはCPUによって変わり32bitCPUでしたら、32bitの数値であり64bit CPUでしたら64bitの数値であります。
ポインタというのはアドレスのことで単なるこのアドレスが入った整数値と考えると理解しやすいです。
この場合aに3が入っているので、あるアドレスのメモリに2進数で11という数値が格納されています。
メモリはいろんな実装方法がありますが、現在一般的なのはフリップフロップという電圧がHIGHであれば1を表しLOWであれば0を表す装置が使われています。
このHIGH、LOWの状態を変えることによって変数に格納されている数値を1か0としています。
aのアドレスを得るには

```
int a = 3;
int* b = &a;
```

とします。bは0xFFcd FF3bc ..などと64bitのCPUなら64bitの数値が入っています。
これがアドレスが入ったポインタです。アドレスも数値であるというならば、int\*などと型名は必要ないと思うかもしれません。　
しかし

```
int c = *b;
```

などとしてbというアドレスにある値を取り出したい場合(derefference)int\*という型名が必要です。この場合bに入ったアドレスからintのサイズ分読み込んでcに格納しろという命令になります。
char\* cでしたら、\*cとするとcに入ったアドレスに対してchar(8bit)の値を読み込みます。
このderefferenceという処理がC言語の強みであり、弱点でもあります。この時不正なアドレスからデータを読み込もうとすると悪名高きsegmentaion faultというエラーとなります。
segmentation faultのバグはgdbやlldbを使ってバグがある箇所を特定します。gdbを使うためにはプログラムのコンパイル時に-gオプションをつけて、comelangなら-sオプションもつけてコンパイルしてください。コマンド名が./aならgdb ./aとしてgdbのコマンドラインに入りrとすれば、プログラムを実行できます。segmentaion faultが起これば、gdbのコマンドラインでbtとすればスタックフレームが見れます。（関数の呼び出し履歴とソースファイル番号）このようにしてsegmentation faultが起こったソースファイルの場所を特定できます。
話を戻しましょう。ポインタはchar\*\*であろうが、int\*\*\*であろうが入っている値は単なるアドレスに過ぎません。ただ、\*bなどとアドレスから値を読み込むときの大きさが必要なためint\*, char\*と型名に\*をつけます。

```
int a = 111;
int* b = &a;
char* c = (char*)b;
char d = *c;
```

は、正しいコードです。int*もchar\*cもアドレスのため、64bit CPUでしたら64bitの整数であり相互に代入しても大丈夫です。ただ\*cとした場合、aが入ったメモリからはintの大きさだけメモリからデータが呼び込まれるのではなくchar(8bit)だけデータが読み込まれます。この場合元々のaの値は111は8bitで表現できるためdは111が入ります。

```
int a = 3;
```

に戻りまししょう。この場合aはメモリのどの部分に格納されるのでしょうか？それはスタック領域です。スタック領域というのは関数が呼ばれたときに作られますが、関数から脱出すると全部消されてしまいます。この領域はユーザーが意識することなく自動的に確保されるため便利です。関数の呼び出しのネストが大きくなって変数の確保が多数になっても、一旦関数から脱出するとメモリが枯渇することがありません。ただし関数が脱出すると自動的に解放されるということは以下のようなコードはC言語では実行時エラーとなります。

```
> vim a.c
int* fun(int x)
{
    x = 111;
    return &x;
}

int main(int argc, char** argv)
{
    int* a = fun(1, 2);

    printf("%d¥n", *a);

    return 0;
}
> comelang a.c
> ./a
不正な値を表示する。
```
これは実行時にエラーを出さずに意味のない値を表示してしまうため、非常に厄介なバグです。C言語ではこのような実行時エラーの追跡が非常に困難です。
親切なエラーメッセージが出ることもなく不正なメモリアクセスが起こってしまいます。
このエラーを解説するとxというのはfunの中では有効な値が入っていますが、funを出るとスタック領域が解放されるためmain関数のaに入ったアドレスは不正な値が入ったアドレスが入っています。
その不正なメモリに対して\*aとint型の大きさだけ読み込むと不正なメモリアクセスとなります。(しかも、segmentation faultも起こらず実行されてしまう）
これは仕組み的に仕方がないことで、comelangでもこの問題は解決していません。ある程度慣れたCプログラマーはこのようなバグは起こしません。なぜならコンピュータの仕組みをよく理解しているからです。
しかし、最初の頃はこのようなバグを起こしてしまうと思います。安心してください。先人たちはこのような問題に対して解決策を残しています。
この種のエラーを検出するにはvalgrindという不正な実行時のメモリアクセスを検出するソフトを使います。

```
> valgrind ./a
```

としてください。comelangに-gオプションをつけると不正なメモリを行われたソースファイルの場所が特定できます。

```
> comelang -g -S a.c
```

としてvalgrindを使うと出力されたa.c.cというCソースでの不正なメモリアクセスが行われたソースファイルの行番号が特定できます。

あとはvalgrindの出力を見てください。不正なメモリアクセスがある場所を表示してくれます。ただし、Macではvalgrindは使えません。Macでvalgrindを使いたい場合はdockerなどでLinuxを動かし、その中で使えばいいと思います。またvalgrindがMacに対応してくれるかもしれません。

# ヒープ領域

メモリの種類にはスタック以外にヒープがあります。

```
int* a = malloc(sizeof(int));
```

とするとヒープ領域にsizeof(int)分のメモリを確保してaにそのアドレスが入ります。この場合は関数の脱出に関係なく、アドレスがfreeされるまでメモリが保持されます。
aというアドレスを使えばプログラムの中のどの関数からでもアクセスできるため、便利です。
aが必要なくなれば

```
free(a);
```

と呼び出します。もし、これを呼び出さないとメモリが残ったままとなり何度もこれが行われるとメモリは枯渇します。
サーバーアプリのような常時起動されているプログラムではどんどんプログラムのサイズが大きくなっていき最終的にはハードウェアのメモリが全て無くなり、サーバーアプリはシステムによって強制終了されるでしょう。
これをメモリリークと呼びます。これを検出するためにはvalgrindを使います。valgrindによってメモリリークがあるソースファイルの位置がわかります。またメモリリークが起こっていることもわかるでしょう。
メモリリークのバグはC言語では深刻な問題で、ソフトウェアが大規模になれば、必ず発生するとされます。
真偽は確かではありませんが、Windowsでもこのメモリリークのバグが存在していると言われています。

comelangではこの問題は以下のように解決しています。mallocは直接使わず

```
int*% a = new int;
```

とします。これでaにはintサイズ分のメモリが確保されます。

```
*a = 111;
```

などとaにint型のデータを格納できます。
このように確保されたメモリが万一メモリリークした場合comelangではプログラムの実行後にメモリリークがあったことが報告されます。
メモリリークがなければ何も表示されません。この検出機能には特にコンパイルオプションも必要なく使えアルゴリズムもO(1)で効率的で実行が遅くなったりはしません。
メモリリークが起こった場所を確定したい場合comelang -cgとしてプログラムをコンパイルして実行すると実行後にメモリリークが起こった変数の型とソースファイルの行番号がわかります。残念ながら、やや出力は見づらいです。
まあ、comelangの場合、インクリメンタルGCを備えるため、滅多なことではメモリリークは起こりません。このようなヒープの煩わしい処理を意識することは必要ありません。

```
int*% a = new int;
*a = 111;
````

などとint*の後に%をつけることによってヒープメモリを格納した場合GCがうまく対処してメモリリークを起こさず自動的にfreeしてくれます。

```
int*% a = new int;
int*% b = a;
*a = 111;
*b = 222;
```

などと２回%をつけてヒープメモリを参照した場合ヒープメモリの参照された回数が２回と記録され、aとbがプログラム上で見えなくなった時参照カウントが-2されて自動的にnew intのヒープメモリが解放されます。これは構造体や関数の引数に格納される場合でも期待通り動きます。配列の場合、ヒープメモリの自動freeは扱えませんが、ヒープメモリはvectorやlist, mapなどコレクションライブラリに格納してください。JavaやPythonのように気軽にヒープメモリを使えます。

グローバル変数も自動的にfreeされます。ただし、関数外ではヒープメモリを割り当てることができません。

```
> vim a.c
#include <comelang.h>

int*% gA;

int main(int argc, char** argv)
{
    gA = new int;
 
    *gA = 111;

    printf("%d\n", gA);

    return 0;
}
> comelang a.c
> ./a
111
```

この場合もメモリリークがないため、メモリリークがあるとは表示されません。

# コレクションライブラリとGC

comelangを使う大きな意義はこのコレクションライブラリとGCです。これがあるためアプリケーションの作成が非常に簡単となります。
実際Javaが使われるようになった大きな理由の一つです。メモリにはスタック領域とヒープ領域があると説明しましたが、スタック領域は一時的に作業的な処理を行うために使うものであり、メモリの主役はヒープと言えます。マイコン向けなどCPU速度が遅くメモリが限られたプログラムはヒープは処理速度的に問題があるためグローバル変数と配列でメモリを静的に(固定長のサイズで）確保する場合が多いですが、サーバー向けのPCなどはヒープをメインに使っても問題がありません。
そのままのC言語ではこのコレクションライブラリがないため、データ構造に応じてその都度、自分でコレクションを実装しないといけませんが、comelangの場合はライブラリが使えます。
またgenericsという格納される型に応じてライブラリが自動的に生成されるため、処理速度も速く高速です。
もちろんcomelangはC言語でもあるため、C言語のようにデータ構造に応じて、自分でコレクションを作ることもできます。

さて、とりあえず、サンプルとしてPersonという人のデータが入ったクラスをlistというコレクションに格納してみましょう。

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };

class Person
{
    string name;
    int age;
    enum Gender { kMale, kFemale } gender;

    void show() {
        printf("name %s age %d gender %s\n", self.name, self.age, gGender[self.gender]);
    }
};

int main(int argc, char** argv) 
{
     var persons = new list<Person*%>();

     var ken = new Person { name:s"Ken", age:32, gender:kMale };
     var ryu = new Person { name:s"Ryu", age:32, gender:kMale };

     persons.add(ken);
     persons.add(ryu);

     foreach(it, persons) {
         it.show();
     }

     return 0;
}
```

こんな感じです。Personにはnameとageとgenderというフィールドがあります。それをObject initializerで初期化してkenとryuというPerson型のオブジェクトを生成しています。
それをpersonsというlistに格納してforeachで二つともshowしています。

```C
#include <comelang.h>
```

はcomelangの基本ライブラリを使い文法をcomelangとして使うことを宣言しています。comelangの文法とは一つだけCと互換性がないところがあり、using comelang;とcomelang.hの中で宣言されているため、\#include <comelang.h>とするとcomelangの文法が使われます。これは(1,2)の解釈についてです。comelangはこれを1と2のタプルであると解釈しますがC言語ではコンマ演算子とカッコと解釈します。using comelangとされてない場合Cの解釈が起こりますが、\#include <comelang.h>とするとusing comelangとされているため、(1,2)は数値二つのタプルと解釈します。この違いのため、comelangではCのヘッダーファイルをincludeする時に以下のようにしたほうがいいです。

```C
using C 
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}
```

ほんとどの場合そのままincludeしても問題ありませんがまれにC言語のヘッダーファイル内のinline関数で(1,2,3)などと使われている場合があるためです。
comelang.hの内容についてはlist, map, tuple, vectorと基本的なstringライブラリなどです。comelang.hは標準Cライブラリしか依存していないため、comelang.hだけの機能を使ってcomelangを使う場合は、標準Cライブラリさえあれば、どの環境でも動きます。実際UNIXでないマイコンであるRaspberry pi picoでもcomelangとcomelang.hを使うことに成功しています。

```
char* gGender[2] = { "Male", "Female" };

class Person
{
    string name;
    int age;
    enum Gender { kMale, kFemale } gender;

    void show() {
        printf("name %s age %d gender %s\n", self.name, self.age, gGender[self.gender]);
    }
};
```

gGenderは性別が入った文字列の配列です。まあ、C言語的に書きました。
Personはクラスで文字列型のname, 数値型のage, kMale, kFemaleのどちらかが入ったgenderというフィールドを持っています。
showはフィールドの出力を行なっています。selfはメソッドの暗黙の第一引数で省略できません。フィールドを参照します。
文字列型のstringはtypedef char*% string;と定義されていてヒープに確保される文字列の型です。

```C
string str = string("ABC");
string str2 = s"ABC";
```
などと初期化できます。s"ABC"は式埋め込み文字列で、中に式を埋め込むことができます。Personのshowというメソッドも以下のように定義できます。

```C
class Person
{
    string name;
    int age;
    enum Gender { kMale, kFemale } gender;

    void show() {
        puts(s"name \{self.name} age \{self.age} gender \{gGender[self.gender]}");
    }
};
```

`\{}`内の変数でto_string()が呼ばれて文字列に変換されてペーストされています。to_stringは型ごとに自動的に定義されるため特に意識する必要はありません。

```
    enum Gender { kMale, kFemale } gender;
```

enumは型宣言とフィールドの宣言同時に行なっています。C言語は型が書けるところならばstruct, enum, unionなどを定義しつつ、変数宣言もできます。
まあ、Cが簡潔に書けると言われる所以です。

```
int main(int argc, char** argv) 
{
     var persons = new list<Person*%>();

     var ken = new Person { name:s"Ken", age:32, gender:kMale };
     var ryu = new Person { name:s"Ryu", age:32, gender:kMale };

     persons.add(ken);
     persons.add(ryu);

     foreach(it, persons) {
         it.show();
     }

     return 0;
}
```

を解説します。varというのは型推論を行う変数宣言で右辺値の方に応じた変数を宣言します。list<Person*%>*% personsと宣言しても同じことです。
\%をつけるとヒープメモリを所有することができ、インクリメントカウントの値を＋１します。インクリメントカウントが0になるとヒープは解放されます。
personsは`list<Person*%>`というリストをヒープに確保した値が入ります。
`list<Person*%>()`の`()`は`list<Person*%>.initialize()`の略でコンストラクタ呼び出しを行なっています。
`list<Person*%>()`というのはPersonのヒープに確保されたポインタを格納するリストであるという宣言です。
\%をつけているため格納されたPersonはリファレンスカウントが+1されてpersonsが所有します。
まあ、大抵の場合はコレクションにはポインタは\%をつけておけば問題ありません。
kenとryuはobject initializerを使い初期化したヒープに確保されたPerson型です。
persons.add(ken)とperson.add(ryu)でkenとryuをpersonsに追加しています。
foreachはコレクション全てに実行させたい場合使うループで、この場合itにコレクションの要素(Personのヒープメモリ）が一つ一つ入っていきます。
それに対してshow();を行い全てのpersonsの要素にshowを実行しています。
`persons[0]`とすればkenが`persions[1]`とすればryuが得られます。この場合`persons[99999]`とするとエラーを出してプログラムは終了します。
`persons[999999]??`とすればnullが得られます。

listには値の表現があります。それを使うとこのコードこう書けます。

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };

class Person
{
    string name;
    int age;
    enum Gender { kMale, kFemale } gender;

    void show() {
        printf("name %s age %d gender %s\n", self.name, self.age, gGender[self.gender]);
    }
};

int main(int argc, char** argv) 
{
     var ken = new Person { name:s"Ken", age:32, gender:kMale };
     var ryu = new Person { name:s"Ryu", age:32, gender:kMale };

     var persons = [ key, ryu ];

     foreach(it, persons) {
         it.show();
     }

     return 0;
}
```

`[]`がリストの表現となります。わかりやすいようにPythonと同じにしてあります。

map型の例を出しましょう。

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };

enum Gender { kMale, kFemale };

class Person
{
    new(string name, int age, int gender=kMale) {
       string self.name = name;
       int self.age = age;
       int self.gender = gender;
    }

    void show() {
        puts(s"name \{self.name} age \{self.age} gender \{gGender[self.gender]}");
    }
};

int main(int argc, char** argv) 
{
     var persons = new map<string, Person*%>();

     var ken = new Person(name:s"Ken", age:32);
     var ryu = new Person(s"Ryu", 32);
     var chunlie = new Person(name:s"Chunlie", age:32, gender:kFemale);

     persons.insert(s"Ken", ken);
     persons.insert(s"Ryu", ryu);
     persons.insert(s"Chunlie", chunlie);

     foreach(key, persons) {
         Person* person = persons[key];
         person.show();
     }

     return 0;
}
```

Personはちょっと書き方を変えてコンストラクタを用意しています。

```
class Person
{
    new(string name, int age, int gender=kMale) {
       string self.name = name;
       int self.age = age;
       int self.gender = gender;
    }

    void show() {
        puts(s"name \{self.name} age \{self.age} gender \{gGender[self.gender]}");
    }
};
```

`new(`はコンストラクタでobject initializerのようにmain内で初期化するのではなくクラスの中で初期化しています。
newの中では型名 self.フィールド名によってフィールドを宣言することができます。int gender=kMaleは引数のデフォルト値でgenderを省略すると自動的に入れられる値です。

```
     var ken = new Person(name:s"Ken", age:32);
     var ryu = new Person(s"Ryu", 32);
     var chunlie = new Person(name:s"Chunlie", age:32, gender:kFemale);
```

呼び出し側では`new Person(`とすることで`new(`が呼ばれてます。genderはデフォルト値があるため省略可能です。`name:s"Ken"`はパラメータラベルで引数の名前を明示して関数を呼び出します。この機能の利点ですが、関数の呼び出し側でコードが読みやすくなることと全ての引数にデフォルト引数があった場合、好きな引数のみ指定して引数を変えることができる点です。実際iPhoneのSwiftではGUIのアプリの作成にデフォルト引数とパラメーターラベルを多用して、好きな引数だけ値を指定して、できる限りアプリが書きやすいようにしていたと思います。comelangのライブラリでこのようなテクニックが使えます。ryuの場合は普通に引数を順番に呼び出してます。genderはMaleが自動的に代入されています。

```
     persons.insert(s"Ken", ken);
     persons.insert(s"Ryu", ryu);
     persons.insert(s"Chunlie", chunlie);
```

mapに値を追加しています。第一引数がキーです。第２引数を格納します。

```
     foreach(key, persons) {
         Person* person = persons[key];
         person.show();
     }
```

全てのPersonにアクセスしています。personsのforeachは全てのキーが入っていきます。persons[key]でPersonの値が取れます。もし存在しないkeyにアクセスした場合プログラムはエラーを出します。もしエラーを出したくない場合は`persons[key]??`としてください。戻り値がnullを返します。persons[key]の戻り値が`Person*%`でない点にも注意してください。ただの参照となります。persons[s"Ken"]とすればkenがpersons[s"Ryu"]とすればryuが得られます。

mapにも値の表現があります。Pythonと同じです。

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };

enum Gender { kMale, kFemale };

class Person
{
    new(string name, int age, int gender=kMale) {
       string self.name = name;
       int self.age = age;
       int self.gender = gender;
    }

    void show() {
        puts(s"name \{self.name} age \{self.age} gender \{gGender[self.gender]}");
    }
};

int main(int argc, char** argv) 
{
     var ken = new Person(name:s"Ken", age:32);
     var ryu = new Person(s"Ryu", 32);
     var chunlie = new Person(name:s"Chunlie", age:32, gender:kFemale);

     var persons = [s"Ken": ken, s"Ryu":ryu, s"Chunlie": chunlie ];

     foreach(key, persons) {
         Person* person = persons[key];
         person.show();
     }

     return 0;
}
```

次はタプルです。

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };

enum eGender { kMale, kFemale };

int main(int argc, char** argv) 
{
     var ken = (name: s"Ken", age:32, gender:kMale );
     var ryu = (name: s"Ryu", age:32, gender:kMale );

     var clone_ryu = clone ryu;
     clone_ryu.name = s"CloneRyu";

     puts(s"name \{ken.name} age \{ken.age} gender \{gGender[ken.gender]}");
     puts(s"name \{ryu.name} age \{ryu.age} gender \{gGender[ryu.gender]}");
     puts(s"name \{clone_ryu.name} age \{clone_ryu.age} gender \{gGender[clone_ryu.gender]}");

     return 0;
}
```

tupleは簡易的な構造体と言えるかもしれません。違う型の要素を複数保持することができます。tupleを使うためには`#include <comelang.h>`が必要です。C言語として処理するモードでは(1,2)などはカッコとカンマ演算子と処理されるからです。この例は名前付きタプルで、`(name: value, name: value)`という文法で使っています。もし、タプルに名前をつけない場合は`(1,2,s"ABC")`などとしてください。この場合、タプルの要素には.v1, .v2, .v3などとアクセスしてください。関数に名前付きタプルを渡す場合は

```C
#include <comelang.h>

char* gGender[2] = { "Male", "Female" };
enum eGender { kMale, kFemale };

void show(tup(string:name, int:age, int:gender) t)
{
     puts(s"name \{t.name} age \{t.age} gender \{gGender[t.gender]}");
}

int main(int argc, char** argv) 
{
     var ken = (name: s"Ken", age:32, gender:kMale );
     var ryu = (name: s"Ryu", age:32, gender:kMale );

     var clone_ryu = clone ryu;
     clone_ryu.name = s"CloneRyu";

     show(ken);
     show(ryu);
     show(clone_ryu);

     return 0;
}
```
となります。

次はbufferに行きましょう。bufferは追記できるメモリです。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    var buf = new buffer();

    buf.append_str("ABC");
    buf.append("DEF", strlen("DEF"));

    puts(buf.to_string());

    var p = buf.to_char_pointer();

    while(*p) {
        printf("%d\n", *p);
        p++;
    }

    return 0;
}
```
bufferは`new buffer()`で初期化します。`append(void* mem, size_t size)`で追記します。bufferのbufというフィールドは追記されたメモリの先頭であるためCでプリミティブにアクセスしたい場合は`.head_pointer()`としてアクセスしてください。

```
    var buf = new buffer();

    buf.append_str("ABC");
    buf.append("DEF", strlen("DEF"));
```

上の操作でbufはABCDEFとなっています。appendは第二引数は追記したいメモリのサイズです。

```
    puts(buf.to_string());
```

はto_string()に変換しています。ABCDEFが出力されるでしょう。このbufferの使い方は単なる長さが変えられる文字列です。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    var buf = new buffer();

    char* mem = "a\x0b\x03\t\x04a";

    buf.append(mem, 6);

    puts(buf.printable());

    char* p = buf.head_pointer();

    while(p < buf.head_pointer() + buf.length()) {
        printf("%d\n", *p++);
    }

    return 0;
}
```

bufferは上記のようにすれば\0を含むバイトコードも扱うことができます。例えばある構造体のポインタに代入すればその構造体のメモリ配列でメモリにアクセスできるでしょう。

```
#include <comelang.h>

struct sData
{
    char a[4];
    char b[4];
};

int main(int argc, char** argv)
{
    var buf = new buffer();

    buf.append("\x03\x12\x07\x00", 4);
    buf.append("\x04\x02\x04\x00", 4);

    struct sData* data = (struct sData*)buf.head_pointer();

    puts(data.a.printable());
    puts(data.b.printable());

    return 0;
}
```

bufferはb""として値を表現することもできます。

```
#include <comelang.h>

struct sData
{
    char a[4];
    char b[4];
};

int main(int argc, char** argv)
{
    struct sData* data = (struct sData*)b"\x03\x12\x07\x00\x04\x02\x04\x00".head_pointer();

    puts(data.a.printable());
    puts(data.b.printable());

    return 0;
}
```

まあ、C風に書くなら
```
#include <comelang.h>

struct sData
{
    char a[4];
    char b[4];
};

int main(int argc, char** argv)
{
    struct sData* data = (struct sData*)"\x03\x12\x07\x00\x04\x02\x04\x00";

    puts(data.a.printable());
    puts(data.b.printable());

    return 0;
}
```
でしょう。ただ、bufferの場合はデータを追加できる点が違います。C風の書き方はデータを静的領域に確保するやり方で、メモリが限られた組み込み系や処理速度が必要な処理に向いています。
静的領域に確保する場合、処理速度は最速で、また使用メモリも少ないです。OSを書いたり、マイコンでデバイスを制御する場合はこのやり方がベストです。
ただし、サーバーアプリ、コンパイラ、インタプリタ、エディッターなどのサーバーで書くようなシステム系のプログラムではcomelangのようにデータのサイズが変えられる必要が出てきます。comelangはどちらの書き方もできるので、場合に応じてサイズが変えられるヒープにデータを確保するのか、それともサイズが変えられないが、より高速な静的領域にデータを確保するのか、選んでください。

次はstringに行ってみましょう。

stringはもうすでにこの文章に出てきていますが。`s""`が値の表現です。`""`との違いですが、`s""`の方はヒープ領域に確保されるデータで`""`は静的領域に確保されるデータです。comelangでは`""`に対しても文字列に対するメソッドが使えます。例えば部分文字列を取るメソッドに`.substring(int head, int tail)`がありますが

```C
    "ABC".substring(head:0,tail:1);
```

とすることもできます。結果はヒープ領域に確保されたstring型の"A"が返ります。

```C
    s"ABC".substring(head:0,tail:1);
```

としても同じです。文字列処理のライブラリとしてcomelang-str.hもありますが、こちらは標準CライブラリだけでなくpcreというUNIXのライブラリに依存しているためUNIXでしか動きません。comelang-str.hは大体Rubyと同じように動くため、ここでは解説を省かせてもらいます。詳しくはソースを見てください。ここではcomelang.hに定義された、基本的な文字列処理のライブラリを解説させていただきます。これは標準Cしか依存していないため、マイコンなどでも動きます。

substringは文字列の一部分を取るメソッドで戻り値はヒープに確保された文字列です。headが範囲の開始のインデックスでtailが範囲の終わりのインデックスです。headもtailも0から始まります。1文字目は0です。0以下の値は後方から数えた文字となります。-1が末尾です。-2が末尾から1文字目の文字列です。substringは`[head..tail]`と演算子を使うこともできます。


```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("ABCDE".substring(0,3));      // ABC
    puts("ABCDE".substring(3,-1));     // DE

    puts("ABCDE".[0..3]);      // ABC
    puts("ABCDE".[3..-1]);     // DE

    return 0;
}
```

これはどうでしょうか？

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("ABCDE"[-1..-1]);

    return 0;
}
```

これはEが表示されます。

文字列の長さを知りたい場合は`.length()`を使います。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    printf("%d\n", "ABC".length());  // 3

    return 0;
}
```

あと`reverse`は逆順を得ます。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("ABC".reverse());   // CBA

    return 0;
}
```

フォーマット文字列を返す関数は`xsprintf`です。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    int a = 1:
    int b = 2;

    puts(xsprintf("%02d", a + b));

    return 0;
}
```

フォーマット文字列なので、%02dとすれば03が表示されると思います。C言語のフォーマット文字列をAIにでも聞いてください。

deleteは文字列を範囲で消します。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    int a = 1:
    int b = 2;

    puts("ABCDEFG".delete(head:1, tail:2)); // ACDEFG

    return 0;
}
```

tailは含みません。<0以下の処理もsubstringと同じです。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("a,b,c".split_char(',').to_string());  // [a,b,c]

    return 0;
}
```

split_charは文字列を文字を区切り文字として分割します。戻り値は`list<string>`で`to_string()`で表示できるようにしてます。

あとprintableというコントロール文字を画面にできる表示にして表示するメソッドもありますが、こちらは文字列なので\0が終端として扱われるため使い物になりません。
コントロール文字や\0を含むメモリの内容を表示したい場合はbufferのpritableを使ってください。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    b"\0\03\04\xff".printable().puts();  // ^@^C^D?

    return 0;
}
```

# mixin-layers system

``` C
#include <stdio.h>

int fun()
{
    return 1;
}

int fun() version 2
{
    int n = inherit();

    return n + 1;
}

int main()
{
    printf("%d\n", fun()); // 2

    return 0;
}
```

解説しましょう。この機能はソースが複雑になるため、あまり有用ではないかもしれません。
僕もエディッターやその他のアプリの実装に使ってみましたが、微妙な機能でした。使うか使わないかはユーザーに任せます。
一応解説しておくと、あるfun()という関数は1を返しますが、後から2を返したくなったとしましょう。
もちろん、元々の関数のfun()にreturn 2;とするのが普通ですが、もしかしてfunはライブラリかもしれず、ソースの変更が難しいかもしれません。
その場合は`int fun() version 2`として上書きします。`inherit()`は元の関数を呼び出すもので、単に`fun()`と呼ばれているのと同じです。
nには1が入ります。引数なども渡せます。呼び出し側の`fun()`はfunのversion 2が呼ばれます。
内部的には`int fun() version 2`は`fun_v2`と定義されて、呼び出し側で`fun_v2`が呼ばれているだけです。
funのversion 2を呼び出すためには呼び出される前に

`int fun() version 2;`と定義されていないといけません。ヘッダーなどに書いておくといいでしょう。

ただ、すでにあるCのライブラリの関数に機能を付け足すには便利かもしれません。

```C
int putc(int c, FILE* f) version 2
{
    inherit(c, f);
    puts("");

    return 1;
}
```

と定義すればputcを改行することができます。putcは文字列1文字を指定のファイルに出力するものですがオリジナルのputcは改行することができません。
そのように既存のライブラリやシステムコールを再定義したい場合に便利だと思います。
あとはデバッグなどである関数が呼ばれたことを表示したりすることもできます。

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

アノテーションは式に対するコメントです。式の後ろに@と英字、数字、アンダーバーはコメントとして処理されます。この場合はパラメーターラベルでも同じです。

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
    fun(flag:false);

    return 0;
}
```

とも書けます。ただ、単なる式に対しては`3.1.4@pi`などと書けるため、アノテーションの方が便利かもしれません。

# multiple assign

``` C
#include <comelang.h>

int, string fun()
{
    return (5, s"ABC");
}

int main(int argc, char** argv)
{
    var n, m = fun();

    printf("n %d m %s\n", n, m); // 5 ABC

    return 0;
}
```

複数の値を戻り値としています。戻す側ではタプルを返し、受ける側では`var n, m`としています。タプルの各要素が受ける側で受け取れます。
comelangはブロックの最後にセミコロンがなければ戻り値となるため

``` C
#include <comelang.h>

int, string fun()
{
    (5, s"ABC")
}

int main(int argc, char** argv)
{
    var n, m = fun();

    printf("n %d m %s\n", n, m); // 5 ABC

    return 0;
}
```

ともかけます。C言語は複数の戻り値を返すためにはポインタを使う必要があり、C風に書くと

``` C
#include <comelang.h>

int fun(string* result)
{
    *result = s"ABC";
    return 5;
}

int main(int argc, char** argv)
{
    string m;
    int n = fun(&m);

    printf("n %d m %s\n", n, m); // 5 ABC

    return 0;
}
```

となります。実はこの複数の戻り値を返せないというのはC言語の最大の弱点で、Cで書かれた標準Cライブラリやシステムコールなどは多くはint型を返しますが
二つの値を返しているようなもので`<0`ならエラーを`>0`なら得たい値を返します。本来なら二つの値を返すべきです。そのためシステムコールなどは`<0`が返ってないか
チェックする必要があります。comelangではパターンマッチングを使って簡潔に書けるようにしています。

```C
#include <comelang.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
    int fd = open("XXX"@file_name, O_WRONLY|O_CREAT@open_flag, 0644@permission).less {
        perror("open");
        exit(2);
        -1
    }
    write(fd, "ABC\n", 4@size).less {
        perror("write");
        exit(2);
    }

    (void)close(fd);

    return 0;
}
```

`less`の後のブロックがエラーがあった場合です。`int fd =`が左辺値にくる場合はブロックの戻り値が必要なため-1を返しています。
このプログラムを実行するとXXXにABC\nが書かれて、コマンドラインで`cat XXX`とするとABCが表示されるはずです。
`(void)close(fd)`はcloseはほとんど失敗することがないため`(void)`と明示して、エラーを処理しないことを示しています。

上のソースをCで書くと

```C
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv)
{
    int fd = open("XXX", O_WRONLY|O_CREAT, 0644);
    if(fd < 0)  {
        perror("open");
        exit(2);
    }
    if(write(fd, "ABC\n", 4) < 0) {
        perror("write");
        exit(2);
    }

    (void)close(fd);

    return 0;
}
```

となります。毎回if文でチェックしないといけないため、ちょっと面倒です。

Goなどでもエラーがある場合は複数の値を返しています。他の言語では例外を出すと思います。最近の言語ではこのCのわかりにくいエラー処理をカバーする機能をどのように入れるかが大事になっています。

ちょっと話は変わりますが、これらのシステムコールや標準CライブラリはUNIXのシステムプログラマーならある程度は覚えておくべきかもしれません。
UNIXは今後も存在してシステムコールや標準Cライブラリは変わる事がないためです。
iPhoneのアプリなどは仕様の変更があるため、覚えるよりその都度調べる方がいいですが、これらの関数は変更されないため、覚えている方がコードを書くのにスムーズです。
僕もO_WRONLYやO_CREATはその都度AIなどで調べていますが、システムコールや標準Cライブラリはある程度は覚えています。
その方が他人のソースも読めることも大きいです。最近はAIが細かな質問に答えを出してくれるため、他人のソースを読んで、分からないところをAIに聞けば学習も捗ります。
僕は他の人のソースを読むのが苦手ですが、Cは覚えてしまっているため、最近では読めるようになってきました。
特に新しい分野やライブラリの学習が捗ります。プログラミング学習のためにもAIには課金しても悪くはないでしょう。

# Interface

```C
#include <comelang.h>

interface IBase
{
    void show();
};

class sChildA
{
    new() {
        int self.x = 1;
        int self.y = 2;
        int self.z = 3;
        string self.str = string("ABC");
    }
    
    void show() {
         printf("x %d y %d z %d str %s\n", self.x, self.y, self.z, self.str);
    }
}

class sChildB
{
    new() {
        int self.X = 111;
        int self.Y = 222;
        int self.Z = 333;
    }
    void show() {
        printf("X %d Y %d Z %d\n", self.X, self.Y, self.Z);
    }
};

int main(int argc, char** argv)
{
    var li = new list<IBase*%>();

    li.add(new sChildA() implements IBase);
    li.add(new sChildB() implements IBase);

    foreach(it, li) {
        it.show();
    }

    return 0;
}
```

IBaseというのはインターフェースでshowというメソッドが宣言されています。
IBaseに代入するにはshowというメソッドを実装している必要があります。sChildAとsChildBにはshowがあるため、implements IBaseとしてIBase*%に代入する事ができます。
IBaseにはnew sChildA() implements IBase, new sChildB() implements IBaseとして、sChildAとsChildBを代入しています。

```
    foreach(it, li) {
        it.show();
    }
```

でsChildA, sChildB両方にshowで表示されます。内部的にはインターフェースは単なる関数ポインタの構造体です。implements IBaseというのはIBaseのshowという関数ポインタのフィールドにそのクラスのshowというメソッドが入るだけです。

comelangには継承がありますが、動的にはメソッドは呼び出せません。動的なメソッド呼び出しのためには、このインターフェースを使ってください。
ちょっと話はそれますが、オブジェクト指向プログラミング自体僕は懐疑的で、あまりクラスの設計に時間をかけない方がいいと思います。
継承も大して便利ではありませんし、private, publicなどの修飾子はなくていいと思います。
僕が一番オブジェクト指向プログラミングで便利だと思ったのが、このインターフェースでした。
いちいちデータに応じてフラグを作ってswitch文などで場合わけしなくていいためです。
例えばこのコードをCで書くとすれば

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sChildBase
{
     int kind;
};

enum eChildKind { kChildKindA, kChildKindB };

struct sChildA
{
     int kind;
     int x;
     int y;
     int z;
     char str[128];
};

struct sChildA* sChildA_initialize(struct sChildA* self)
{
   self.kind = kChildKindA;
   self.x = 1;
   self.y = 2;
   self.z = 3;

   strncpy(self.str, "ABC", 128);

   return self;
}
    
void sChildA_show(struct sChildA* self) 
{
     printf("x %d y %d z %d str %s\n", self.x, self->y, self->z, self->str);
}

struct sChildB
{
     int kind;
     int X;
     int Y;
     int Z;
};

struct sChildB* sChildB_initialize(struct sChildB* self)
{
   self.kind = kChildKindB;
   self.X = 111;
   self.Y = 222;
   self.Z = 333;

   return self;
}
    
void sChildB_show(struct sChildB* self) 
{
     printf("X %d Y %d Z %d\n", self->X, self->Y, self->Z);
}

int main(int argc, char** argv)
{
    struct sChildBase* li[2];

    li[0] = (struct sChildBase*)sChildA_initialize((struct sChildA*)calloc(1, sizeof(struct sChildA)));
    li[1] = (struct sChildBase*)sChildB_initialize((struct sChildB*)calloc(1, sizeof(struct sChildB)));

    int i;
    for(i=0; i<2; i++) {
        switch(li[i]->kind) {
            case kChildKindA:
                 sChildA_show((struct sChildA*)li[i]);
                 break;

            case kChildKindB:
                 sChildB_show((struct sChildB*)li[i]);
                 break;
        }
    }

    free(li[0]);
    free(li[1]);

    return 0;
}
```

となると思いますが、このkChildKindAとkChildKindBのフラグとswitchの分岐がインターフェースで必要ないためです。

struct sChildBaseになぜsChildAとsChildBが代入できるかですが、C言語の構造体のフィールドが同じ場合同じメモリ配置なるため代入できます。
つまり構造体のフィールドにアクセスするというのは実は構造体のあるメモリの先頭からどれだけフィールドまでのメモリのサイズ(offsetという)があるかでもあります。

例えば
```C
struct sDataA
{
    int a;
    int b;
};

struct sDataB
{
    int a;
    int b;
    float c;
};

int main(int argc, char* argv) 
{
    struct sDataB data_b;
    struct sDataA* data_a = (struct sDataA*)&data_b;

    return 0;
}
```
というのは先頭の`int a`と`int b`は同じなため、data_aではaとbにアクセスできます。struct sDataB data_bというのは`int`２つと`float`分のメモリがスタック領域から割り当てられます。どれだけ割り当てられるかはsizeof(struct sDataB)でわかります。手元では24でした。この場合intとfloatは8バイトなので合計24ですね。struct sDataBは24バイトをスタック領域からdata_bに割り当てろという命令みたいなもんです。`data_a->b`というのはこの先頭メモリからsizeof(int)だけポインタを加算して、そのアドレスからintのサイズデータを読み込めと命令みたいなもんです。なので、data_bはdata_aでもアクセスできます。

ついでに話しておくと最初の頃ポインタはアドレスであると言いました。このとき、加算はどうなるか？ですが実は型の大きさだけ数値が足されます。

```C
   int* a = calloc(1, sizeof(int)*2);
   a++;
```
というのはaに入るのは64bitの数値が入りますが、a++するとその数値にintのサイズ分だけ加算されます。つまり4だけプラスされます。アドレスも単なる数値に過ぎません。
あとポインタに型名が必要な理由がわかったと思います。`int** a`としていると`int*`だけプラスされます。`int*`は単なるアドレスの大きさなため、8だけプラスされます。64bitのCPUの場合。`int*****`も8だけプラスされます。なんとなくメモリのイメージができたでしょうか。C言語をマスターするためにはメモリを自由自在に扱うことでもあります。
ただ、不正なメモリアクセスが怖いので、そのときはvalgrindを使って不正のメモリアクセスがないか確認してください。マイコンの場合はデバッグプルーブを使ってステップ実行しつつ、変数を確認していくしかないかもしれません。

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

string型の文字列には`\{}`で式を埋め込めます。`""`はプログラムの静的領域に確保される文字列ですが、`s""`はヒープに確保される文字列です。

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

複数行の文字列です。最後の行の"""は行頭は無視されます。`\{}`で変数を展開できます。ヒープに展開されます。

# method block

```
#include <comelang.h>

int main(int argc, char** argv)
{
    [1,2,3].times {
        printf("%d\n", it);
    }

    return 0;
}
```

3回`printf("%d\n", it);`が実行されます。メソッドブロックは引数は宣言が必要ありません。it, it2, it3...に代入されます。eachの場合のitは要素です。メソッドブロックの中ではcontinueやbreakなどが使えません。

```
#include <comelang.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { atoi(it) }.filter { it > 1 }.each { printf("%d\n",it); }

    return 0;
}
```

メソッドブロックは、このようにUNIXのパイプのように処理を繋げられます。この場合は`["1", "2", "3"]`のすべての要素にatoiをmapで実行しています。戻り値は`[1,2,3]`です。それに対して`filter { it > 1 }`を実行しています。これは要素が1より大きい場合です。戻り値は`[2,3]`となります。これに対してeachですべての要素に`printf("%d\n", it);`しているため、出力は、2\n3\nとなります。

# Template

```C
template<R> R fun(R x, R y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    fun(1,2).printf("%d\n");
    fun(s"A", s"B").printf("%s\n");

    return 0;
}
```

型推論するため、`fun(s"A", s"B")`が呼ばれるとfunはs"AB"を返します。

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

メモリリークがあると特に何もオプションをつけなくても1 memory leaks ...と出力されます。デバッグする場合は-cgをつけて、もう一度実行すると型名とソースの行番号が表示されます。ただ、やや表示が見づらいです。

# class

```
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
```

継承は上記のようにします。多重継承はありません。sData2にshowメソッドも呼び出せます。sData2はsDataに代入できます。

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

moduleはテキストを貼り付けるものです。

```
module MEval<T>
{
    for(int i=T; i<10; i++) {
         printf("%d\n", i);
    }
}

int main(int argc, char** argv) {
     int start = 2;
     include MEval<start>;

     return 0;
}
```

関数の中でも貼り付けられます。文字列しか引数に渡せないため、数値を渡したいときは一旦変数に代入して変数を渡してください。

# Exception

```
#include <comelang.h>

exception int fun()
{
    return 1;
}

exception int fun2()
{
    return fun().exception_throw;
}

int main(int argc, char** argv)
{
    int a = fun2()!!;
    
    printf("a %d\n", a);
    
    puts("HEHE");
    
    return 0;
}
```
a 1
HEHE

```
#include <comelang.h>

exception int fun()
{
    return none(s"Err");
}

exception int fun2()
{
    return fun().exception_throw;
}

int main(int argc, char** argv)
{
    int a = fun2()!!;
    
    printf("a %d\n", a);
    
    puts("HEHE");
    
    return 0;
}
```
Err

```
#include <comelang.h>

exception int fun()
{
    return none(s"Err");
}

exception int fun2()
{
    return fun().exception_throw;
}

int main(int argc, char** argv)
{
    int a = fun2()!!;
    
    printf("a %d\n", a);
    
    puts("HEHE");
    
    return 0;
}
```
Err

```
#include <comelang.h>

exception int fun()
{
    return none(s"Err");
}

exception int fun2()
{
    return fun().exception_throw;
}

int main(int argc, char** argv)
{
    int a = fun2().rescue {
        puts("CATCH");
        puts(Err);
        3
    }
    
    printf("a %d\n", a);
    
    puts("HEHE");
    
    return 0;
}
```
CATCH
Err
a 3
HEHE

CHATGPT: この例外処理の実装はとても興味深いです！例を見てみると、comelangでの例外処理の設計がよくわかりますね。

例外処理の流れ

exception修飾子：exceptionを使って関数を宣言すると、その関数は例外を返す可能性があることが示されます。戻り値がエラーになる可能性があるため、呼び出し元で例外をキャッチして適切に処理できます。

例外のスロー：none(s"Err")で文字列としてエラーを返すことで、例外をスローしています。

exception_throwでの伝播：exception_throwを用いることで、上位の関数へ例外を伝播させます。

!!による例外ハンドリング：!!を使って関数の呼び出しを行うと、例外がスローされていない場合は正常値を受け取り、例外が発生した場合はエラーメッセージが出力されます。

rescueによる例外のキャッチ：例外が発生した場合、rescueブロック内でキャッチしてエラー処理を行います。この例では、エラーメッセージ「CATCH」と「Err」を表示し、代替の値として3を返しています。

実行結果
最初の例では、正常な値を返してaに1が代入され、HEHEが表示されます。
二番目の例では、例外が発生し、エラーメッセージ「Err」が表示されてHEHEが出力されません。
三番目の例では、rescueブロックで例外がキャッチされ、エラーメッセージ「CATCH」と「Err」が表示され、aには3が代入されます。その後、HEHEが出力されます。
非常にシンプルでわかりやすい構造ですね。PythonやRustのように、エラー処理をスマートに行える仕組みが整っていると感じます。

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

式がValueに入ります。strcmpの場合戻り値は`Value == 0`, `Value > 0`, `Value < 0`なので、その場合分けを行ってます。左辺値に`string x = `とあるので、ブロックは戻りが必要になります。ブロックの最後にセミコロンを書いていないため、ブロックの戻り値となっています。パターンマッチング全てにマッチしない場合はelseが実行されます。

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

comelangnのパターンマッチングはifが式が`!=0`の場合、elifが`==0`の場合、全てをチェックするにはcase, `<0`の場合がlessです。

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

もしelseブロックを省くと、戻り値はfun(1)の戻り値となります。elifにマッチした場合だけ、この場合だと`s"null"`が代入されます。

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

パターンマッチングは左辺値があると(int a = など）があるとブロックの最後の値が戻り値になります。セミコロンは書いてはいけません。

wildcard

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
    integer*% a;
    integer*% b;
};

int main(int argc, char** argv)
{
    var data = sData { a:123, b:234 };
    
    data.case {
        (Value === sData { a:wildcard, b:234 }) {
            puts("MATCH");
        }
        else {
            puts("NO MATCH");
        }
    }
    
    return 0;
}
```

wildcardは左辺値の全てにマッチします。

パターンマッチングはシステムコールや標準Cライブラリの戻りをチェックする場合に便利です。

```C
fopen("AAA", "r").if { 
    fprintf(Value, "UHO!");
    fclose(Value);
}
else {
     die("fopen"); 
}
```

fopenは成功すれば`!=0`を返すので、その場合はif文のブロックが実行されます。Valueにはfopenの戻り値が入ってます。
`==0`の場合はdieが実行されエラーメッセージを表示してプログラムが終了します。


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

同じです。

```C
FILE* f = fopen("AAA", "r").elif {
     die("fopen");
     null
}
fprintf(f, "UHO!");
fclose(f);
```

elifはfopenがNULLを返した場合実行されます。左辺値が`FILE* f =`なので、ブロックには戻り値が文法的に必要なため最後にnullと書いています。

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

まあ、goみたいな並列処理があります。まだ自分では使ってないためバグがあるかもしれません。単にthreadとpipeを使ったものです。
この例では分からないかもしれません。またwebサーバーで使ってみてバグがないことを確認すれば、解説したいと思います。

# options

```
-str enable comelang-str.h string library
-net enable comelang-net.h network library
-gcc use gcc instead of clang
-cg enable comelang debug code
-pico compile for raspberry pico code
-m5stack compile for m5stack code
```

