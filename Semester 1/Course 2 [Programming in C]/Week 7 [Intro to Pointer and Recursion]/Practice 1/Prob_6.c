#include<stdio.h>

void sum(int a, int b, int c)
{
    int* p;
    int* q;
    int* r;

    p = &a;
    q = &b;
    r = &c;

    int* sum;
    sum = *p + *q + *r;
    printf("%d", sum);
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    sum(a, b, c);

    return 0;
}
