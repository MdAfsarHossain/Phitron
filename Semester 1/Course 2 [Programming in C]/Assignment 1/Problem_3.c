#include<stdio.h>
int main()
{
    long long int n, cnt = 0;

    scanf("%lld", &n);

    while(n!=0)
    {
        cnt++;
        n = n / 10;
    }

    printf("%lld digits", cnt);

    return 0;
}

