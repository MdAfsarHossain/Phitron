#include<stdio.h>

void sort(int n, int ara[])
{
    int i, j, temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int k;
    scanf("%d", &k);

    sort(n, ara);

    for(int i=0; i<n; i++)
    {
        printf("%d ", ara[i]);
    }


    printf("\n%dth largest element = %d\n",k, ara[n-k]);
    printf("%dth smallest element = %d\n",k, ara[k-1]);
}
