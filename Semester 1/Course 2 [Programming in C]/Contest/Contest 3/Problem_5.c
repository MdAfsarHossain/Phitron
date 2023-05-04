#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int ara[6];

        for(int i=0; i<6; i++)
        {
            scanf("%d", &ara[i]);
        }

        int c= 1;
        for(int i=0; i<6; i++)
        {
            if(ara[i] != 0)
            {
                c = 0;
                break;
            }
        }

        if(c==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

