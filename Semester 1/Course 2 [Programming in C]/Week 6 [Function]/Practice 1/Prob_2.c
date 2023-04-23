#include<stdio.h>

void star(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i>1)
        {
            for(int k=1; k<i; k++)
            {
                printf(" ");
            }
        }

        for(int j=i; j<=n*2-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    star(n);
}
