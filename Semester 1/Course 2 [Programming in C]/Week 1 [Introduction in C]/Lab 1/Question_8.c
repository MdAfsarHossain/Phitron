#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    printf("1st Number = %d,", a);
    printf("\t2nd Number = %d,", b);
    printf("\t3rd Number = %d\n", c);

    if(a>=b && a>=c)
    {
        printf("The 1st Number is the greatest among three.\n");
    }
    else if(b>=a && b>=c)
    {
        printf("The 2nd Number is the greatest among three.\n");
    }
    else
    {
        printf("The 3rd Number is the greatest among three.\n");
    }

    return 0;
}
