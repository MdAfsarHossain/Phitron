#include<stdio.h>

int main()
{
    int n;
    char ch;
    scanf("%d %c", &n, &ch);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=n; k++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}

