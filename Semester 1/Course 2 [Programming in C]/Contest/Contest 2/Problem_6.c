#include<stdio.h>
#define ll long long int
int main()
{
    ll t, n;
    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        if(n==1)
        {
            printf("No\n");
        }
        else
        {
            int c = 0;
            for(int i=2; i<=n/2; i++)
            {
                if(n%i == 0)
                {
                    c = 1;
                    break;
                }
            }

            if(c==0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}

