#include<stdio.h>
int main()
{
    int tem;
    scanf("%d", &tem);

    if(tem<0)
    {
        printf("Freezing Weather.\n");
    }
    else if(tem <10)
    {
        printf("Very Cold Weather.\n");
    }
    else if(tem < 20)
    {
        printf("Cold weather.\n");
    }
    else if(tem < 30)
    {
        printf("Normal in temp.\n");
    }
    else if(tem < 40)
    {
        printf("It's Hot.\n");
    }
    else
    {
        printf("It's Very HOT.\n");
    }

    return 0;
}
