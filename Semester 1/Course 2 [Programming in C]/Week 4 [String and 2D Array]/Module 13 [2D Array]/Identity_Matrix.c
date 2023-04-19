#include<stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);

    int input[r+1][c+1];
    if(r==c)
    {

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                scanf("%d", &input[i][j]);
            }
        }

        int ans = 1;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i==j)
                {
                    if(input[i][j] != 1)
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
            printf("Identity Matrix.");
        }
        else
        {
            printf("Not Identity Matrix.");
        }
    }
    else
    {
        printf("Not Identity Matrix.");
    }

    return 0;
}
