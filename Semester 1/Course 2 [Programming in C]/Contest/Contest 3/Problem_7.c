#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        long long int c;
        scanf("%d%lld", &n,&c);

        int ara[n+1];
        long long int sum = 0;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
            sum += ara[i] *2;
        }

        if(sum<=c)
            printf("Yes\n");
        else
            printf("No\n");

    }
}

