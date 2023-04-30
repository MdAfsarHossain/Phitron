#include<stdio.h>

int solve(int n)
{
    int sum = 0;

    int j=1, flag = 1;
    for(int i=1; i<=n; i++)
    {
        if(flag < 4)
        {
            sum += i;
            flag++;
        }
        else if(flag > 3)
        {
            sum -= i;

            if(flag < 6)
            {
                flag++;
            }
            else
            {
                flag = 1;
            }
        }
    }

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int result = solve(n);

    printf("%d", result);

    return 0;
}

