#ifndef __COMMON_H__
#define __COMMON_H__
#include <comelang.h>
struct sType;
struct Table;
struct Database;
struct sInfo
{
    char* p;
    int socket;
    string current_db_name;
};
 struct WhereNode; 
struct WhereNode;

struct WhereNode
{
    enum { kWOEq, kWONotEq, kWOLt, kWOLtEq, kWOGt, kWOGtEq, kWOAnd, kWOOr, kWOData } op;
    tuple1<WhereNode*%>*% left;
    tuple1<WhereNode*%>*% right;

    string data;
};
extern sType*% sType*::initialize(sType*% self,char*% class_name,int array_num,bool auto_increment=false,bool primary_key=false,bool not_null=false);
extern char*% sType*::to_string(sType* self);
extern Table*% Table*::initialize(Table*% self,char*% name,list<tuple2<string,sType*%>*%>*% types);
extern char*% Table*::to_string(Table* self);
extern Database*% Database*::initialize(Database*% self,char*% name);
extern map<string,Database*%>*% gDatabases;
extern void skip_spaces(sInfo* info=info);
extern char*% parse_word(sInfo* info=info);
extern bool expected_next_charactor(char c,sInfo* info=info);
extern tuple3<string,sType*%,bool>*% parse_type(sInfo* info=info);
extern bool eval_create_table(sInfo* info);
extern char*% parse_value(sInfo* info=info);
extern bool eval_insert_into(sInfo* info);
extern WhereNode*% WhereNode*::initialize(WhereNode*% self,WhereNode*% left,WhereNode*% right,int op,char*% data);
extern WhereNode*% parse_where(sInfo* info=info);
extern bool where_select(map<string,string>* row,WhereNode* where_node);
extern bool like(char* str,char* pattern);
extern bool eval_select_from(char* deliminater="\n",sInfo* info);
extern char*% show_tables(sInfo* info=info);
extern int main();

#endif
