#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, x1, x2, d;
    scanf("%lf%lf%lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d==0)
    {
        printf("Both are equal.\n");
        x1 = (-b/2.0*a);
        x2 = x1;

        printf("First Root Root1: %.3lf\n", x1);
        printf("Second Root Root2: %.3lf\n", x2);
    }
    else if(d>0)
    {
        printf("Both roots are leal and difference between\n");
        x1 = (-b + sqrt(d))/(2.0*a);
        x2= (-b - sqrt(d))/(2.0*a);

        printf("First Root Root1: %.3lf\n", x1);
        printf("Second Root Root2: %.3lf\n", x2);
    }
    else
    {
        printf("Root are Imaginary!!\nNo Solution.\n");
    }

    return 0;
}
