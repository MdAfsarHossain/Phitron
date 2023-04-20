#include<stdio.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);

    int input[n+1][n+1];

    /***
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d %d\t", i, j);
        }
        printf("\n");
    }
    printf("\n");
    ***/

    /***
    ///Zero
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            input[i][j] = 0;
        }
    }

    ///Print
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }
    ***/

    ///Input
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);
        input[a][b] = 1;
    }


    /***
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    ***/


    printf("Total empty cells - %d\n", (n*n) - n);
    ///Final Output
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(input[i][j] != 1)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    printf("\n");

    return 0;
}
