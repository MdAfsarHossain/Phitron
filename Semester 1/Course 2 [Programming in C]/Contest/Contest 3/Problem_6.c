#include<stdio.h>
#include<math.h>
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

        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            int x = ara[i];
            int y = sqrt(x);
            int z = y * y;

            if(x == z)
                cnt++;
        }

        if(cnt>0)
            printf("%d\n",cnt);
        else
            printf("-1\n");
    }
}

