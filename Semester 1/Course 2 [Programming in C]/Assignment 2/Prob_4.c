#include<stdio.h>

int even(int ara[], int n, int j)
{
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            ara[j] = i;
            j++;
        }
    }

    return j;
}

void odd(int ara[], int n, int j)
{
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            ara[j] = i;
            j++;
        }
    }
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int ara[n+1];

    int j = 0;
    j = even(ara, n, j);
    odd(ara, n, j);

    for(int i=0; i<n; i++)
    {
        printf("%d ", ara[i]);
    }

    printf("\nThe %dth element in this sequence is %d.\n", k, ara[k-1]);

    return 0;
}
