if uname | grep Darwin
then
    brew services start mysql
elif which apk > /dev/null
then
    mkdir -p /run/mysqld
    chown mysql:mysql /run/mysqld
    mkdir -p /var/lib/mysql
    chown mysql:mysql /var/lib/mysql
    mysql_install_db --user=mysql --datadir=/var/lib/mysql
    mysqld --user=mysql &
# termux
elif test `uname -o` = Android
then
    mkdir -p /run/mysqld
    chown mysql:mysql /run/mysqld
    mkdir -p /var/lib/mysql
    chown mysql:mysql /var/lib/mysql
    mysql_install_db --user=mysql --datadir=/var/lib/mysql
    mysqld --user=mysql &
elif uname -a | grep Debian
then
    mysql_install_db --user=mysql --datadir=/var/lib/mysql
    mysqld --user=mysql &
elif which apt > /dev/null
then
    service mysql start
fi
