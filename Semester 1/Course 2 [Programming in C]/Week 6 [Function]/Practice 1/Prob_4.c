#include<stdio.h>

void func(int n)
{
    for(int i=2; i<=n; i+=2)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    func(n);
}
