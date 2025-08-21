#include <comelang.h>
#include <comelang-str.h>
#include <comelang-net.h>

int main(int argc, char** argv)
{
    int n = 0;
    client_socket(port:3366) {
        char* messages[] = { 
            "CREATE DATABASE testdb", 
            "use testdb", 
            "CREATE TABLE IF NOT EXISTS meal(id INT AUTO_INCREMENT PRIMARY KEY, morning VARCHAR(100) NOT NULL, lunch VARCHAR(100) NOT NULL, dinner VARCHAR(100) NOT NULL)", "show tables", 
            "show tables", 
            "INSERT INTO meal(morning, lunch, dinner) VALUES ('PAN', 'UDON', 'PASTA')", 
            "INSERT INTO meal(morning, lunch, dinner) VALUES ('ONIGIRI', 'KARAAGE', 'SHAKE')", 
            "SELECT * FROM meal WHERE lunch NOT IN ('KARAAGE', 'SHAKE')", 
            "CREATE TABLE IF NOT EXISTS meal_time(id INT AUTO_INCREMENT PRIMARY KEY, username VARCHAR(100), morning VARCHAR(100), lunch VARCHAR(100), dinner VARCHAR(100))", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('ab25cq', '030000', '120000', '180000')", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('ab25cq', '090000', '150000', '220000')", 
            "INSERT INTO meal_time(username, morning, lunch, dinner) VALUES ('HASEGAWA', '090000', '150000', '220000')", 
            "SELECT * FROM meal_time WHERE lunch BETWEEN 120000 AND 140000", 
            "SELECT * FROM meal WHERE lunch LIKE 'U%'",
            "SELECT * FROM meal WHERE lunch NOT LIKE 'U%'",
            "SELECT MAX(lunch),username FROM meal_time WHERE username = 'ab25cq'",
            "exit", 
            NULL
        };
        
        char buf[1024] = {0};
        
        char* message = messages[n];
puts(message);
        write(it, message, strlen(message));
        int size = read(it, buf, 1023);
        buf[size] = '\0';
        
        printf("%s", buf);
        
        n++;
        
        if(messages[n] == NULL) {
            *it2 = true;
            return;
        }
    }
}
