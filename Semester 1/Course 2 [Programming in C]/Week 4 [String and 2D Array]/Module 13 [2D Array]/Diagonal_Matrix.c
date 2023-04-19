#include<stdio.h>
int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    int input[row+1][col+1];

    if(row==col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                scanf("%d", &input[i][j]);
            }
        }

        int ans = 1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(input[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }

        if(ans == 1)
        {
            printf("Diagonal Matrix.");
        }
        else
        {
            printf("Not Diagonal Matrix.");
        }
    }
    else
    {
        printf("Not Diagonal Matrix");
    }
}
