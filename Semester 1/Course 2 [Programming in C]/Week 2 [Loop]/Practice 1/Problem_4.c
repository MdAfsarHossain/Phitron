#include<stdio.h>
int main()
{
    int n, m, x;

    while(scanf("%d%d", &n, &m)==2)
    {
        int i=1;
        while(1)
        {
            x = i * m;
            if(x<=n)
            {
                printf("%d ", x);
            }
            else
            {
                break;
            }
            i++;
        }

        printf("\n");
    }

    return 0;
}
