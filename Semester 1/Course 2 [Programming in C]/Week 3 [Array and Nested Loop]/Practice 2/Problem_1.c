#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("0 1");
    }
    else
    {
        int ara[n+1];
        ara[0] = 0;
        ara[1] = 1;

        printf("%d %d", ara[0], ara[1]);

        for(int i=2; i<n; i++)
        {
            ara[i] = ara[i-2] + ara[i-1];
            printf(" %d", ara[i]);
        }
    }

    return 0;
}
