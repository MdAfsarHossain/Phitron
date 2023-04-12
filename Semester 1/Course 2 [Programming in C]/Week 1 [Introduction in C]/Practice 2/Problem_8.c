#include<stdio.h>
int main()
{
    int a, b, c, ans, x;

    while(scanf("%d%d%d", &a, &b, &c)==3)
    {
        ans = a + b + c;
        if(a<b && a<c)
            x = a;
        else if(b<a && b<c)
            x = b;
        else
            x = c;

        printf("%d\n", ans -x);

    }

    return 0;
}
