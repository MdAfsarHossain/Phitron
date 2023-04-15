#include<stdio.h>
int main()
{
    int n;

    while(scanf("%d", &n)==1)
    {
        for(int i=2; i<=n; i+=2)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
