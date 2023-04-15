#include<stdio.h>
int main()
{
    int n, i, choc, pack;
    scanf("%d",&choc);

    pack = choc;

    while(pack>=4)
    {
        /*
        if(pack%4==0)
        {
            choc += pack/4;
            pack = pack/4;
        }
        else
        {
            choc += pack/4;
            pack = (pack/4) + (pack%4);
        }
        */
        choc += pack/4;
        pack = (pack/4) + (pack%4);
    }

    printf("Total Chocolate: %d\n", choc);

    return 0;
}

