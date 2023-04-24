#include<stdio.h>

void reverse(int n)
{
    for(int i=n; i>=1; i--)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reverse(n);

    return 0;
}
