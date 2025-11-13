#include <neo-c.h>
#include <neo-c-net.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>

struct Cinatora
{
    string path;
    string header;
    string contents;
    
    string output;
};

uniq string Cinatora::get(Cinatora* self)
{
    return self.path;
}
