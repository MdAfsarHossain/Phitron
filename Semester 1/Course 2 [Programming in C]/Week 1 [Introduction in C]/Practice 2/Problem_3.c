#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(n%2==0)
        {
            printf("Even.\n");
        }
        else
        {
            printf("Odd.\n");
        }
    }

    return 0;
}
