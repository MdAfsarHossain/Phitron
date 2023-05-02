#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a=0, b=1, x;

    if(n==1)
        printf("%d", a);
    else if(n==2)
        printf("%d, %d", a, b);
    else if(n>2)
    {
        printf("%d, %d", a, b);

        for(int i=1; i<=(n-2); i++)
        {
            x = a + b;
            printf(", %d", x);
            a = b;
            b = x;
        }
    }

    return 0;
}
