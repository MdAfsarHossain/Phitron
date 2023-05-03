#include<stdio.h>
#define ll long long int
int main()
{
    int n, k;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    scanf("%d", &k);

    if(k!=0)
    {
        for(int i=k; i<n; i++)
        {
            printf("%d ", ara[i]);
        }

        for(int i=0; i<k; i++)
        {
            printf("%d ", ara[i]);
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ", ara[i]);
        }
    }

    return 0;
}

