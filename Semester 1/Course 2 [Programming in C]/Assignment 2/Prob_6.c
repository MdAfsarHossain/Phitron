#include<stdio.h>

int fact(int n)
{
    int f = 1;

    if(n==0)
        return 1;

    for(int i=1; i<=n; i++)
    {
        f *= i;
    }

    return f;
}

int call_func(int a, int b)
{
    int res;

    res = fact(a) / fact(b);

    return res;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans;

    ans = call_func(a, b);
    printf("%d\n", ans);

    return 0;
}
