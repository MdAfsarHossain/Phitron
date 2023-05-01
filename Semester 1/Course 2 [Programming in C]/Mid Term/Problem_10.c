#include<stdio.h>
int main()
{
    long long int n, sum = 0, r;

    scanf("%lld", &n);

    while(n != 0)
    {
        r = n%10;
        sum += r;
        n = n/10;
    }

    printf("%lld", sum);
    return 0;
}




