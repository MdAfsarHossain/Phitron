#include<stdio.h>

int main()
{

    long long int n, t;
    scanf("%lld", &t);

    while(t--)
    {

        scanf("%lld", &n);
        long long int ara[n+1];

        long long int max, min;

        max = -1000;
        min = 1000;
        int x;
        /*
        for(long long int i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }

        max = ara[0];
        min = ara[0];

        for(long long int i=0; i<n; i++)
        {
            if(ara[i]>max)
                max = ara[i];

            if(ara[i]<min)
                min = ara[i];
        }
*/
        //printf("%d\n", min);

        for(int i=0; i<n; i++)
        {
            scanf("%d", &x);

            if(x>max)
                max = x;

            if(x<min)
                min = x;
        }
        long long int maxSum, minSum, maxPro, minPro;

        maxPro = max * max;
        minPro = min * min;

        maxSum = max*2;
        minSum = min*2;
        //printf("%d ", max);
        //printf("%d\n", min);
        if(maxPro > minPro)
        {

            printf("%lld %lld ", maxPro, minPro);
            printf("%lld %lld\n", maxSum, minSum);
        }
        else
        {

            printf("%lld %lld ", minPro, maxPro);
            printf("%lld %lld\n", maxSum, minSum);
        }


        /*
        if((maxPro > minPro) && (maxSum > minSum))
        {

            printf("%lld %lld ", maxPro, minPro);
            printf("%lld %lld\n", maxSum, minSum);
        }
        else if((maxPro > minPro) && (maxSum < minSum))
        {

            printf("%lld %lld ", maxPro, minPro);
            printf("%lld %lld\n", minSum, minSum);
        }
        else if((maxPro < minPro) && (maxSum > minSum))
        {
            printf("%lld %lld ", minPro, maxPro);
            printf("%lld %lld\n", maxSum, minSum);
        }
        else if((maxPro < minPro) && (maxSum < minSum))
        {
            printf("%lld %lld ", minPro, maxPro);
            printf("%lld %lld\n", minSum, maxSum);
        }

        */
    }

    return 0;
}
