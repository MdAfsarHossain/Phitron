#include<stdio.h>
int main()
{
    int ara[3][3];
    int sum1=0, sum2=0, sum3=0, sum4=0;
    int sum5=0, sum6=0, sum7=0, sum8=0;
    int sum9=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        sum4 += ara[i][2-i];
    }

    /*
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
    */

    //printf("\nRow Check:\n");
    //Row Check
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum1 += ara[i][j];
        }
        //printf("%d ", sum1);
        if(sum4 != sum1)
        {
            printf("NO");
            return 0;
        }
        sum1 = 0;
    }

    //Column Check
    //printf("\nColumn Check:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum2 += ara[j][i];
        }
        //printf("%d ", sum2);
        if(sum4 != sum2)
        {
            printf("NO");
            return 0;
        }
        sum2 = 0;
    }

    //Primary Diagonal
    //printf("\nPrimary Diagonal:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i == j)
                sum3 += ara[i][j];
        }
    }
    //printf("%d", sum3);

    if(sum4 != sum3)
    {
        printf("NO");
        return 0;
    }

    //Secondary Diagonal
    //printf("\nSecondary Diagonal:\n");
    /*for(int i=0; i<3; i++)
    {
        sum4 += ara[i][2-i];
    }*/

    //printf("%d ", sum4);
    printf("YES");

    //if(sum1==sum2 && )

    return 0;
}




