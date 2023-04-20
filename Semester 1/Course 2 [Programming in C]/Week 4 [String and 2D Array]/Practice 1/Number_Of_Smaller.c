/**
https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
**/
#include<stdio.h>
int main()
{
    long long int n, m;
    scanf("%lld%lld", &n, &m);

    long long int ara1[n+1], ara2[m+1];

    for(long long int i=0; i<n; i++)
    {
        scanf("%lld", &ara1[i]);
    }

    for(long long int i=0; i<m; i++)
    {
        scanf("%lld", &ara2[i]);
    }

    long long int cnt;
    for(long long int i=0; i<m; i++)
    {
        cnt = 0;
        for(long long int j=0; j<n; j++)
        {
            if(ara2[i] > ara1[j])
                cnt++;
        }
        printf("%lld ", cnt);
    }
}
