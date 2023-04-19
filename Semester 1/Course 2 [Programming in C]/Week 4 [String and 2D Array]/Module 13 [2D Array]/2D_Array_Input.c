#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    int input[row+1][col+1];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", input[i][j]);
        }
        printf("\n");
    }

    return 0;
}
