#include <comelang.h>
#include <comelang-net.h>

class sType
{
    string class_name;
    int array_num;
    
    bool auto_increment;
    bool primary_key;
    bool not_null;
    
    new(string class_name, int array_num, bool auto_increment=false, bool primary_key=false, bool not_null=false) {
        self.class_name = class_name;
        self.array_num = array_num;
        self.auto_increment = auto_increment;
        self.primary_key = primary_key;
        self.not_null = not_null;
    }
    
    string to_string() {
        var buf = new buffer();
        
        buf.append_str(self.class_name);
        if(self.array_num > 0) {
            buf.append_str("(");
            buf.append_str(self.array_num.to_string());
            buf.append_str(")");
        }
        
        if(self.auto_increment) {
            buf.append_str(" AUTO INCREMENT");
        }
        
        if(self.primary_key) {
            buf.append_str(" PRIMARY KEY");
        }
        if(self.not_null) {
            buf.append_str(" NOT NULL");
        }
        
        return buf.to_string();
    }
};

class Table
{
    string name;
    list<map<string,string>*%>*% rows;
    list<tuple2<string, sType*%>*%>*% types;
    
    new(string name, list<tuple2<string, sType*%>*%>*% types) {
        self.name = name;
        self.rows = new list<map<string,string>*%>();
        self.types = types;
    }
    
    string to_string() {
        var buf = new buffer();
        
        foreach(it, self.types) {
            var name, type = it;
            
            buf.append_str(name);
            buf.append_str(":");
            buf.append_str(type.to_string());
            buf.append_str("\n");
        }
        
        return buf.to_string();
    }
}

class Database
{
    string name
    map<string, Table*%>*% tables;
    
    new(string name) {
        self.name = name;
        self.tables = new map<string, Table*%>();
        
        //self.tables.insert(s"users", new Table(s"users", [(s"name", new sType(s"CHAR", array_num:100)), (s"password", new sType(s"CHAR", array_num:100))]));
    }
}

map<string, Database*%>*% gDatabases;

struct sInfo
{
    char* p;
    int socket;
    string current_db_name;
};

void skip_spaces(sInfo* info=info) 
{
    while(*info->p == ' ' || *info->p == '\t') {
        info->p++;
    }
}

string parse_word(sInfo* info=info)
{
    var buf = new buffer();
    
    while(*info->p) {
        if(*info->p == ' ' || *info->p == '\t' || *info->p == '\n' || *info->p == '\r') {
            break;
        }
        else if(!xisalnum(*info->p) && *info->p != '_' && *info->p != '-') {
            break;
        }
        else {
            buf.append_char(*info->p);
            info->p++;
        }
    }
    skip_spaces();
    
    return buf.to_string();
}

bool expected_next_charactor(char c, sInfo* info=info)
{
    if(*info->p == c) {
        info->p++;
        skip_spaces();
    }
    else {
        printf("expected character(%c), but it is %c.\n", c, *info->p);
        return false;
    }
    
    return true;
}


string, sType*%, bool parse_type(sInfo* info=info)
{
    string field_name = parse_word();
    
    string class_name = parse_word();
    
    int array_num = 0;
    bool auto_increment = false;
    bool primary_key = false;
    bool not_null = false;
    
    while(1) {
        if(*info->p == '(') {
            info->p++;
            skip_spaces();
            int n = 0;
            while(xisdigit(*info->p)) {
                n = n * 10 + *info->p - '0';
                info->p++;
                skip_spaces();
            }
            skip_spaces();
            
            array_num = n;
            
            expected_next_charactor(')')
        }
        else if(strncmp(info->p, "AUTO_INCREMENT", strlen("AUTO_INCREMENT")) == 0) {
            info->p += strlen("AUTO_INCREMENT");
            skip_spaces();
            
            auto_increment = true;
        }
        else if(strncmp(info->p, "PRIMARY KEY", strlen("PRIMARY KEY")) == 0) {
            info->p += strlen("PRIMARY KEY");
            skip_spaces();
            
            primary_key = true;
        }
        else if(strncmp(info->p, "NOT NULL", strlen("NOT NULL")) == 0) {
            info->p += strlen("NOT NULL");
            skip_spaces();
            
            not_null = true;
        }
        else {
            break;
        }
    }
    
    sType*% type_ = new sType(class_name, array_num, auto_increment, primary_key, not_null);
    
    return (field_name, type_, false);
}

