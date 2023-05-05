#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        if(n<10)
        {
            char ch = n + 64;
            printf("%c", ch);
        }
        else
        {
            int res = 0, d = 0;
            while(n!=0)
            {
                char ch = n%10 + 64;
                printf("%c", ch);
                n/=10;
            }
        }
        printf("\n");

    }

    return 0;
}

