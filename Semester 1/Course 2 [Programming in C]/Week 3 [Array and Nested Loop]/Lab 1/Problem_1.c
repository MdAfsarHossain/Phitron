//CodeForces 231A
#include<stdio.h>
int main()
{
    int n, a, count=0, solved=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        count = 0;
        for(int j=1; j<=3; j++)
        {
            scanf("%d", &a);
            if(a==1)
                count++;
        }
        if(count>1)
            solved++;
    }

    printf("%d\n", solved);

    return 0;
}
