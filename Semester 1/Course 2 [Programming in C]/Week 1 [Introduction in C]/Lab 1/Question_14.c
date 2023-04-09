#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    if(x==y && y==z)
    {
        printf("This is Equilateral.\n");
    }
    else if(x==y || y==z || x==z)
    {
        printf("This is Isosceles.\n");
    }
    else
    {
        printf("This is Scalene.\n");
    }

    return 0;
}
