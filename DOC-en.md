Welcome and Tee Komeang Wiki!

Welcome to the comelang wiki. This wiki assumes that you have some knowledge of the C language. I would like to leave it to other books to study the basics of the C language.

comelang is an extension of the C language and is influenced by Go, Rust, Swift, Kotlin, etc. As you probably know, the C language has a language called C++, which is an extension of object-oriented programming. C++ is also used in embedded systems and can be called an industry standard. However, it is also a language that has complex specifications and is difficult to learn.

comelang is a language that extends C, like C++, but it extends C by focusing on the features of modern languages like Go, Rust, Swift, and Kotlin, making it easy to create the software you want to implement. It's been devised. Database servers, web servers, compilers, interpreters, etc. are surprisingly easy to implement. I used comelang to create an editor, shell, interpreter, web server, and database server myself, and it was very easy to implement. I was able to turn it into reality within a few days of coming up with the idea. I think it's partly because I'm proficient in the C language, but since comelang has a GC and collection library, I think there are times when I don't have to worry about troublesome memory management.

Even in an environment where only C can be used, comelang outputs C source if you use the -S option, so if you are in an environment where C can be used, it should work with some effort. Well, in such an environment, you may often be able to use C++ to create apps by cross-compiling. However, you might consider using comelang as a compiler of choice in such an environment.

# Hello World

This is the first step in programming. Output Hello World on the UNIX terminal. (display)

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

What follows \> is the command to type into the shell. I'm using vim here. emacs is also fine. vim is an editor with powerful editing functions. I use comelang to create an editor called vin, which is similar to vim, and I love it, but it seems that many famous hackers in the world use emacs. Well, use whichever you like.
I used to use emacs, but I was too focused on customization and couldn't make any progress in creating the app, so I switched to vim.
Both editors are customizable, but we recommend minimizing editor customization.

The topic has changed. \#include <stdio.h> is an instruction to the preprocessor to paste the header file stdio.h into the source file. In this case, a text file called stdio.h will be pasted in place of \#include <stdio.h>, and comelang will process that text and everything after \#include.
In the C language, source files are first processed by a preprocessor called cpp. The flow of the comelang compilation process is

cpp→comelang→c compiler→assembler→machine language

and processed like a factory line. Comelang is actually not a compiler, but a transpiler that outputs C language source files. This method of outputting C language has several advantages. One is that you can use comelang as long as you have a compiler that runs the C language. Second, it is easy to self-host (compile it yourself. comelang is made with comelang), and there is a debugger for the C language. It's something you can use.

If you add the -s option to comelang, you can output a comelang source file a.c as a file a.c.c. Internally, a C compiler further compiles the a.c.c file, an assembler further assembles it, and finally it is translated into machine language.

Well, here you just need to remember that if you type \#include <stdio.h>, you will be able to use the output function called puts.

```C
int main(int argc, char** argv)
{
    puts("HELLO WORLD");

    return 0;
}
```

This defines only one main function in the program. The main function is a function that is called when the program is started, and the program ends when the main function ends.
The first int is a 32-bit numeric type, and you can just remember it as a numeric type that handles general numbers. This defines the return type of the function. In this case, the execution result of the function called main function is of numerical type. The main function must return an int type, and the return value of the main function is the command status code that is stored in the shell's `$?` environment variable.
0 indicates successful completion; non-0 indicates an error occurred. In C language libraries, functions that return an int type and UNIX system calls usually terminate normally with 0 and <0 with abnormal termination. If you run echo `$?` in the shell after running ./a, 0 should be displayed. If there is an error, if the main function returns 1 as return 1, echo `$?` will display 1.

