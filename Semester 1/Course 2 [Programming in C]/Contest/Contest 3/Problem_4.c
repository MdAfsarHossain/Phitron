#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int ara[n+1];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }

        int max = ara[0];

        for(int i=1; i<n; i++)
        {
            if(max<ara[i])
            {
                max = ara[i];
            }
        }

        printf("%d\n", max);
    }
}
