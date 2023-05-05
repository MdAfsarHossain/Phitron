#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);

        int temp;
        while(n<=m)
        {
            temp=0;
            for(int i=2; i<=(n/2); i++)
            {
                if(n%i==0)
                {
                    temp=1;
                    break;
                }
            }
            if(temp==0)
                printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}

