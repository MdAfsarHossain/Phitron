#include<stdio.h>
int main()
{
    int input[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(input[j]>input[j+1])
            {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }

    for(int i=0; i<11; i++)
    {
        printf("%d ", input[i]);
    }

    return 0;
}

