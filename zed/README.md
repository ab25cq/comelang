Zed interpreter written by neo-c

In my hobby

USAGE

```
    > zed '"HELLO WORLD"'
    HELLO WORLD
    > cat a.c
    AAA
    BBB
    CCC
    > cat a.c | zed '.split(/\n/)'
    [AAA,BBB,CCC]
    > cat a.c | zed '.split(/\n/).join("+")'
    AAA+BBB+CCC
    > echo 123 | zed '.scan(/./)'
    [1,2,3]
    > echo 123 | zed '.scan(/./).map  { it + "ab" }'
    [1ab,2ab,3ab]
    > zed '(1+1).to_string() + "B"'
    2B
    > echo abc | zed '.sub_block(/./g) { it * 2 }'
    aabbcc
    
    > echo abc | zed '(.scan(/./) * 2).join("")'
    abcabc

```
