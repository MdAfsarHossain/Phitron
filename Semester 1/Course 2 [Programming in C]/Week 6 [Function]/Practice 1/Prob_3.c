#include<stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);

    int sum = 0, x;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        sum += x%10 + x/1000;
    }

    printf("%d", sum);
}

int main()
{
    solve();
}
