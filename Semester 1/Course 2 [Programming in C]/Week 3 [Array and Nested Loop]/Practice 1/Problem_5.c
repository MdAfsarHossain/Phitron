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

    int target;
    scanf("%d", &target);

    int c = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ara[i]+ara[j] == target)
            {
                c = 1;
                //printf("%d + %d = %d\n",ara[i], ara[j], target);
                printf("YES");
            }
        }
    }

    if(c==0)
        printf("NO");


}
