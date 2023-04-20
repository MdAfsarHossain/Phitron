#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d", &n, &m);

    int input[n+1][m+1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    /**
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",input[i][j]);
        }
        printf("\n");
    }
    **/

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ",input[i][j]);
        }
        printf("\n");
    }
}
