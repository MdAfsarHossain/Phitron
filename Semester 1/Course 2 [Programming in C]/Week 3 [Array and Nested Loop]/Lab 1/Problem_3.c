//CodeForces 25A
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1], evn=0, odd=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(ara[i]%2==0)
        {
            evn++;
        }
        else
        {
            odd++;
        }
    }

    int ans;

    if(evn==1)
    {
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2==0)
            {
                ans = i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(ara[i]%2==1)
            {
                ans = i+1;
                break;
            }
        }
    }

    printf("%d", ans);
}
