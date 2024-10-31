#ifndef __COMELANG_NET_H__
#define __COMELANG_NET_H__

#include <comelang.h>

using c
{
#include <unistd.h>
#include <arpa/inet.h>
#ifdef __LINUX__
#include <endian.h>
#endif
#ifdef __MAC__
#include <libkern/OSByteOrder.h>
#endif
#include <openssl/ssl.h>
#include <openssl/err.h>
}

using comelang-net;

typedef int socket_fd;

int socket_fd::write(socket_fd self, string str);
int server_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false, void* parent, void (*block)(void* parent, socket_fd it, bool* break_, bool* reconnection));
int httpd_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false, void* parent, void (*block)(void* parent, socket_fd it, bool* break_));
int client_socket(int port=8080, char* address="127.0.0.1", void* parent, void (*block)(void* parent, socket_fd it, bool* break_));
string client_socket2(int port, char* data, char* address="127.0.0.1");

int httpd_socket(int port=8080, int socket_family=AF_INET, int socket_type=SOCK_STREAM, int protocol=0, bool reuse=false, void* parent, void (*block)(void* parent, socket_fd it, bool* break_));
int httpsd_socket(int port=443, bool reuse=false, void* parent, void (*block)(void* parent, SSL* it, bool* break_));

int xmysql_query(char* query, char* user="user", char* password="user", bool create_user=true, bool create_database=true, char* root_password="", char* database_name="testdb", char* host_name="localhost");
list<list<string>*%>*% xmysql_query_and_fetch_row(char* query, char* user="user", char* password="user", bool create_user=false, bool create_database=false, char* root_password="", char* database_name="testdb", char* host_name="localhost");

#endif
