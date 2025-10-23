
/* int fun(); */

int main(){ 
/*    int a = fun(); */
    asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n"
         
         , 1, "HELLO WORLD\r\n", 13);
    asm ("li a7, 70\nmv a0, %0\necall\n"
         , 8);
         
    return 0;
}
