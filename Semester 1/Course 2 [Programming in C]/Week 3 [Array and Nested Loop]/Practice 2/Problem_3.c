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

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(input[i]%2==1)
        {
            sum += input[i];
        }
    }

    if(sum%2==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
