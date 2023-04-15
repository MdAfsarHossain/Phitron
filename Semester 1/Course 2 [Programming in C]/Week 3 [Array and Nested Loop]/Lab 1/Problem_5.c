//CSES: Increasing Array
#include<stdio.h>
#define ll long long int
int main()
{
    ll n;
    scanf("%lld", &n);

    ll ara[n+1];
    for(ll i=0; i<n; i++)
    {
        scanf("%lld", &ara[i]);
    }

    ll x = 0;

    for(ll i=1; i<n; i++)
    {
        if(ara[i] < ara[i-1])
        {
            x += (ara[i-1] - ara[i]);
            ara[i] = ara[i-1];
        }
    }

    printf("%lld", x);

}
