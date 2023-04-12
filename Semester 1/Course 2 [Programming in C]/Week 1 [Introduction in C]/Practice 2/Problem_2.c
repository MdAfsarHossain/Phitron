#include<stdio.h>
int main()
{
    int a, b, c;

    while(scanf("%d%d%d", &a, &b, &c)==3)
    {
        ///1st Part
        /*
        if(a>b && a>c)
        {
            printf("A is bigger.\n");
        }
        else if(b>a && b>c)
        {
            printf("B is bigger.\n");
        }
        else if(c>a && c>b)
        {
            printf("C is bigger.\n");
        }
        else
        {
            printf("They are equal.\n");
        }
        */
        ///2nd Part
        ///Bonus Part

        //Check a is bigger or not
        if(a>=b && a>=c)
        {
            if(a==b && b==c)
            {
                printf("They are equal.\n");
            }
            else if(a==b)
            {
                printf("A and B both are bigger.\n");
            }
            else if(a==c)
            {
                printf("A and C both are bigger.\n");
            }
            else
            {
                printf("A is bigger.\n");
            }
        }

        //Check b is bigger or not
        else if(b>=a && b>=c)
        {
            if(b==a && b==c)
            {
                printf("They are equal.\n");
            }
            else if(b==a)
            {
                printf("A and B both are bigger.\n");
            }
            else if(b==c)
            {
                printf("B and C both are bigger.\n");
            }
            else
            {
                printf("B is bigger.\n");
            }
        }

        //Check c is bigger or not
        else if(c>=a && c>=b)
        {
            if(c==a && c==b)
            {
                printf("They are equal.\n");
            }
            else if(c==a)
            {
                printf("A and C both are bigger.\n");
            }
            else if(c==b)
            {
                printf("B and C both are bigger.\n");
            }
            else
            {
                printf("C is bigger.\n");
            }
        }
    }

    return 0;
}
