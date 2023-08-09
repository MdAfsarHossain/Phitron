// https://cses.fi/problemset/task/1633/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
const int mod = 1e9 + 7;

int dp[N];

int solve(int n)
{
    if(dp[n] != 0)
        return dp[n];

    for(int i=1; i<=6; i++)
    {
        if(n-i >= 0)
        {
            dp[n] += solve(n-i);
            dp[n] %= mod;
        }
    }

    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=6; i++)
    {
        dp[i] = pow(2, i-1);
    }

    cout<<solve(n)<<"\n";

    return 0;
}
