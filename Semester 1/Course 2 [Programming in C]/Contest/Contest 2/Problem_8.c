#include<stdio.h>
#define ll long long int
int main()
{
    ll n;
    scanf("%lld", &n);

    ll x;
    x = n*(n-1);
    printf("%lld", x/2);
    return 0;
}

