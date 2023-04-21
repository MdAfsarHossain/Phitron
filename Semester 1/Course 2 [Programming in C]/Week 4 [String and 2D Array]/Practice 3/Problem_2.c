#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }

        for(int k=1; k<=n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
