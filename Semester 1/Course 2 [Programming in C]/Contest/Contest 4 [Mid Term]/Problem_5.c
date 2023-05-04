#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            for(int j=1; j<=n; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        else if(i==n)
        {
            for(int j=1; j<=n; j++)
            {
                printf("%d", n);
            }
            printf("\n");
        }
        else
        {
            printf("%d", i);
            for(int j=1; j<=n-2; j++)
            {
                printf(" ");
            }
            printf("%d\n", n);
        }

    }
    return 0;
}

