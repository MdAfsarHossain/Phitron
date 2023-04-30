#include<stdio.h>

int solve(int ara[], int n)
{
    int* x;
    int r, d;
    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        x = &ara[i];
        while(*x != 0)
        {
            r = *x % 10;
            *x /= 10;

            if(r==7)
            {
                cnt++;
                break;
            }
        }
    }

    return cnt;
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

    int mid;
    if(n%2==1)
    {
        mid = (n/2) + 1;
    }
    else
    {
        mid = n/2;
    }

    int ans = solve(ara, n);

    if(ans >= mid)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }

    return 0;
}

