#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if(n%3==0)
    {
        printf("%d", n/3);
    }
    else
    {
        printf("-1");
    }
    return 0;
}

