#ifndef __COMMON_H__
#define __COMMON_H__
#include <neo-c.h>
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
extern sType*% sType*::initialize(sType*% self,string class_name,int array_num,_Bool auto_increment=0,_Bool primary_key=0,_Bool not_null=0);
extern string sType*::to_string(sType* self);
extern Table*% Table*::initialize(Table*% self,string name,list<tuple2<string,sType*%>*%>*% types);
extern string Table*::to_string(Table* self);
extern Database*% Database*::initialize(Database*% self,string name);
extern map<string,Database*%>*% gDatabases;
extern void skip_spaces(sInfo* info=info);
extern string parse_word(sInfo* info=info);
extern _Bool expected_next_charactor(char c,sInfo* info=info);
extern tuple3<string,sType*%,_Bool>*% parse_type(sInfo* info=info);
extern _Bool eval_create_table(sInfo* info);
extern string parse_value(sInfo* info=info);
extern _Bool eval_insert_into(sInfo* info);
extern WhereNode*% WhereNode*::initialize(WhereNode*% self,WhereNode*% left,WhereNode*% right,int op,string data);
extern WhereNode*% parse_where(sInfo* info=info);
extern _Bool where_select(map<string,string>* row,WhereNode* where_node);
extern _Bool like(char* str,char* pattern);
extern _Bool eval_select_from(char* deliminater="\n",sInfo* info);
extern string show_tables(sInfo* info=info);
extern int main();

#endif
