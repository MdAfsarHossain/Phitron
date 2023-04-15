//CodeForces 977A
#include<stdio.h>
#define ll long long int
int main()
{
    ll n, k, x;
    scanf("%lld %lld", &n, &k);

    while(k--)
    {
        //n = n%10?a-1:a/10;

        if(n%10==0)
            n = n / 10;
        else
            n--;
    }

    printf("%lld\n", n);

    return 0;

}
