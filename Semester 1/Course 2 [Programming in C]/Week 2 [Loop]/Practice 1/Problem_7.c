#include<stdio.h>
#define ll long long int
int main()
{
    ll n, k, i, x, y;

    while(scanf("%lld %lld", &n, &k)==2)
    {
        for(i=1; i<=k; i++)
        {
            x = n%10;
            if(x!=0)
            {
                n -= 1;
            }
            else
            {
                n /= 10;
            }
        }

        printf("%lld\n", n);
    }

    return 0;
}