bool eval_create_table(sInfo* info)
{
    info->p += strlen("CREATE TABLE");
    
    skip_spaces();
    
    bool if_not_exists = false;
    if(strncmp(info->p, "IF NOT EXISTS", strlen("IF NOT EXISTS")) == 0) {
        info->p += strlen("IF NOT EXISTS");
        skip_spaces();
        if_not_exists = true;
    }
    
    string table_name = parse_word();
    
    expected_next_charactor('(')
    
    list<tuple2<string, sType*%>*%>*% types = new list<tuple2<string, sType*%>*%>();
    while(1) {
        var field_name, type, err = parse_type();
        
        err
        
        types.add((field_name, type));
        
        if(*info->p == ')') {
            break;
        }
        
        expected_next_charactor(',')
    }
    
    expected_next_charactor(')')
    
    Database* current_db = gDatabases[info.current_db_name];
    
    if(current_db.tables[table_name] == null) {
        current_db.tables.insert(table_name, new Table(table_name, types));
        
        return true;
    }
    else if(if_not_exists) {
        return true;
    }
    else {
        return false;
    }
}

string parse_value(sInfo* info=info)
{
    if(*info->p == '\'') {
        info->p++;
        skip_spaces();
        
        buffer*% buf = new buffer();
        
        while(1) {
            if(*info->p == '\\') {
                info->p++;
                if(*info->p != '\0') {
                    buf.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                break;
            }
            else if(*info->p == '\'') {
                info->p++;
                break;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        return buf.to_string();
    }
    else {
        return parse_word();
    }
}

bool eval_insert_into(sInfo* info)
{
    info->p += strlen("INSERT INTO");
    
    skip_spaces();
    
    string table_name = parse_word();
    
    skip_spaces();
    
    expected_next_charactor('(')
    
    list<string>*% field_names = new list<string>();
    while(1) {
        string field = parse_word();
        
        field_names.add(field);
        
        if(*info->p == ')') {
            break;
        }
        
        expected_next_charactor(',')
    }
    
    expected_next_charactor(')')
    
    if(strncmp(info->p, "VALUES", strlen("VALUES")) == 0) {
        info->p += strlen("VALUES");
    }
    
    skip_spaces();
    
    expected_next_charactor('(')
    
    list<string>*% values = new list<string>();
    while(1) {
        string value = parse_value();
        
        values.add(value);
        
        if(*info->p == ')') {
            break;
        }
        
        expected_next_charactor(',')
    }
    
    expected_next_charactor(')')
    
    if(field_names.length() != values.length()) {
        return false;
    }
    
    Database* current_db = gDatabases[info.current_db_name];
    
    Table* table = current_db.tables[table_name];
    
    if(table) {
        map<string, string>*% row = new map<string, string>();
        
        int n = 0;
        foreach(it, field_names) {
            string name = string(it);
            string value = string(values[n]);
            
            row[name] = value;
            
            n++;
        }
        
        int last_index = table.rows.length();
        
        map<string, string>* last_row = table.rows[last_index-1];
        
        if(last_row) {
            foreach(it, table.types) {
                var name, type = it;
                
                if(type->auto_increment) {
                    row[name] = xsprintf("%d", atoi(last_row[name]) + 1);
                }
            }
        }
        else {
            foreach(it, table.types) {
                var name, type = it;
                
                if(type->auto_increment) {
                    row[name] = xsprintf("%d", 1);
                }
            }
        }
        
        table.rows.add(row);
    }
    else {
        return false;
    }
    
    return true;
}

header { struct WhereNode; };
struct WhereNode;

struct WhereNode
{
    enum { kWOEq, kWONotEq, kWOLt, kWOLtEq, kWOGt, kWOGtEq, kWOAnd, kWOOr, kWOData } op;
    tuple1<WhereNode*%>*% left;
    tuple1<WhereNode*%>*% right;
    
    string data;
};

WhereNode*% WhereNode*::initialize(WhereNode*% self, WhereNode*% left, WhereNode*% right, int op, string data) 
{
    self.op = op;
    self.left = new tuple1<WhereNode*%>(left);
    self.right = new tuple1<WhereNode*%>(right);
    self.data = data;
    
    return self;
}

WhereNode*% parse_where(sInfo* info=info)
{
    string str = parse_word();
    
    WhereNode*% left = new WhereNode(null, null, kWOData, str);
    
    WhereNode*% result = null;
    if(*info->p == '=') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOEq, null);
    }
    else if(strncmp(info->p, "!=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWONotEq, null);
    }
    else if(strncmp(info->p, ">=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOGtEq, null);
    }
    else if(strncmp(info->p, "<=", 2) == 0) {
        info->p+=2;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOLtEq, null);
    }
    else if(*info->p == '>') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOGt, null);
    }
    else if(*info->p == '<') {
        info->p++;
        skip_spaces();
        
        string str2;
        if(*info->p == '\'') {
            str2 = parse_value();
        }
        else {
            str2 = parse_word();
        }
        
        WhereNode*% right = new WhereNode(null, null, kWOData, str2);
        
        result = new WhereNode(left, right, kWOLt, null);
    }
    
    skip_spaces();
    
    if(strncmp(info->p, "AND", strlen("AND")) == 0) {
        info->p += strlen("AND");
        skip_spaces();
        
        WhereNode*% right = parse_where();
        
        result = new WhereNode(result, right, kWOAnd, null);
    }
    else if(strncmp(info->p, "OR", strlen("OR")) == 0) {
        info->p += strlen("OR");
        skip_spaces();
        
        WhereNode*% right = parse_where();
        
        result = new WhereNode(result, right, kWOOr, null);
    }
    
    return result;
}

