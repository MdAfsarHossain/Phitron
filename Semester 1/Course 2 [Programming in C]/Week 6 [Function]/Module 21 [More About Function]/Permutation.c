#include<stdio.h>

int fact(int n)
{
    int res = 1;
    for(int i=1; i<=n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    int n, r;
    scanf("%d%d", &n, &r);

    int ans = fact(n) / fact(n-r);

    printf("%d\n", ans);

    return 0;
}
