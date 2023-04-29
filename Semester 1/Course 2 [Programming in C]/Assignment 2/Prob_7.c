#include<stdio.h>

void sort(int input[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(input[j]>input[j+1])
            {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}

int odd_median(int input[], int n)
{
    int ans;
    ans = input[((n+1)/2)-1];
    return ans;
}

float even_median(int input[], int n)
{
    int x = n/2;
    int ans;
    ans = input[x-1] + input[x];
    return (1.0*ans/2);
}

int main()
{

    int n;
    scanf("%d", &n);

    int input[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &input[i]);
    }

    sort(input, n);

    if(n%2==1)
    {
        printf("%d", odd_median(input, n));
    }
    else
    {
        printf("%.3f", even_median(input, n));
    }

    return 0;
}


//14 ans: 22
//3 13 7 5 21 23 23 40 23 14 12 56 23 29
//3 5 7 12 13 14 21 23 23 23 23 29 40 56
//15 ans: 23
//3 13 7 5 21 23 39 23 40 23 14 12 56 23 29
//3 5 7 12 13 14 21 23 23 23 23 29 39 40 56
