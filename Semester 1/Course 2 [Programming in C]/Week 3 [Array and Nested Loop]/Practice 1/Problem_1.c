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

    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
