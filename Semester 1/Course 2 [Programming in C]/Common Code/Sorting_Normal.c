#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int input[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }

    int max = input[0];

    for(int i=1; i<n; i++)
    {
        if(input[i]>max)
        {
            max = input[i];
        }
    }

    int ara[max+1];

    for(int i=0; i<=max; i++)
    {
        ara[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
        ara[input[i]] += 1;
    }

    for(int i=0; i<=max; i++)
    {
        if(ara[i] == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

