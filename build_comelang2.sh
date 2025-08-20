make comelang2
echo 'int main(int argc,char** argv){return 1;}' > t.c
./comelang2 t.c
./a; echo $?
