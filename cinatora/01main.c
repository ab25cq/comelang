#include <neo-c.h>

string Cinatora::main(Cinatora* self)
{
    self.get().case {
        (Value === "/") {
            puts("HELLO MAIN PAGE");
        }
        (Value === "/sub.html") {
            puts("HELLO SUB PAGE");
        }
        else {
            puts("UHO!");
        }
    }
}

string Cinatora::cgi_main(Cinatora* self)
{
    self.get().case {
        (Value === "/") {
            puts("HELLO MAIN PAGE");
        }
        (Value === "/sub.html") {
            puts("HELLO SUB PAGE");
        }
        else {
            puts("UHO!")
        }
    }
}

string Cinatora::post_main(Cinatora* self)
{
    self.get().case {
        (Value === "/") {
            puts("HELLO MAIN PAGE");
        }
        (Value === "/sub.html") {
            puts("HELLO SUB PAGE");
        }
        else {
            puts("UHO!");
        }
    }
}
