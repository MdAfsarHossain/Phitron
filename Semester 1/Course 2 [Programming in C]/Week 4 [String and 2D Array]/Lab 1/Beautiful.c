///CodeForces: 263A
#include<stdio.h>
int main()
{
    int input[5][5], x, y;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &input[i][j]);

            if(input[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    int row_change, col_change;

    if(x>2)
        row_change = (x-2);
    else
        row_change = (2-x);

    if(y>2)
        col_change = (y-2);
    else
        col_change = (2-y);

    printf("%d\n", row_change+col_change);

    return 0;
}
