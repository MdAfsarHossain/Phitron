#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ara1[n+1];
    int ara2[n+2];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara1[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara2[i]);
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(ara1[j]>ara1[j+1])
            {
                int temp = ara1[j];
                ara1[j] = ara1[j+1];
                ara1[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(ara2[j]<ara2[j+1])
            {
                int temp = ara2[j];
                ara2[j] = ara2[j+1];
                ara2[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", ara1[i] - ara2[i]);
    }

    return 0;
}

