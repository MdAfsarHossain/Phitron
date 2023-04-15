#include<stdio.h>
int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m)==2)
    {
        while(n!=m)
        {
            if(n==24)
            {
                n = n - 24;
                printf("%d ", n);
                n++;
            }
            else
            {
                printf("%d ", n);
                n++;
            }
        }
        printf("%d", m);
        printf("\n");
    }

    return 0;
}
