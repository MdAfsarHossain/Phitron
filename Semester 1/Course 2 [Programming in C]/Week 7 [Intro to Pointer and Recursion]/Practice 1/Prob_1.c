#include<stdio.h>

int count(int n, int ara[], int k)
{
    int c = 0;
    for(int i=0; i<n; i++)
    {
        if(ara[i] != k)
            c++;
    }

    return c;
}

int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int k;
    scanf("%d", &k);

    int x = count(n, ara, k);
    printf("%d\n", x);

    return 0;
}
