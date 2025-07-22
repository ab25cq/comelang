
# Mac
if uname | grep Darwin
then
    brew install git pcre readline ncurses make autoconf libgc readline openssl mysql-client mysql
# alpine linux
elif which apk > /dev/null
then
    sudo apk add sudo git clang gcc pcre-dev readline-dev ncurses-dev make autoconf valgrind gdb lldb musl-dev gc-dev readline-dev openssl-dev mariadb-connector-c-dev mariadb-client mariadb libdwarf-dev elfutils-dev
# termux
elif test `uname -o` = Android
then
    apt install which clang pcre readline ncurses make autoconf valgrind gdb lldb binutils libandroid-glob libgc openssl mariadb libdwarf-dev libelf-dev libc6-dev
# debian
elif uname -a | grep Debian
then
    sudo apt install clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmariadb-dev-compat libmariadb-dev mariadb-server mariadb-client libdwarf-dev libelf-dev libc6-dev
# raspberry pi
elif uname -a | grep raspberry
then
    sudo apt install clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmariadb-dev-compat libmariadb-dev mariadb-server mariadb-client libdwarf-dev libelf-dev libc6-dev
elif which pacman > /dev/null
then
    sudo pacman -Syu make valgrind pcre
elif which apt > /dev/null
then
    sudo apt install  clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb libgc-dev libssl-dev libmysqlclient-dev mysql-server libdwarf-dev libelf-dev libc6-dev
fi
