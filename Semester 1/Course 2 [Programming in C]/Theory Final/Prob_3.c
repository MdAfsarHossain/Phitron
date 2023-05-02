///Pass by value
/*
#include<stdio.h>

void func(int x)
{
    x = 50;
    printf("%d\n", x);
}

int main()
{
    int n;
    scanf("%d", &n);

    func(n);

    printf("%d", n);

    return 0;
}
*/
///Pass by reference

#include<stdio.h>

void func(int *x)
{
    *x = 50;
    printf("%d\n", *x);
}

int main()
{
    int n;
    scanf("%d", &n);

    func(&n);

    printf("%d", n);

    return 0;
}
