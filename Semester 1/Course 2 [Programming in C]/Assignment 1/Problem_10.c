#include<stdio.h>
int main()
{
    int n, c=0;

    scanf("%d", &n);

    for(int i=2; i<=n/2; i++)
    {
        if(n%i ==0)
        {
            c = 1;
            break;
        }
    }

    if(c==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

    return 0;
}
