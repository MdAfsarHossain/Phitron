#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int k=1;
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int ara[n+1];

        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }

        int x;
        scanf("%d", &x);

        int c=0;
        for(int j=0; j<n; j++)
        {
            if(ara[j]==x)
            {
                c+=j+1;
                break;
            }
        }

        if(c==0)
        {
            printf("Case %d: Not Found\n", k);
        }
        else
        {
            printf("Case %d: %d\n", k, c);
        }
        k++;
        c=0;
    }

    return 0;
}

