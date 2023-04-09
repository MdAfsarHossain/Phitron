#include<stdio.h>
int main()
{
    double h;
    scanf("%lf", &h);

    if(h<150.0)
    {
        printf("Dwarf\n");
    }
    else if(h == 150.0)
    {
        printf("Average height\n");
    }
    else if(h >= 165.0)
    {
        printf("Tall\n");
    }

    return 0;
}
