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
        int x = input[0][0];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    if(input[i][j] != x)
                    {
                        ans = 0;
                    }
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
            printf("Scalar Matrix.");
        }
        else
        {
            printf("Not Scalar Matrix.");
        }
    }
    else
    {
        printf("Not Scalar Matrix");
    }
}
