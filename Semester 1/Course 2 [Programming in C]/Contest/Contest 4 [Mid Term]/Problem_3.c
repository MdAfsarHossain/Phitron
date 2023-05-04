#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int ara[n+2][m+2];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(ara[i][j] != i && ara[i][j] == j)
            {
                ara[i][j] += 1;
                continue;
            }
            if(ara[i][j] == i && ara[i][j] != j)
            {
                ara[i][j] += 2;
                continue;
            }
            if(ara[i][j] == i && ara[i][j] == j)
            {
                ara[i][j] += 3;
                continue;
            }
        }
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }


    return 0;
}
