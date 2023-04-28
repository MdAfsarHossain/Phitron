#include<stdio.h>
int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    //Largest Check
    if(a>b && a>c && a>d)
    {
        printf("Largest = %d\n", a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("Largest = %d\n", b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("Largest = %d\n", c);
    }
    else
    {
        printf("Largest = %d\n", d);
    }

    //Smallest check
    if(a<b && a<c && a<d)
    {
        printf("Smallest = %d\n", a);
    }
    else if(b<a && b<c && b<d)
    {
        printf("Smallest = %d\n", b);
    }
    else if(c<a && c<b && c<d)
    {
        printf("Smallest = %d\n", c);
    }
    else
    {
        printf("Smallest = %d\n", d);
    }

    return 0;
}

