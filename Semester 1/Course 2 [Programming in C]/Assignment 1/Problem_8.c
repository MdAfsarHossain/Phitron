#include <stdio.h>
int main()
{
    int a, b, t, gcd, lcm;

    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;

    if (a == 0)
    {
        gcd = b;
    }
    else if (b == 0)
    {
        gcd = a;
    }
    else
    {
        while (b != 0)
        {
            t = b;
            b = a % b;
            a = t;
        }
        gcd = a;
    }

    lcm = (x*y) / gcd;

    printf("The LCM of %d and %d is %d.\n", x, y, lcm);

    return 0;
}
