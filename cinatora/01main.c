#include <comelang.h>

string Cinatora::main(Cinatora* self)
{
    string a = self.get().case {
        (Value === "/") {
puts("/");
            s"HELLO MAIN PAGE"
        }
        (Value === "/sub.html") {
puts("/sub.html");
            s"HELLO SUB PAGE"
        }
        else {
puts("Value");
puts(Value);
            s"UHO!"
        }
    };
    
puts("a");
puts(a);
    return s"TEST";
}
