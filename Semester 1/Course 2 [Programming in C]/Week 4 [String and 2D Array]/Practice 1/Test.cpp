#include<iostream>
using namespace std;
int main()
{
    int n, a, b;
    scanf("%d", &n);

    int ara[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d %d\t", i, j);
        }
        printf("\n");
    }
    printf("\n");

    ///Zero
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            ara[i][j] = 0;
        }
    }

    ///Print
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }

    ///Input
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d", &a, &b);
        ara[a][b] = 1;
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    ///Final Output

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(ara[i][j] != 1)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    printf("\n");


}
