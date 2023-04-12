#include<stdio.h>
int main()
{
    int x, y;
    while(scanf("%d%d", &x, &y)==2)
    {
        if(x+y>=100)
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