bool where_select(map<string,string>* row, WhereNode* where_node)
{
    switch(where_node.op) {
        case kWOEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return left === right;
                }
                else {
                    return atoi(left) == right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWONotEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return left !== right;
                }
                else {
                    return atoi(left) != right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOLt: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) < right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOLtEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) <= right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOGt: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) > right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOGtEq: {
            if(where_node.left.v1.op == kWOData && where_node.right.v1.op == kWOData) {
                char* left = row[where_node.left.v1.data];
                char* right = where_node.right.v1.data;
                
                int right_int_value = atoi(right);
                
                if(right_int_value == 0) {
                    return false;
                }
                else {
                    return atoi(left) >= right;
                }
            }
            else {
                return false;
            }
            }
            break;
            
        case kWOAnd: {
            bool left = where_select(row, where_node.left.v1);
            bool right = where_select(row, where_node.right.v1);
            
            return left && right;
            }
            break;
            
        case kWOOr: {
            bool left = where_select(row, where_node.left.v1);
            bool right = where_select(row, where_node.right.v1);
            
            return left || right;
            }
            break;
            
        case kWOData:
            return false;
    }
    
    return false;
}

bool like(char *str, char *pattern) 
{
    if (*pattern == '\0') return *str == '\0';

    if (*pattern == '%') {
        return like(str, pattern + 1) || (*str && like(str + 1, pattern));
    }

    if (*pattern == '_') {
        return *str && like(str + 1, pattern + 1);
    }

    return *str == *pattern && like(str + 1, pattern + 1);
}

