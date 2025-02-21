#include <comelang.h>

string Cinatora::main(Cinatora* self)
{
    string a = self.get().case {
        (Value === "/") {
            s"HELLO MAIN PAGE"
        }
        (Value === "/sub.html") {
            s"HELLO SUB PAGE"
        }
        else {
            s"UHO!"
        }
    }.puts()
}

string Cinatora::cgi_main(Cinatora* self)
{
    string a = self.get().case {
        (Value === "/") {
            s"HELLO MAIN PAGE"
        }
        (Value === "/sub.html") {
            s"HELLO SUB PAGE"
        }
        else {
            s"UHO!"
        }
    }.puts()
}

string Cinatora::post_main(Cinatora* self)
{
    string a = self.get().case {
        (Value === "/") {
            s"HELLO MAIN PAGE"
        }
        (Value === "/sub.html") {
            s"HELLO SUB PAGE"
        }
        else {
            s"UHO!"
        }
    }.puts()
}
