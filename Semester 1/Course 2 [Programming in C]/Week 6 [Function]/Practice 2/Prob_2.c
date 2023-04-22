#include<stdio.h>

int is_prime(int x)
{
    if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    int k=2;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(k<9)
            {
                if(k==2)
                {
                    printf("%d ", k);
                    k++;
                }
                else if(k!=2 && k%2!=0)
                {
                    printf("%d ", k);
                    k+=2;
                }
                else
                {
                    k++;
                }
            }
            else
            {
                while(is_prime(k) != 1)
                {
                    k++;
                }
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }
}