(after int argc, char\*\* argv is the argument passed to the main function, and in the case of the main function, it is a command line argument. For example, ./a 1 2 If you set it to 3, argc contains 4, argv[0] contains the string ./a, argv[1] contains 1, argv[2] contains 2, and argv[3] contains 3. Note that the first argv is the command name itself, ./a.
char is an 8-bit numerical type that represents an ASCII character string. Simply put, it is a model name consisting of one character. char is also a numeric type because computers also map letters to numbers.
\*\* in char\*\* is a pointer. It is said that this is difficult to understand in C language, but simply put, it contains the memory address. In this case, you can think of it as a pointer of pointers, or, in short, something like an array of strings.

Function arguments are used as follows:

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

In this case, 1 is assigned to x of fun, 2 is assigned to y, and the return value of fun is 3. The arguments to the main function are just special command line arguments.

In the case of comelang, if you do not add a semicolon at the end of the block, it will be treated as a return value, so you can also write it as follows.

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

This is often done this way in modern languages these days. This notation is often included so that the return value can be written concisely in the method block described later.

```C
int main(int argc, char** argv)
{
    puts("HELLO WORLD");

    return 0;
}
```

(10). The line feed code is a char type (8bit integer) and is 10 when expressed as a number. Let's go back to. In computers, even characters are actually just numbers, so the new line code is also mapped to 10 in this way. puts outputs the argument string, adds a newline code, and outputs it. In short, not only human-readable characters such as ABCDEFG, but also functional characters with special meanings are treated as char type (8-bit numerical type). The new line code is on Mac and Linux.
These are called control characters, and functions such as clearing the screen, making a bell sound, and stopping terminal output are also assigned specific numbers.

"HELLO WOLRD" is a string that is output, which is internally an array of 8bit integer types. In this case, we pass the string "HELLO WORLD" to puts and have it output.

Return is the return value of a function, which is the result of the function execution. In this case, 0 is returned to indicate successful completion.
{} indicates the beginning and end of a function. Unlike Python, the C language is a free-format language, so it is necessary to indicate the beginning and end.
Free format means that line breaks and spaces in the source file have no special meaning, for example, in this source

```C
int main(int argc, char** argv) { puts("HELLO WORLD"); return 0; }
```

It means the same thing even if you write it. The C language allows users to freely format the source to make it easier to read.

```C
int main(int argc, char** argv) {
    puts("HELLO WORLD");

    return 0;
}
```

It seems that it is often written in a Java-like style these days.

```
> comelang a.c
> ./a
HELLO WORLD
```

Let's go back to. The extension of comelang source files is .c, same as C language. I think there are pros and cons to this. There's no particular deep reason.

When comelang is compiled, it returns an executable format (machine language) with the file name without the extension. In this case it is a. You can change the output file by specifying it with the -o option.
If you enter comelang -o hello a.c, an executable called hello will be created.

```
> comelang -s a.c
```

If you do this, you will get a C source called a.c.c. You can also get a. In this case, compilation errors and source file line numbers during debugging will also be matched to a.c.c. This is useful when you want to identify a bug while looking at a.c.c. In the case of comelang a.c, the line number of a.c is used when debugging.

```
> comelang -E a.c
```

A file called a.c.i is obtained, which is the output result of cpp. I think the contents of stdio.h are pasted inside.
The contents of stdio.h include function declarations, structure definitions, typedef definitions, and global variable definitions.
Files with the extension .h are called header files, and you can use the library by \#include it when calling the library.
Originally, there was a time when programming languages were not extensible, and the C language was characterized by the ability to keep the basic functions of the language to a minimum and expand the functions rapidly with libraries.
For example, if you want to use the functions of a library called pcre that performs regular expressions, link the library with -lpcre as an option as \#include <pcre.h>.
Regular expressions can now be used in C language as well.
comelang has a string library for regular expressions, and if you use \#include <comelang-str.h>, you can use a library that processes strings like Ruby.
Of course, you can also use pcre to create your own original string library.

You can also create header files yourself.

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


This is called split compilation. The function definition of b.c is used by including the header b.h. If you run comelang -c b.c, you will get a file called b.c.o. By adding -c, you can compile it as a module without a main function. If you want to use the b.c.o functionality, just \#include "b.h".

```
extern int fun(int x, int y);
```

declares a function without defining its contents. In C language, a function must be declared before it can be called. This is because type checking is not possible.
The actual function called fun is in b.c.o. To check it, use the nm command as nm b.c.o. You should see that it contains the contents of a function called fun.
I vaguely remember, but I think that if it was marked with a T, it meant there was a real thing, and if it was marked with a U, it meant that an external function was being referenced. It's quick to ask AI for information around this.
If a.c also defines the contents of a function called fun, an error will occur when linking because the same function is overloaded.

```
extern int fun(int x, int y);
```

In this case, the function is only declared without defining its contents, so it is not overloaded.

Because comelang has a package manager, you can perform separate compilation without creating header files.

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

I am creating a project called X with comelang new X. In it, I am creating source files called 02a.c and 01b.c. 02a.c uses a function called fun defined in 01b.c. Normally, I would have to create a header file for 01b.c, but comelang will create the header file automatically. The first number is the processing order of the automatically generated header files. Please write the order of the headers you want to generate in the comelang project manager. For example, in this case, fun is referenced in 02a.c, so it is set to 01b.c. You also need to consider the order of structures, enumerations, etc. The headers are comelang header common.h *.c in the Makefile, so if you specify the order here, the numbers are not necessary. If you want to control the order, please modify this. When you run comelang compile, the header file common.h will be automatically created from files with the extension .c, and will be automatically #included in 02a.c and 01b.c. When you run comelang compile, an executable called X will be created. comelang run will compile and run the program. comelang debug will run the program with debug mode turned on. Debug mode is achieved by compiling with the C debug option -g and the comelang debug option -cg.


# variable

First, I will write about variables as an essential knowledge in programming. A variable is a piece of memory that stores numbers, characters, strings, etc.

```
int a = 3;
```

Then a will contain 3. Variables are always stored in memory, and in the case of C language, it is necessary to be aware of memory when programming.
Memory is a device in a computer that has a state of 0 and 1. For one address, a 32-bit CPU has 32 binary digits, and a 64-bit CPU has 64 digits of 0 and 1. Can store numbers.
An address is a number, and is also just a number. The size of the address varies depending on the CPU, and if it is a 32-bit CPU, it will be a 32-bit number, and if it is a 64-bit CPU, it will be a 64-bit number.
A pointer is an address, and it is easy to understand if you think of it as simply an integer value containing this address.
In this case, a contains 3, so the binary number 11 is stored in memory at a certain address.
There are various ways to implement memory, but the most common one currently used is a flip-flop, which is a device that indicates 1 when the voltage is HIGH and 0 when it is LOW.
By changing the HIGH and LOW states, the value stored in the variable is set to 1 or 0.
To get the address of a

```
int a = 3;
int* b = &a;
```

Let's say. b contains a 64-bit value such as 0xFFcd FF3bc .. for a 64-bit CPU.
This is a pointer containing an address. If addresses are also numerical values, you may think that there is no need for type names such as int\*.　
but

```
int c = *b;
```

If you want to retrieve the value at address b (derefference), you need a type name of int\*. In this case, the instruction is to read the size of int from the address entered in b and store it in c.
If char\* c, then \*c will read the char (8bit) value from the address entered in c.
This derefference process is both a strength and a weakness of the C language. Attempting to read data from an invalid address will result in the infamous segmentation fault error.
For segmentation fault bugs, use gdb or lldb to identify the location of the bug. To use gdb, add the -g option when compiling the program, and for comelang, add the -s option as well. If the command name is ./a, you can run the program by entering gdb's command line as ./a and typing r. If a segmentaion fault occurs, you can view the stack frame by typing bt on the gdb command line. (Function call stack and source file number) In this way, you can identify the location of the source file where the segmentation fault occurred.
Let's get back to the topic. Whether a pointer is a char\*\* or an int\*\*\*, the value it contains is just an address. However, since we need the size when reading a value from an address such as \*b, we add \* to the type name such as int\*, char\*.

```
int a = 111;
int* b = &a;
char* c = (char*)b;
char d = *c;
```

is the correct code. Both int* and char\*c are addresses, so if you have a 64-bit CPU, they are 64-bit integers and can be assigned to each other. If you just use \*c, instead of reading the data of int size from the memory containing a, only char (8bit) data will be read. In this case, the original value of a, 111, can be expressed in 8 bits, so 111 is entered in d.

```
int a = 3;
```

The stack area is created when a function is called, but is deleted when the function is exited. This space is convenient because it is automatically reserved without the user's knowledge. Let's go back to. Even if the nesting of function calls becomes large and a large number of variables are allocated, memory will not be exhausted once the function is exited. In this case, in what part of memory will a be stored? However, since it is automatically released when the function exits, the following code will result in a runtime error in C language.That's the stack area. 

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
Displaying invalid values.
```

This is a very annoying bug because it displays meaningless values without giving an error at runtime. Tracing runtime errors like this is very difficult in C.
Illegal memory accesses occur without any friendly error messages.
To explain this error, x contains a valid value inside the fun, but since the stack area is released when the fun exits, the address that entered a in the main function is an address that contains an invalid value. It's in.
If you read only the size of \*a and int type into that invalid memory, it will be an invalid memory access. (Moreover, it is executed without causing a segmentation fault.)
This is mechanically unavoidable, and comelang does not solve this problem. Experienced C programmers will not encounter such bugs. Because they have a good understanding of how computers work.
However, I think you will encounter some bugs like this in the beginning. rest assured. Our ancestors have left behind solutions to these problems.
To detect this type of error, use software called valgrind, which detects illegal runtime memory accesses.

```
> valgrind ./a
```

Please. By adding the -g option to comelang, you can identify the location of the source file where invalid memory was stored.

```
> comelang -g -S a.c
```

If you use valgrind as , you can identify the line number of the source file where the illegal memory access occurred in the output C source a.c.c.

Now look at the output of valgrind. It will show you where there are illegal memory accesses. However, valgrind cannot be used on Mac. If you want to use valgrind on a Mac, I think you can run Linux with docker or the like and use it inside. Also, valgrind may be compatible with Mac.

# Heap area

In addition to the stack, there is also a heap type of memory.

```
int* a = malloc(sizeof(int));
```

If you do this, memory for sizeof(int) will be allocated in the heap area and the address will be stored in a. In this case, the memory is retained until the address is freed, regardless of whether the function exits.
This is convenient because it can be accessed from any function in the program by using the address a.
If a is no longer needed

```
free(a);
```

I call it. If this is not called, memory will remain and if this is done many times, the memory will be exhausted.
A program that is always running, such as a server app, will grow in size and eventually run out of hardware memory, and the server app will be forcibly terminated by the system.
This is called a memory leak. Use valgrind to detect this. valgrind allows you to locate source files with memory leaks. You will also notice that there is a memory leak.
Memory leak bugs are a serious problem in the C language, and are said to occur whenever software becomes large-scale.
Although it is not certain whether this is true or not, it is said that this memory leak bug exists in Windows as well.

In comelang, this problem is solved as follows. Do not use malloc directly

```
int*% a = new int;
```

Let's say. This will secure memory for int size in a.

```
*a = 111;
```

You can store int type data in a.
If the memory secured in this way leaks, comelang will report that there was a memory leak after the program is executed.
If there is no memory leak, nothing will be displayed. This detection function does not require any special compile options, and the algorithm is O(1), efficient, and does not slow down execution.
If you want to determine where the memory leak occurred, compile the program with comelang -cg and run it. After execution, you will find the type of the variable where the memory leak occurred and the line number of the source file. Unfortunately, the output is somewhat difficult to see.
Well, in the case of comelang, it has incremental GC, so memory leaks rarely occur. There is no need to be aware of such troublesome heap processing.

```
int*% a = new int;
*a = 111;
````

If you store heap memory by adding % after int*, the GC will handle it well and automatically free it without causing a memory leak.

```
int*% a = new int;
int*% b = a;
*a = 111;
*b = 222;
```

If you refer to the heap memory by adding % twice, the number of times the heap memory was referenced will be recorded as 2, and when a and b are no longer visible in the program, the reference count will be -2 and new will be automatically created. int heap memory is freed. This works as expected even when stored in a structure or function argument. In the case of arrays, automatic freeing of heap memory cannot be handled, but heap memory should be stored in a collection library such as list, or map. You can easily use heap memory like Java or Python.

Global variables are also automatically freed. However, you cannot allocate heap memory outside the function.

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

Again, there is no memory leak, so it won't show that there is a memory leak.

# Collection library and GC

The big significance of using comelang is this collection library and GC. This makes it very easy to create applications.
In fact, this is one of the main reasons why Java became popular. I explained that memory has a stack area and a heap area, but the stack area is used for temporary work processing, and the heap can be said to be the main part of memory. Programs with slow CPU speeds and limited memory, such as those for microcomputers, have problems with processing speed when using the heap, so memory is often allocated statically (with a fixed size) using global variables and arrays. There is no problem even if the heap is used mainly for PCs designed for this purpose.
In the original C language, there is no collection library, so you have to implement the collection yourself depending on the data structure, but in the case of comelang, you can use a library.
Also, since a library is automatically generated according to the stored types called generics, the processing speed is fast.
Of course, comelang is also a C language, so you can create your own collections according to the data structure like in C language.

Now, as an example, let's store a class containing data for a person called Person in a collection called list.

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

It's like this. Person has fields name, age, and gender. Initialize it with Object initializer to generate Person type objects called ken and ryu.
I store them in a list called persons and show them both using foreach.

```C
#include <comelang.h>
```

This is about the interpretation of (1,2). comelang interprets this as a tuple of 1 and 2, but C interprets it as a comma operator and parentheses. declares to use the comelang basic library and the grammar as comelang. If using comelang is not specified, C interpretation will occur, but if \#include <comelang.h> is specified, using comelang is specified, so (1,2) will be interpreted as a tuple of two numbers. There is only one part of the comelang syntax that is not compatible with C, and it is declared in comelang.h as using comelang;, so if you use \#include <comelang.h>, the comelang syntax will be used. Because of this difference, when including a C header file in comelang, it is better to do the following:. 

```C
using C 
{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
}
```

In most cases, there is no problem in including it as is, but in rare cases, it may be used as (1,2,3) etc. in an inline function in a C language header file.
The contents of comelang.h include list, map, tuple and basic string library. comelang.h only depends on the standard C library, so if you use the functions of comelang.h only, it will work in any environment as long as you have the standard C library. In fact, I have successfully used comelang and comelang.h on Raspberry pi pico, which is a non-UNIX microcontroller.

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

gGender is an array of strings containing gender. Well, I wrote it in C language.
Person is a class and has a field called gender that contains a string type name and a numeric type age, kMale, or kFemale.
show is outputting the field. self is the implicit first argument of the method and cannot be omitted. Browse fields.
The string type string is defined as typedef char*% string; and is a string type secured on the heap.

```C
string str = string("ABC");
string str2 = s"ABC";
```

You can initialize it as such. s"ABC" is a formula-embedded string, and you can embed formulas inside it. Person's show method can also be defined as follows.

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

to_string() is called on the variable inside `\{}` to convert it to a string and paste it. to_string is automatically defined for each type, so there is no need to be aware of it.

```
    enum Gender { kMale, kFemale } gender;
```

For enums, type declaration and field declaration are performed at the same time. In the C language, you can define structs, enums, unions, etc. wherever types can be written, and you can also declare variables.
Well, that's why it's said that C can be written concisely.

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

I will explain. var is a variable declaration that performs type inference, and declares a variable according to the rvalue. The same thing happens if you declare list<Person*%>*% persons.
Adding \% allows you to own heap memory and increases the increment count value by 1. The heap is freed when the increment count reaches 0.
Persons contains the value of the list `list<Person*%>` secured on the heap.
`()` of `list<Person*%>()` is short for `list<Person*%>.initialize()` and calls the constructor.
`list<Person*%>()` is a declaration that it is a list that stores pointers allocated in the Person heap.
Because \% is added, the stored Person has a reference count of +1 and is owned by persons.
Well, in most cases, there is no problem if you add \% to the pointer to the collection.
ken and ryu are Person types secured in the heap initialized using object initializer.
ken and ryu are added to persons with persons.add(ken) and person.add(ryu).
foreach is a loop that is used when you want to execute the entire collection, and in this case, the elements of the collection (Person's heap memory) are stored in it one by one.
Then we do show(); and show all the persons elements.
If you set `persons[0]`, you will get ken, and if you set `persions[1]`, you will get ryu. In this case, if you enter `persons[99999]`, an error will be generated and the program will terminate.
If you type `persons[999999]??` you will get null.

A list has a representation of values. Using that, you can write this code like this.

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

`[]` represents a list. For ease of understanding, it is the same as Python.

Let's give an example of the map type.

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

Person has a constructor written in a slightly different way.

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

`new(` is a constructor and is initialized inside the class, not inside main like object initializer.
You can declare fields in new using the type name self.field name. int gender=kMale is the default value of the argument and is automatically entered if gender is omitted.

```
     var ken = new Person(name:s"Ken", age:32);
     var ryu = new Person(s"Ryu", 32);
     var chunlie = new Person(name:s"Chunlie", age:32, gender:kFemale);
```

`new on the caller side By setting Person(`, `new(` is called. Gender has a default value, so it can be omitted. `name:s"Ken"` calls the function by specifying the name of the argument in the parameter label. The advantage of this feature is that it makes the code easier to read on the function caller side, and if all arguments have default arguments, you can specify only the arguments you like and change the arguments. In fact, in Swift for iPhone, I use default arguments and parameter labels a lot when creating GUI apps, and I think I use the comelang library to make writing apps as easy as possible by specifying values for only the arguments I want. You can use a technique like this. In the case of ryu, the arguments are normally called in order. Male is automatically assigned to gender.

```
     persons.insert(s"Ken", ken);
     persons.insert(s"Ryu", ryu);
     persons.insert(s"Chunlie", chunlie);
```

Adding values to map. The first argument is the key. Stores the second argument.

```
     foreach(key, persons) {
         Person* person = persons[key];
         person.show();
     }
```

Accessing all Persons. Foreach of persons will contain all keys. You can get the Person value with persons[key]. If you access a key that does not exist, the program will generate an error. If you don't want to get an error, use `persons[key]??`. Return value is null. Also note that the return value of persons[key] is not `Person*%`. This is just a reference. If you use persons[s"Ken"], you will get ken, and if you use persons[s"Ryu"], you will get ryu.

Maps also have value representations. Same as Python.

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

Next up are tuples.

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

This is because in the C language processing mode, (1,2) etc. are treated as parentheses and comma operators. This example uses named tuples with the syntax `(name: value, name: value)`. A tuple can be considered a simple structure. If you do not want to name the tuple, use something like `(1,2,s"ABC")`. It can hold multiple elements of different types. In this case, access the elements of the tuple as .v1, .v2, .v3, etc. To use tuple you need `#include <comelang.h>`. When passing a named tuple to a function:

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

It becomes.

Next let's go to buffer. buffer is memory that can be appended.

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

Initialize buffer with `new buffer()`. Append with `append(void* mem, size_t size)`. The buf field of buffer is the beginning of the added memory, so if you want to access the primitive in C, please access it as `.head_pointer()`.

```
    var buf = new buffer();

    buf.append_str("ABC");
    buf.append("DEF", strlen("DEF"));
```

In the above operation, buf becomes ABCDEF. The second argument of append is the size of memory you want to append to.

```
    puts(buf.to_string());
```

is converted to to_string(). ABCDEF will be output. This usage of buffer is simply a string whose length can be changed.

```
    var p = buf.to_char_pointer();

    while(*p) {
        printf("%d\n", *p);
        p++;
    }
```

is accessing memory with a char type using a type-safe smart pointer.
Smart pointers do not cause a segmentation fault when they reach out of bounds, they display an error message.

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

If the buffer is as shown above, For example, if you assign a pointer to a structure, you can access the memory using the structure's memory array.

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

buffer can also represent the value as b"".

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

Well, if you write it in C style

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

Probably. However, the difference with buffer is that you can add data to it. C-style writing is a method of allocating data in a static area, and is suitable for embedded systems with limited memory and processing that requires high processing speed.
When allocated in the static area, processing speed is fastest and memory usage is also small. This method is best when writing an OS or controlling a device with a microcontroller.
However, in system programs written on servers such as server applications, compilers, interpreters, and editors, it is necessary to be able to change the data size like comelang. Comelang can be written either way, so choose whether to allocate data in a heap that can change its size depending on the situation, or in a static area that cannot change its size but is faster.

Next, let's go to string.

string has already appeared in this sentence. `s""` is the value representation. The difference between `"" and `s"" is that `s"" is data that is allocated in the heap area, and `"" is data that is allocated in the static area. In comelang, methods for strings can also be used for `""`. For example, there is a method that takes a substring, `.substring(int head, int tail)`.

```C
    "ABC".substring(head:0,tail:1);
```

You can also do this. The result is a string type "A" allocated in the heap area.

```C
    s"ABC".substring(head:0,tail:1);
```

The same is true. There is also comelang-str.h as a string processing library, but this only works on UNIX because it depends not only on the standard C library but also on the UNIX library called pcre. Since comelang-str.h works mostly in the same way as Ruby, I will omit the explanation here. See the source for details. Here I will explain the basic string processing library defined in comelang.h. This only relies on standard C, so it can also work on microcontrollers.

The first character is 0. Values less than 0 are characters counted from the back. substring is a method that takes a part of a string, and the return value is a string stored on the heap. -1 is the last. head is the starting index of the range and tail is the ending index of the range. -2 is the first character from the end of the string. Both head and tail start from 0. substring can also use `[head..tail]` and operators.

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

How about this?

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("ABCDE"[-1..-1]);

    return 0;
}
```

This will show E.

If you want to know the length of a string, use `.length()`.

```
#include <comelang.h>

int main(int argc, char** argv)
{
    printf("%d\n", "ABC".length());  // 3

    return 0;
}
```

Also, `reverse` gets the reverse order.

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("ABC".reverse());   // CBA

    return 0;
}
```

The function that returns a format string is `xsprintf`.

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

Since it is a format string, I think 03 will be displayed if you enter %02d. Please ask AI for the format string of C language.

delete deletes a range of strings.

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

Does not include tail. The processing below <0 is the same as substring.

```
#include <comelang.h>

int main(int argc, char** argv)
{
    puts("a,b,c".split_char(',').to_string());  // [a,b,c]

    return 0;
}
```

split_char splits a string using characters as delimiters. The return value is `list<string>` and can be displayed with `to_string()`.

There is also a method called printable that displays control characters on the screen, but since this is a string, is treated as the terminal, so it is of no use.
control characters and If you want to display the contents of memory including , please use buffer's pritable.

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

Let me explain. This feature may not be very useful as it complicates the source.
I also tried using it to implement editors and other apps, but the functionality was a little strange. It is up to the user whether to use it or not.
To explain, let's say that a function called fun() returns 1, but you later want to return 2.
Of course, it is normal to use return 2; in the original function's fun(), but fun may be a library and it may be difficult to change the source.
In that case, overwrite it as `int fun() version 2`. `inherit()` calls the original function and is just called `fun()`.
1 is entered in n. You can also pass arguments. The caller's `fun()` will be called with version 2 of fun.
Internally, `int fun() version 2` is defined as `fun_v2`, and `fun_v2` is simply called on the caller side.
To call version 2 of fun before it is called

It must be defined as `int fun() version 2;`. It would be a good idea to write it in the header.

However, it may be useful for adding functionality to existing C library functions.

```C
int putc(int c, FILE* f) version 2
{
    inherit(c, f);
    puts("");

    return 1;
}
```

If you define , you can make putc a line break. putc outputs a single character string to a specified file, but the original putc does not allow line breaks.
I think it's useful when you want to redefine an existing library or system call like that.
You can also display that a certain function has been called for debugging, etc.

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

Annotations are comments on expressions. @, letters, numbers, and underscores after the expression are treated as comments. The same goes for parameter labels in this case.

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

It can also be written as However, annotations may be more convenient because you can write something like `3.1.4@pi` for a simple expression.

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

Returns multiple values. The returning side returns a tuple, and the receiving side uses `var n, m`. Each element of the tuple can be received by the recipient.
Because comelang will return the value if there is no semicolon at the end of the block.

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

I'll also call it. In C language, it is necessary to use pointers to return multiple return values, and when written in C style,

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

It becomes. In fact, the inability to return multiple return values is the biggest weakness of the C language, and most standard C libraries and system calls written in C return int type.
It is like returning two values; `<0` returns an error, and `>0` returns the desired value. Normally it should return two values. Therefore, system calls etc. do not return `<0`.
Must check. comelang uses pattern matching to make writing concise.

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

This is when the block after `less` has an error. If `int fd =` comes in the lvalue, -1 is returned because the return value of the block is required.
When you run this program, ABC to XXX
is written, and when you type `cat XXX` on the command line, ABC should be displayed.
`(void)close(fd)` is explicitly written as `(void)` to indicate that no errors will be handled, since close almost never fails.

Writing the above source in C

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

It becomes. It's a bit troublesome because you have to check it with an if statement every time.

Go also returns multiple values if there is an error. I think other languages will throw an exception. In recent languages, it has become important to include functions that cover C's difficult-to-understand error handling.

On a slightly different topic, UNIX system programmers should probably remember these system calls and the standard C library to some extent.
This is because UNIX will continue to exist and its system calls and standard C library will not change.
The specifications of iPhone apps and the like change, so it's better to look them up each time rather than memorize them, but these functions don't change, so it's easier to write code if you remember them.
I also use AI to research O_WRONLY and O_CREAT each time, but I remember the system calls and standard C library to some extent.
It's also great that you can read other people's sources. These days, AI provides answers to detailed questions, so you can learn more by reading other people's sources and asking AI what you don't understand.
I'm not good at reading other people's sources, but since I've memorized C, I've been able to read them recently.
This will especially help you learn new fields and libraries. It wouldn't be a bad idea to pay for AI to learn programming.

# Protocol, interface

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

IBase is an interface with a method called show declared.
To assign to IBase, you need to implement a method called show. Since sChildA and sChildB have show, they can be assigned to IBase*% as implements IBase.
sChildA and sChildB are assigned to IBase as new sChildA() implements IBase, new sChildB() implements IBase.

```
    foreach(it, li) {
        it.show();
    }
```

will be displayed on both sChildA and sChildB. Internally, an interface is just a struct of function pointers. Implements IBase simply stores the show method of that class in the field of the IBase show function pointer.

comelang has inheritance, but methods cannot be called dynamically. Use this interface for dynamic method calls.
A little off topic, but I'm skeptical about object-oriented programming itself, and I think it's better not to spend too much time designing classes.
Inheritance is not very convenient, and I think there is no need for modifiers such as private and public.
This interface is what I found most convenient for object-oriented programming.
This is because there is no need to create flags for each data and use switch statements to differentiate between cases.
For example, if you write this code in C,

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

I think this is because the kChildKindA and kChildKindB flags and the switch branch are not necessary in the interface.

The reason why sChildA and sChildB can be assigned to struct sChildBase is that if the fields of the C language structure are the same, the memory allocation will be the same, so they can be assigned.
In other words, accessing a field of a structure actually depends on the memory size (called offset) from the beginning of the memory where the structure is located to the field.

for example
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

It was 24 at hand. In this case, int and float are 8 bytes, so the total is 24. This is because the first `int a` and `int b` are the same, so data_a can access a and b. struct sDataB is like an instruction to allocate 24 bytes from the stack area to data_b. struct sDataB data_b has two `int` and `float` memory allocated from the stack area. `data_a->b` is like an instruction to add a pointer by sizeof(int) from this first memory and read int size data from that address. You can find out how much to allocate using sizeof(struct sDataB). Therefore, data_b can also be accessed with data_a.

By the way, I said at the beginning that a pointer is an address. What happens to the addition at this time? However, the number is actually added by the size of the mold.

```C
   int* a = calloc(1, sizeof(int)*2);
   a++;
```

This is because a 64-bit number is entered in a, but when a++ is used, the size of int is added to that number. In other words, only 4 is added. Addresses are also just numbers.
For 64bit CPU. `int*****` is also incremented by 8. I think you now understand why a pointer needs a type name. Have you managed to get an image of memory? If you set it to `int** a`, only `int*` will be added. Mastering the C language also means handling memory freely.Since `int*` is just the size of an address, it is added by 8. 
However, I'm afraid of unauthorized memory access, so in that case, use valgrind to check for unauthorized memory access. In the case of microcontrollers, you may have no choice but to use debug probes to perform step execution and check the variables.

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

Expressions can be embedded in string type strings using `\{}`. `""` is a string allocated in the static area of the program, while `s""` is a string allocated in the heap.

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

A multi-line string. The """ in the last line is ignored at the beginning of the line. You can expand the variable with `\{}`. It will be expanded to the heap.

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

3 times `printf("%d", it);` is executed. Method blocks do not require declaration of arguments. They are assigned to it, it2, it3.... In the case of times, it is the number of times it was executed. In the method block, You cannot use continue, break, etc.

```
#include <comelang.h>

int main(int argc, char** argv)
{
    ["1", "2", "3"].map { atoi(it) }.filter { it > 1 }.each { printf("%d\n",it); }

    return 0;
}
```

We are running `filter { it > 1 }` on it. 3
This is when the element is greater than 1. It becomes.Method blocks can be used to connect processes like UNIX pipes. The return value will be `[2,3]`. In this case, atoi is executed on all elements of `["1", "2", "3"]` using map. On the other hand, each prints all elements with `printf("%d
The return value is `[1,2,3]`. ", it);`, the output is 2

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

Because of type inference, when `fun(s"A", s"B")` is called, fun returns s"AB".

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

If there is a memory leak, 1 memory leaks ... will be output even if no options are specified. If you want to debug, add -cg and run it again to display the type name and source line number. 

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


Inheritance is as above. There is no multiple inheritance. You can also call the show method on sData2. sData2 can be assigned to sData.

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

module is what you paste the text into.

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

It can also be pasted inside a function. Only strings can be passed as arguments, so if you want to pass a number, first assign it to a variable and then pass the variable.


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

Well, there is parallel processing like go. There may be bugs as I haven't used it myself yet. It simply uses threads and pipes.
It may not be obvious in this example. I will also explain it after I try using it on a web server and confirm that there are no bugs.


# options

```
-bare enable bare-metal mode
-str enable comelang-str.h string library
-net enable comelang-net.h network library
-gcc use gcc instead of clang
-cg enable comelang debug code
-pico compile for raspberry pico code
-m5stack compile for m5stack code
```

