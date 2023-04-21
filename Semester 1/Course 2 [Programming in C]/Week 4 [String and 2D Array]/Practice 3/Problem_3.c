#include<stdio.h>
int main()
{
    int t, n, sum = 0;;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        sum += n%10;
    }

    printf("Sum = %d", sum);
    return 0;
}
