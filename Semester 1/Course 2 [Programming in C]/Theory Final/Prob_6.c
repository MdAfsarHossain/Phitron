/*
///1
#include<stdio.h>

void solve()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", a, b);
}

int main()
{
    solve();
    return 0;
}


///2
#include<stdio.h>

int solve()
{
    int a, b;
    scanf("%d%d", &a, &b);

    return a+b;
}

int main()
{
    int ans;
    ans = solve();
    printf("%d", ans);
    return 0;
}
///3
#include<stdio.h>

void solve(int a, int b)
{
    printf("%d %d", a, b);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    solve(a, b);

    return 0;
}

*/

///4
#include<stdio.h>

int solve(int a, int b)
{
    return a+b;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = solve(a, b);
    printf("%d", ans);
    return 0;
}

