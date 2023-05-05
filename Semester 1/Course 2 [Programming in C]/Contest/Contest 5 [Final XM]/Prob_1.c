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

        for(int k=1; k<=(i*2-1); k++)
        {
            if(i%2==1)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}

