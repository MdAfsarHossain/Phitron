#include<stdio.h>
int main()
{
    char a[10];
    char ch = 'a';
    for(int i = 0; i<8; i++)
    {
        a[i] = ch+8-i;
    }
    a[8] = '\0';

    puts(a);
    //ihgfedcb
    //105, 104, 103, 102, 101, 100, 99, 98
    //i     h    g    f    e    d   c   b
    return 0;
}



