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

    //printf("%d\n", max);
    int ara2[max+1];
    for(int i=0; i<=max; i++)
    {
        ara2[i] = 0;
    }

    for(int i=0; i<n; i++)
    {
        ara2[input[i]] += 1;
    }

    int cnt = 0;

    int k;
    scanf("%d", &k);

    for(int i=max; i>=1; i--)
    {
        if(ara2[i] == 1)
        {
            cnt++;
        }
        if(cnt==k)
        {
            printf("\n%d Largest element is: %d\n", k, i);
            break;
        }
    }
}
