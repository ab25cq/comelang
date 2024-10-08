#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang.h>
struct sType;
extern sType*% sType*::initialize(sType*% self, extern char*% class_name,extern int array_num,extern bool auto_increment=false,extern bool primary_key=false,extern bool not_null=false);
extern char*% sType*::to_string(sType* self);
struct sType
{
    char*% class_name;
    int array_num;
    bool auto_increment;
    bool primary_key;
    bool not_null;
};
struct Table;
extern Table*% Table*::initialize(Table*% self, extern char*% name,extern list<tuple2<string,sType*%>*%>*% types);
extern char*% Table*::to_string(Table* self);
struct Table
{
    char*% name;
    list<map<string,string>*%>*% rows;
    list<tuple2<string,sType*%>*%>*% types;
};
struct Database;
extern Database*% Database*::initialize(Database*% self, extern char*% name);
struct Database
{
    char*% name;
    map<string,Table*%>*% tables;
};
extern map<string,Database*%>*% gDatabases;
struct sInfo
{
    char* p;
    int socket;
    string current_db_name;
};
void skip_spaces(sInfo* info=info);
string parse_word(sInfo* info=info);
bool expected_next_charactor(char c, sInfo* info=info);
string, sType*%, bool parse_type(sInfo* info=info);
bool eval_create_table(sInfo* info);
string parse_value(sInfo* info=info);
bool eval_insert_into(sInfo* info);
 struct WhereNode;
struct WhereNode;

struct WhereNode
{
    enum { kWOEq, kWONotEq, kWOLt, kWOLtEq, kWOGt, kWOGtEq, kWOAnd, kWOOr, kWOData } op;
    tuple1<WhereNode*%>*% left;
    tuple1<WhereNode*%>*% right;

    string data;
};
WhereNode*% WhereNode*::initialize(WhereNode*% self, WhereNode*% left, WhereNode*% right, int op, string data);
WhereNode*% parse_where(sInfo* info=info);
bool where_select(map<string,string>* row, WhereNode* where_node);
bool like(char *str, char *pattern);
bool eval_select_from(char* deliminater="\n", sInfo* info);
string show_tables(sInfo* info=info);
int main();


#endif
