#include<stdio.h>

int isPrime(int ara[], int n)
{
    int c = 0, ans= 0;
    int* x;

    for(int i=0; i<n; i++)
    {
        x = &ara[i];
        for(int j=2; j<=*x/2; j++)
        {
            if(*x%j==0)
            {
                c = 1;
                break;
            }
        }
        if(c==0)
        {
            ans++;
        }
        else
        {
            c = 0;
        }
    }
    return ans;
}

double average(int ara[], int n)
{
    int cnt = 0;
    double sum = 0;

    int* x;

    for(int i=0; i<n; i++)
    {
        x = &ara[i];

        if(*x%2 == 0)
        {
            sum += ara[i];
            cnt++;
        }
    }

    double result = sum / cnt;

    return result;
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

    int cnt = 0;
    cnt = isPrime(ara, n);
    double avg;
    avg = average(ara, n);

    printf("Prime numbers: %d\n", cnt);
    printf("Average of all positive integers: %.2lf", avg);

    return 0;
}

