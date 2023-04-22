#include<stdio.h>

int present(int x)
{
    while(x!=0)
    {
        if(x%10 == 7)
            return 1;
        x /= 10;
    }
}

int sum(int x)
{
    int ans = 0;
    while(x!=0)
    {
        ans += (x%10);
        x /= 10;
    }

    return ans;
}

int lastd_prime(int x)
{
    int y = x%10;
    if(y == 2 || y == 3 || y == 5 || y == 7)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(present(n) == 1 && sum(n) > 10 && lastd_prime(n) == 1)
    {
        printf("Perfect Number!\n");
    }
    else
    {
        printf("Not Perfect Number!\n");
    }

    return 0;
}