bool eval_select_from(char* deliminater="\n", sInfo* info)
{
    info->p += strlen("SELECT");
    
    skip_spaces();
    
    bool all_ = false;
    bool max_ = false;
    list<string>*% field_names = new list<string>();
    map<string,bool>*% max_field = new map<string,bool>();
    if(*info->p =='*') {
        info->p++;
        skip_spaces();
        all_ = true;
        
        if(strncmp(info->p, "FROM", strlen("FROM")) == 0) {
            info->p += strlen("FROM");
            skip_spaces();
        }
    }
    else {
        while(1) {
            string field = null;
            bool max_flag = false;
            if(strncmp(info->p, "MAX(", strlen("MAX(")) == 0) {
                info->p += strlen("MAX(");
                field = parse_word();
                expected_next_charactor(')');
                max_flag = max_ = true;
            }
            else {
                field = parse_word();
            }
            
            field_names.add(field);
            max_field.insert(field, max_flag);
            
            if(strncmp(info->p, "FROM", strlen("FROM")) == 0) {
                info->p += strlen("FROM");
                skip_spaces();
                break;
            }
            
            expected_next_charactor(',')
        }
    }
    
    string table_name = parse_word();
    
    skip_spaces();
    
    WhereNode*% where_node = null;
    string in_target = null;
    list<string>*% in_values = new list<string>();
    bool not_in = false;
    string between_target = null;
    string like_target = null;
    string not_like_target = null;
    tuple2<string, string>*% between_values = null;
    string like_value = null;
    string not_like_value = null;
    if(strncmp(info->p, "WHERE", strlen("WHERE")) == 0) {
        info->p += strlen("WHERE");
        skip_spaces();
        
        char* p = info->p;
        
        string tmp = parse_word();
        
        if(strncmp(info->p, "IN", strlen("IN")) == 0 || strncmp(info->p, "NOT IN", strlen("NOT IN")) == 0) {
            if(strncmp(info->p, "IN", strlen("IN")) == 0) {
                info->p += strlen("IN");
                skip_spaces();
            }
            else {
                info->p += strlen("NOT IN");
                skip_spaces();
                not_in = true;
            }
            
            in_target = tmp;
            
            expected_next_charactor('(');
            while(1) {
                string value = parse_value();
                
                in_values.add(value);
                
                if(*info->p == '\0') {
                    return false;
                }
                else if(*info->p == ')') {
                    info->p++;
                    skip_spaces();
                    break;
                }
                
                expected_next_charactor(',');
            }
        }
        else if(strncmp(info->p, "BETWEEN", strlen("BETWEEN")) == 0) {
            info->p += strlen("BETWEEN");
            skip_spaces();
            
            between_target = tmp;
            
            string value = parse_value();
            
            skip_spaces();
            
            if(strncmp(info->p, "AND", strlen("AND")) == 0) {
                info->p += strlen("AND");
                skip_spaces();
            }
            
            string value2 = parse_value();
            skip_spaces();
            
            between_values = (value, value2);
        }
        else if(strncmp(info->p, "LIKE", strlen("LIKE")) == 0) {
            info->p += strlen("LIKE");
            skip_spaces();
            
            like_target = tmp;
            
            string value = parse_value();
            
            like_value = value;
        }
        else if(strncmp(info->p, "NOT LIKE", strlen("NOT LIKE")) == 0) {
            info->p += strlen("NOT LIKE");
            skip_spaces();
            
            not_like_target = tmp;
            
            string value = parse_value();
            
            not_like_value = value;
        }
        else {
            info->p = p;
            
            where_node = parse_where();
        }
    }
    
    if(field_names.length() == 0 && !all_) {
        return false;
    }
    
    Database* current_db = gDatabases[info.current_db_name];
    
    Table* table = current_db.tables[table_name];
    
    buffer*% buf = new buffer();
    
    if(table) {
        if(in_target && not_in) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    bool check = true;
                    foreach(it2, in_values) {
                        if(row[in_target] === it2) {
                            check = false;
                        }
                    }
                    
                    if(check) {
                        foreach(it3, row) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                    }
                }
            }
            else {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    bool check = true;
                    foreach(it2, in_values) {
                        if(row[in_target] === it2) {
                            check = false;
                        }
                    }
                    
                    if(check) {
                        foreach(it3, field_names) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                    }
                }
            }
        }
        else if(in_target) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    foreach(it2, in_values) {
                        if(row[in_target] === it2) {
                            foreach(it3, row) {
                                char* value = row[it3];
                                string value2 = value + string(deliminater);
                                buf.append_str(value2);
                            }
                            break;
                        }
                    }
                }
            }
            else {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    foreach(it2, in_values) {
                        if(row[in_target] === it2) {
                            foreach(it3, field_names) {
                                char* value = row[it3];
                                string value2 = value + string(deliminater);
                                buf.append_str(value2);
                            }
                            break;
                        }
                    }
                }
            }
        }
        else if(between_target) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[between_target];
                    
                    char* start = between_values.v1;
                    char* end = between_values.v2;
                    
                    if(atoi(value) >= atoi(start) && atoi(value) <= atoi(end)) {
                        foreach(it3, row) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
            else {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[between_target];
                    
                    char* start = between_values.v1;
                    char* end = between_values.v2;
                    
                    if(atoi(value) >= atoi(start) && atoi(value) <= atoi(end)) {
                        foreach(it3, field_names) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
        }
        else if(like_target) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[like_target];
                    
                    char* pattern = like_value;
                    
                    if(like(value, pattern)) {
                        foreach(it3, row) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
            else {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[like_target];
                    
                    char* pattern = like_value;
                    
                    if(like(value, pattern)) {
                        foreach(it3, field_names) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
        }
        else if(not_like_target) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[not_like_target];
                    
                    char* pattern = not_like_value;
                    
                    if(!like(value, pattern)) {
                        foreach(it3, row) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
            else {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    
                    char* value = row[not_like_target];
                    
                    char* pattern = not_like_value;
                    
                    if(!like(value, pattern)) {
                        foreach(it3, field_names) {
                            char* value = row[it3];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                        break;
                    }
                }
            }
        }
        else if(where_node) {
            if(all_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    if(where_select(row, where_node)) {
                        foreach(it2, row) {
                            char* value = row[it2];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                    }
                }
            }
            else if(max_) {
                list<map<string,string>*%>*% rows = table.rows;
                
                int max_value = 0;
                map<string,string>* max_row = null;
                foreach(it, rows) {
                    map<string,string>* row = it;
                    if(where_select(row, where_node)) {
                        foreach(it2, field_names) {
                            char* value = row[it2];
                            if(max_field[it2]) {
                                if(atoi(value) > max_value) {
                                    max_value = atoi(value);
                                    max_row = row;
                                }
                            }
                        }
                    }
                }
                if(max_row) {
                    foreach(it2, field_names) {
                        char* value = max_row[it2];
                        string value2 = value + string(deliminater);
                        buf.append_str(value2);
                    }
                }
            }
            else { // field_names.length() > 0
                list<map<string,string>*%>*% rows = table.rows;
                
                foreach(it, rows) {
                    map<string,string>* row = it;
                    int max_value = 0;
                    if(where_select(row, where_node)) {
                        foreach(it2, field_names) {
                            char* value = row[it2];
                            string value2 = value + string(deliminater);
                            buf.append_str(value2);
                        }
                    }
                }
            }
        }
        else if(all_) {
            list<map<string,string>*%>*% rows = table.rows;
            
            foreach(it, rows) {
                map<string, string>* row = it;
                
                foreach(it2, row) {
                    string value = row[it2] + string(deliminater);
                    buf.append_str(value);
                }
            }
        }
        else { // field_names.length() > 0
            list<map<string,string>*%>*% rows = table.rows;
            
            foreach(it, rows) {
                map<string, string>* row = it;
                
                foreach(it2, field_names) {
                    string str = row[it2] + string(deliminater);
                    buf.append_str(str);
                }
            }
        }
        
        string str = buf.to_string();
        
        if(str === "") {
            char *not_found = "NOT FOUND\n";
            write(info->socket, not_found, strlen(not_found));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", not_found);
fclose(f);
        }
        else {
            write(info->socket, str, str.length());
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", str);
fclose(f);
        }
    }
    else {
        return false;
    }
    
    return true;
}

string show_tables(sInfo* info=info)
{
    var buf = new buffer();
    Database* current_db = gDatabases[info.current_db_name];
    
    foreach(it, current_db.tables) {
        Table* table = current_db.tables[it];
        
        buf.append_str(table.name);
        buf.append_str("\n");
        buf.append_str(table.to_string());
        buf.append_str("\n");
    }
    
    return buf.to_string();
}

int main() {
    setlocale(LC_ALL, "");
    gDatabases = new map<string, Database*%>();
    
    sInfo info;
    info.current_db_name = null;
    
    server_socket(port:3366, reuse:true) {
        char data[1024] = {0};
        int size = read(it, data, 1023);
        if(size <= 0) {
            *it3 = true;
            return;
        }
        data[size] = '\0';
        
FILE* f = fopen("database.log", "a");
fprintf(f, "Recived: %s\n", data);
fclose(f);
        
        char* p = data;
        
        info->p = p;
        info->socket = it;
        
        if(strncmp(info->p, "use", strlen("use")) == 0) {
            info->p += strlen("use");
            skip_spaces(&info);
            
            string word = parse_word(&info);
            
            if(gDatabases[word]) {
                info.current_db_name = word;
                
                char *ok_message = "OK\n";
                write(it, ok_message, strlen(ok_message));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", ok_message);
fclose(f);
            }
            else {
                char *not_found = "NOT FOUND\n";
                write(it, not_found, strlen(not_found));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", not_found);
fclose(f);
            }
        }
        else if(strncmp(info->p, "show tables", strlen("show tables")) == 0) {
            info->p += strlen("show tables");
            skip_spaces(&info);
            
            if(info.current_db_name) {
                string str = show_tables(&info);
                
                write(it, str, strlen(str));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", str);
fclose(f);
            }
            else {
                char *not_found = "NOT FOUND\n";
                write(it, not_found, strlen(not_found));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", not_found);
fclose(f);
            }
        }
        else if(strncmp(info->p, "CREATE DATABASE", strlen("CREATE DATABASE")) == 0) {
            info->p += strlen("CREATE DATABASE");
            skip_spaces(&info);
            
            string word = parse_word(&info);
            
            if(gDatabases[word] == null) {
                gDatabases[word] = new Database(word);
            }
            
            char *ok_message = "OK\n";
            write(it, ok_message, strlen(ok_message));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", ok_message);
fclose(f);
        }
        else if(strncmp(info->p, "CREATE TABLE", strlen("CREATE TABLE")) == 0) {
            if(!eval_create_table(&info)) {
FILE* f = fopen("database.log", "a");
fprintf(f, "FAILED\n");
fclose(f);
                return;
            }
            
            char *ok_message = "OK\n";
            write(it, ok_message, strlen(ok_message));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", ok_message);
fclose(f);
        }
        else if(strncmp(info->p, "INSERT INTO", strlen("INSERT INTO")) == 0) {
            if(!eval_insert_into(&info)) {
                return;
            }
            
            char *ok_message = "OK\n";
            write(it, ok_message, strlen(ok_message));
FILE* f = fopen("database.log", "a");
fprintf(f, "%s\n", ok_message);
fclose(f);
        }
        else if(strncmp(info->p, "SELECT", strlen("SELECT")) == 0) {
            if(!eval_select_from("\n", &info)) {
                return;
            }
        }
        else if(strncmp(info->p, "exit", strlen("exit")) == 0) {
            *it2 = true;
            return;
        }
    }
    return 0;
}

