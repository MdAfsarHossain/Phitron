#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    if(t<=100000 && t>=1)
    {
        while(t--)
        {
            scanf("%d",&n);
            if(n<=10000 && n>=1)
            {
                int x,y,a[1000];

                for(int i=0; i<n; i++)
                {
                    scanf("%d",&a[i]);

                }
                x=a[0];
                for(int k=0; k<n; k++)
                {

                    if(a[k]>x)
                    {
                        x=a[k];
                    }
                }
                y=a[0];
                for(int j=0; j<n; j++)
                {
                    if(a[j]<a[0])
                    {
                        y=a[j];
                    }
                }

                long long int maxp=x*x;
                long long int minp=y*y;
                long long int maxs=x+x;
                long long int mins=y+y;
                printf("%lld %lld %lld %lld\n",minp,maxp,maxs,mins);
            }
        }
    }

}
