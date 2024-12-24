#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang.h>
struct SSL;
void handle_sigint(int sig);
string,int eval_zed(string command);
string parse_html(string file_contents);
string, int xpopen(char** argv, string input);
void run_post_cgi(SSL* it, string file_path, string header, string contents);
void run_post_cgi_http(int it, string file_path, string header, string contents);
void run_get_cgi(SSL* it, string cgi_path, string header, string contents, string query_string);
void run_get_cgi_http(int it, string cgi_path, string header, string contents, string query_string);
struct Cinatora
{
    string path;
    string header;
    string contents;

    string output;
};
extern string Cinatora::main(Cinatora* self);string Cinatora::get(Cinatora* self);
int main(int argc, char **argv);
string Cinatora::main(Cinatora* self);


#endif
