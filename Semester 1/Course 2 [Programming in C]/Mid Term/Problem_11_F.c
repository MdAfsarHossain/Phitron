#include<stdio.h>
int main()
{
    int ara[3][3];
    int sum1=0, sum2=0, sum3=0, sum4=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    //Secondary Diagonal
    for(int i=0; i<3; i++)
    {
        sum4 += ara[i][2-i];
    }

    //Row Check
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum1 += ara[i][j];
        }

        if(sum4 != sum1)
        {
            printf("NO");
            return 0;
        }
        sum1 = 0;
    }

    //Column Check
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum2 += ara[j][i];
        }
        if(sum4 != sum2)
        {
            printf("NO");
            return 0;
        }
        sum2 = 0;
    }

    //Primary Diagonal
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i == j)
                sum3 += ara[i][j];
        }
    }

    if(sum4 != sum3)
    {
        printf("NO");
        return 0;
    }

    printf("YES");

    return 0;
}




