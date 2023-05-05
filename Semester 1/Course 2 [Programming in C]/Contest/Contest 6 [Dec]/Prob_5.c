#include<stdio.h>

int main()
{
    int n, t;
    scanf("%d", &t);

    while(t--)
    {

        scanf("%d", &n);
        int ara[n+1];

        long long int sum =0, max, min;

        for(int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }

        max = ara[0];
        min = ara[0];

        for(int i=0; i<n; i++)
        {
            if(ara[i]>max)
                max = ara[i];
        }

        for(int i=0; i<n; i++)
        {
            if(ara[i]<min)
                min = ara[i];
        }


        long long int mSum, minSum;

        mSum = max * max;
        minSum = min* min;

        printf("%lld %lld\n", mSum, minSum);
        if(mSum<minSum)
        {
        printf("%lld %lld %lld %lld\n", minSum, mSum, max*2, min*2);
        }
        else
        printf("%lld %lld %lld %lld\n", mSum, minSum, max*2, min*2);
        //printf("%d\n", max);
        //printf("%d\n", min);
        //printf("%d\n", max);
        //printf("%d\n", max);


    }
    return 0;
}

