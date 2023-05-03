#include<stdio.h>
#define ll long long int
int main()
{
    ll t, a, b, c, d;
    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        printf("%lld\n", (a)-(b+c+d));
    }
    return 0;
}

