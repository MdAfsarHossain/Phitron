#include<stdio.h>
int main()
{
    int n, m, ans;

    while(scanf("%d%d", &n, &m)==2)
    {
        if(n==1 && m==1)
            ans = m - n;
        else if(n==1 && m>1)
            ans = m - n;
        else if(m==1 && n>1)
            ans = n - m;
        else
            ans = n*m - n;
        printf("%d\n", ans);
    }

    return 0;
}
