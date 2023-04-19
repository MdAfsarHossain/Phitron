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

    for(int i=0; i<n; i++)
    {
        printf("%d ", input[i]);
    }

    return 0;
}
