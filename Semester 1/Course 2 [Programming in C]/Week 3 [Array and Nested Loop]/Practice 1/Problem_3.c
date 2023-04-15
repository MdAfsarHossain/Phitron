#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int check =0;
    for(int i=0, j=1; i<n, j<=n; i++, j++)
    {
        if(ara[i] != ara[j])
        {
            check = 1;
            printf("NO");
            break;
        }
    }

    if(check==0)
        printf("YES");
}
