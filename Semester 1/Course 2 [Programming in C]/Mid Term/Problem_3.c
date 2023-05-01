#include<stdio.h>
int main()
{
    int ara[15];

    ara[0] = 1;
    for(int i=1; i<15; i++)
    {
        ara[i] = ara[i-1] * 2;
    }

    for(int i=0; i<15; i++)
    {
        printf("%d ", ara[i]);
    }

    return 0;
}

//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384


