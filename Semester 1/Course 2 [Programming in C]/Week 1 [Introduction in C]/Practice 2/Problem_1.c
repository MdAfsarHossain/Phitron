#include<stdio.h>
int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b)==2)
    {
        if(a>b)
        {
            printf("A is bigger.\n");
        }
        else if(b>a)
        {
            printf("B is bigger.\n");
        }
        else
        {
            printf("They are equal.\n");
        }

    }

    return 0;
}
