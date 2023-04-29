#include<stdio.h>

void matrix_input(int ara[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &ara[i][j]);
        }
    }
}

void create_transpose(int trans[3][3], int ara[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            trans[j][i] = ara[i][j];
        }
    }
}

void print_transpose(int trans[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int ara[3][3];

    matrix_input(ara);

    int trans[3][3];

    create_transpose(trans, ara);

    print_transpose(trans);

    return 0;
}
