#include<stdio.h>
int main()
{
    int a, b, c, d;
    int winA, winB, loseA, loseB;

    while(scanf("%d%d%d%d", &a, &b, &c, &d)==4)
    {
        //1st Group
        if(a>b)
        {
            winA = a;
            loseA = b;
        }
        else
        {
            winA = b;
            loseA = a;
        }
        //2nd Group
        if(c>d)
        {
            winB = c;
            loseB = d;
        }
        else
        {
            winB = d;
            loseB = c;
        }

        //Check Fair or not
        /**
        winA = 7
        loseA = 3
        winB = 9
        loseB = 5
        YES
        --------
        winA = 6
        loseA = 5
        winB = 3
        loseB = 2
        NO
        **/
        if(winA > loseB && winB > loseA)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
