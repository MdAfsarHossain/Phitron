#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(int i=0; i<n; i++)
    {
        printf("%d - ", ara[i]);
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            else
                printf("%d ", ara[j]);
        }
        printf("\n");
    }
}
