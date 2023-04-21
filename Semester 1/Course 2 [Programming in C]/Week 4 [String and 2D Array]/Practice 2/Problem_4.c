#include<stdio.h>
int main()
{
    int n, m, i, j, k;
    scanf("%d%d", &n, &m);

    int ara1[n+1][m+1];
    int ara2[n+1][m+1];
    int ara3[n+1][m+1];

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &ara1[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d", &ara2[i][j]);
        }
    }

    int sum = 0;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            for(k=0; k<n; k++)
            {
                sum += ara1[i][k] * ara2[k][j];
            }
            ara3[i][j] = sum;
            sum = 0;
        }

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", ara3[i][j]);
        }
        printf("\n");
    }
}
