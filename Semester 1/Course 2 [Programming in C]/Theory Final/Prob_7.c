#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int ara1[n+1][m+1];
    int ara2[n+1][m+1];
    int ara3[n+1][m+1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ara3[i][j] = ara1[i][j] + ara2[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", ara3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

