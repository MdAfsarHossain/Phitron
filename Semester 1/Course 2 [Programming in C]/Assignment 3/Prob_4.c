#include<stdio.h>

int consecutiveEvenNumbers(int n)
{
    int x;
    x = (n-12)/4;

    return x;
}

int main()
{
    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int ans;
        ans = consecutiveEvenNumbers(n);
        printf("%d %d %d %d\n", ans, ans+2, ans+4, ans+6);
    }
    return 0;
}

