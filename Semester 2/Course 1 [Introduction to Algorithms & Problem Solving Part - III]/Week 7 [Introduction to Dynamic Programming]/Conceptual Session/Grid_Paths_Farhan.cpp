// https://cses.fi/problemset/task/1638
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;

    ll dp[1005][1005];

    string s;
    cin>>s;
    if(s[0] == '*')
    {
        cout<<"0\n";
        return ;
    }
    else
        dp[0][0] = 1;

    for(int i=1; i<n; i++)
    {
        if(s[i] == '*')
            dp[0][i] = 0;
        else
            dp[0][i] = dp[0][i-1];
    }

    for(int i=1; i<n; i++)
    {
        cin>>s;
        if(s[0] == '*')
            dp[i][0] = 0;
        else
            dp[i][0] = dp[i-1][0];

        for(int j=1; j<n; j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
            if(s[j] == '*')
                dp[i][j] = 0;
        }
    }

    cout<<dp[n-1][n-1]<<"\n";
}

int main()
{
    int t;
    t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
