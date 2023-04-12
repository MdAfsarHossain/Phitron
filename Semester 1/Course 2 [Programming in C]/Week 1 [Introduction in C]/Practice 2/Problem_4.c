#include<stdio.h>
int main()
{
    int x;

    while(scanf("%d", &x)==1)
    {
        if(x<=32)
        {
            printf("F\n");
        }
        else if(x<=39)
        {
            printf("D\n");
        }
        else if(x<=49)
        {
            printf("C\n");
        }
        else if(x<=59)
        {
            printf("B\n");
        }
        else if(x<=69)
        {
            printf("A-\n");
        }
        else if(x<=79)
        {
            printf("A\n");
        }
        else
        {
            printf("A+\n");
        }
    }

    return 0;
}
