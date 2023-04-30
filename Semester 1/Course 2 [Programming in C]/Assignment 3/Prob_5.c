#include<stdio.h>

int solve(int ara[], int n)
{
    int sum = 0;
    for(int i=0, j=1; i<n; i++, j++)
    {
        if(j%2==0)
        {
            if(ara[i]%2==0)
            {
                sum += ara[i] + j;
            }
        }
        else
        {
            if(ara[i]%2==1)
            {
                sum += ara[i] + j;
            }
        }
    }

    if(sum >0)
        return sum;
    else
        return 0;
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

    int ans;
    ans = solve(ara, n);

    printf("%d", ans);

    return 0;
}

