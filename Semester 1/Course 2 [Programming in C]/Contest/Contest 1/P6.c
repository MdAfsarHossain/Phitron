#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    if(x<=0 || y<=0 || z<=0)
    {
        printf("No\n");
    }
    else
    {

        if(x==y && y==z)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}

