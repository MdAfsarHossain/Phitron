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

    int prime = 0, cnt = 0;
    int primeArray[n+1];
    for(int i=0; i<n; i++)
    {
        cnt = 0;
        for(int j=2; j<=input[i]/2; j++)
        {
            if(input[i]%j == 0)
            {
                cnt = 1;
                break;
            }
        }
        if(cnt==0)
        {
            primeArray[prime] = input[i];
            prime++;
        }
    }

    printf("%d\n", prime);
    for(int i=0; i<prime; i++)
    {
        printf("%d ", primeArray[i]);
    }
}
