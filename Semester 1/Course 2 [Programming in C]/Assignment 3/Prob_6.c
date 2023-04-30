#include<stdio.h>

int divisible_3(int n)
{
    if(n%3==0)
        return 1;
    else
        return -1;
}

int divisible_5(int n)
{
    if(n%5==0)
        return 1;
    else
        return -1;
}

int solve(int ara[], int n)
{

    int x, y, z, cnt = 0;
    for(int i=0; i<n; i++)
    {
        x = ara[i];
        y = divisible_3(x);
        z = divisible_5(x);

        if(y == 1 || z == 1)
        {
            cnt++;
        }
    }

    if(cnt>0)
        return cnt;
    else
        return -1;
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

    int cnt;
    cnt = solve(ara, n);
    printf("%d", cnt);

    return 0;
}

