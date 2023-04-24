#include<stdio.h>

int power(int j)
{
    int sum = 1;
    for(int i=1; i<=j; i++)
    {
        sum *= 2;
    }
    return sum;
}
int main()
{
    char s[100];
    gets(s);

    int i = 0, sum = 0;
    while(s[i] != '\0')
    {
        sum += s[i] - 96;
        i++;
    }

    int flag = 0, ans = 0;

    int j = 1;
    while(sum >= ans)
    {
        ans = power(j);
        if(ans==sum)
        {
            flag = 1;
            printf("YES\n");
            printf("cost = 2^%d\n", j);
        }
        j++;
    }

    if(flag == 0)
        printf("NO");

    return 0;
}
