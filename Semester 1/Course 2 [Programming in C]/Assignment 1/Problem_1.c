#include<stdio.h>
int main()
{
    int a = 5, b = 13;
    int c;

    c = a;
    a = b;
    b = c;

    printf("%d and %d", a, b);

    return 0;
}
