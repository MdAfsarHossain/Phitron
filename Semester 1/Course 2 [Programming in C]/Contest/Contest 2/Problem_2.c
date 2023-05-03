#include<stdio.h>
#define ll long long int
int main()
{
    int n, k, r;
    scanf("%d%d", &n, &k);

    int ara[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(ara[i]<k)
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}

