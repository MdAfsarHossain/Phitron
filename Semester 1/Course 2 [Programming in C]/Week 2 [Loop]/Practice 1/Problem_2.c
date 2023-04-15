#include<stdio.h>
int main()
{
    int n;

    while(scanf("%d", &n)==1)
    {
        if(n>0)
        {
            for(int i=1; i<=n; i++)
            {
                printf("%d ", i);
            }
        }
        else
        {
            for(int i=1; i>=n; i--)
            {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}
