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

    int q;
    scanf("%d", &q);

    while(q--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        ara[x] += y;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}
