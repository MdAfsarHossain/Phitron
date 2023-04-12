#include<stdio.h>
int main()
{
    int a, b, c, s;

    while(scanf("%d%d%d", &a, &b, &c)==3)
    {
        int x, y, z;
        x = a + b;
        y = b + c;
        z = a + c;

        if((a+b>c) && (b+c>a) && (a+c>b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
