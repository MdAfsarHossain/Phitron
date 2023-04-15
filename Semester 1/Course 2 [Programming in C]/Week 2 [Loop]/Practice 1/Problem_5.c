#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}
