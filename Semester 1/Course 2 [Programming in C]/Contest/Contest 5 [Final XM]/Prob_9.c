#include<stdio.h>

int gcd(int a, int b)
{
    int x, t;
    if (a == 0) x = b;
    else if (b == 0) x = a;
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        x = a;
    }

    return x;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int ara[n+1];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                //printf("%d %d -> %d\n",ara[i], ara[j], gcd(ara[i], ara[j]));
                int ans = gcd(ara[i], ara[j]);
                if(ans == 1)
                {
                    cnt++;
                }
            }
        }

        printf("%d\n", cnt*2);
        cnt = 0;
    }

    return 0;
}

