
# alpine linux

if uname | grep Darwin
then
    brew install git pcre readline ncurses make autoconf libgc readline openssl mysql-client mysql
elif which apk > /dev/null
then
    sudo apk add sudo git clang gcc pcre-dev readline-dev ncurses-dev make samurai autoconf valgrind gdb lldb musl-dev gc-dev readline-dev openssl-dev mariadb-connector-c-dev mariadb-client mariadb
# termux
elif test `uname -o` = Android
then
    apt install which clang pcre readline ncurses make autoconf valgrind gdb lldb binutils libandroid-glob libgc openssl mariadb
# debian
elif uname -a | grep Debian
then
    sudo apt install clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmariadb-dev-compat libmariadb-dev mariadb-server mariadb-client
elif uname -a | grep raspberry
then
    sudo apt install clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmariadb-dev-compat libmariadb-dev mariadb-server mariadb-client
elif which apt > /dev/null
then
    sudo apt install  clang gcc libpcre++-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmysqlclient-dev mysql-server
fi
