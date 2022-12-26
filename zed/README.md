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
```
