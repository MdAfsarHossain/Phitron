#include<stdio.h>
#define ll long long int
int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int max = ara[0];
    for(int i=1; i<n; i++)
    {
        if(ara[i]>max)
            max = ara[i];
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", max - ara[i]);
    }

    return 0;
}

