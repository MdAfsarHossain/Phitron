#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
const int INF = 2e9;
int dp[N];

int solve(int n, int *dp)
{
    if(n<=1)
        return 0;

    if(dp[n] != -1)
        return dp[n];

    int a = solve(n-1, dp);
    int b = INF;
    int c = INF;

    if(n%2==0)
        b = solve(n/2, dp);
    if(n%3==0)
        c = solve(n/3, dp);

    int ans = 1 + min(a, min(b,c));

    dp[n] = ans;
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        dp[i] = -1;

    cout<<solve(n, dp)<<"\n";

    return 0;
}

/**
1 -> 11 - 1 = 10
2 -> 10 - 1 =  9
3 -> 9  / 3 =  3
4 -> 3  / 3 =  1
**/
