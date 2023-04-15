//CodeForces 158A
#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    //int target = ara[k-1];
    int nextRound = 0;
    for(int i=0; i<n; i++)
    {
        if(ara[i]>=ara[k-1] && ara[i]>0)
        {
            nextRound++;
        }
    }

    printf("%d", nextRound);
}
