#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter Row number: ");
    scanf("%d", &row);
    printf("Enter Column number: ");
    scanf("%d", &col);

    int input[row+1][col+1];

    if(row==col)
    {
        printf("Enter %d number: \n", col*row);
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                scanf("%d", &input[i][j]);
            }
        }

        printf("Square Matrix are:\n");
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                printf("%d ", input[i][j]);
            }
            printf("\n");
        }

        int sum = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    sum += input[i][j];
                }
            }
        }

        int y = 0;
        for(int i=0; i<row; i++)
        {
            y+=input[i][row-1-i];
        }

        printf("\nMatrix Diagonal are: %d\n", sum);
        printf("\nMatrix Diagonal are: %d\n", y);

    }
    else
    {
        printf("This matrix is not Square Matrix!");
    }
}

