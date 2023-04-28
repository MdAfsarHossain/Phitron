#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    printf("The factors of %d are: 1", n);

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            printf(", %d", i);
        }
    }

    printf(", %d.", n);

    return 0;
}

