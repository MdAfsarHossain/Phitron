#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if(x>0)
    {
        printf("%d is a positive number\n", x);
    }
    else
    {
        printf("%d is a negative number\n", x);
    }

    return 0;
}
