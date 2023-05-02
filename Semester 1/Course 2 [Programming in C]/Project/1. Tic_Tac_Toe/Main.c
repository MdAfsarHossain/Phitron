#include<stdio.h>
#include<stdbool.h>

int isWin(int ara[][4], int n)
{
    for(int i=1; i<=n; i++)
    {
        if(ara[i][1]== ara[i][2] && ara[i][2]==ara[i][3] && ara[i][1] != -1)
        {
            return ara[i][1];
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(ara[1][i]==ara[2][i] && ara[2][i]==ara[3][i] && ara[1][i] !=-1)
        {
            return ara[1][i];
        }
    }

    if(ara[1][1]==ara[2][2] && ara[2][2]==ara[3][3] && ara[1][1] != -1)
    {
        return ara[1][1];
    }

    if(ara[1][3]==ara[2][2] && ara[2][2]==ara[3][1] && ara[1][3]!=-1)
    {
        return ara[1][3];
    }

    return -1;
}

void printCell(int ara[][4], int n)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            //printf("%d ", ara[i][j]);
            if(ara[i][j] == -1)
                printf(" ");
            if(ara[i][j] == 1)
                printf("X");
            if(ara[i][j] == 2)
                printf("O");
            if(j<n)
                printf("\t|\t");
        }
        printf("\n");
        if(i<n)
            printf("____________________________________");
        printf("\n\n");
    }
}

void printWin(int ara[][4], int n, int who)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(ara[i][j] == who)
            {
                if(ara[i][j] ==1)
                    printf("X");
                else
                    printf("O");
            }
            else
            {
                printf(" ");
            }
            if(j<n)
                printf("\t|\t");
        }
        printf("\n");
        if(i<n)
            printf("____________________________________");
        printf("\n\n");
    }

}

int main()
{
    int n=3;
    int ara[4][4];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            ara[i][j] = -1;
        }
    }

//    printCell(ara, n);

    bool player1 = true;
    bool player2 = false;

    while(true)
    {
        printCell(ara, n);
        if(player1)
        {
            int r, c;
Flag1:
            printf("Player 1 Turn (X), Enter Row and Column : ");
            scanf("%d %d", &r, &c);

            if(ara[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag1;
            }
            ara[r][c] = 1;

            printf("\n");
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;

Flag2:
            printf("Player 2 Turn (O), Enter Row and Column : ");
            scanf("%d %d", &r, &c);

            if(ara[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            ara[r][c] = 2;
            printf("\n");

            player1 = true;
            player2 = false;
        }

        ///Check Who Wins
        if(isWin(ara, n) == 1)
        {
            printf("Player 1 Won!\n");
            //printCell(ara, n);
            printWin(ara, n, 1);
            break;
        }
        else if(isWin(ara, n) == 2)
        {
            printf("Player 2 Won!\n");
            //printCell(ara, n);
            printWin(ara, n, 2);
            break;
        }

    }

    return 0;
}
