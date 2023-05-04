#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n+1];

    int x;
    int even[n+1], odd[n+1];
    int j=0, k=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            even[j] = x;
            j++;
        }
        else
        {
            odd[k] = x;
            k++;
        }
    }

    //printf("%d %d\n", j, k);

    for(int i=0; i<j; i++)
    {
        for(int l=0; l<j-1; l++)
        {
            if(even[l]<even[l+1])
            {
                int temp = even[l];
                even[l] = even[l+1];
                even[l+1] = temp;
            }
        }
    }


    for(int i=0; i<k; i++)
    {
        for(int l=0; l<k-1; l++)
        {
            if(odd[l]<odd[l+1])
            {
                int temp = odd[l];
                odd[l] = odd[l+1];
                odd[l+1] = temp;
            }
        }
    }

    /*
    for(int i=0; i<j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    for(int i=0; i<k; i++)
    {
        printf("%d ", odd[i]);
    }
    */

    //printf("%d", even[1]);

    int sumE = even[0] + even[1];
    int sumO = odd[0] + odd[1];

    if(sumE > sumO)
    {
        if(sumE%2==0)
        {
            printf("%d", sumE);
        }
        else
            printf("%d", sumO);
    }
    else
    {
        if(sumO%2 == 0)
            printf("%d", sumO);
        else
            printf("%d", sumE);
    }
    return 0;
}

