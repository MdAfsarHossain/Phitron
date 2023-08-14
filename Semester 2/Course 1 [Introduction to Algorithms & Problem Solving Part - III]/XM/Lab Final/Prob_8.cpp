#include <bits/stdc++.h>
using namespace std;
const int N = 3003;
#define ll long long

ll dp[N][N];
ll n, m;
string s, t;

ll LCS(ll i, ll j)
{
    if(i == 0 || j == 0)
    {
        return 0;
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if(s[i-1]==t[j-1])
    {
        dp[i][j] = 1 + LCS(i-1, j-1);
    }
    else
    {
        dp[i][j] = max(LCS(i-1, j), LCS(i, j-1));
    }

    return dp[i][j];
}

int main()
{
    cin>>s>>t;

    n = s.size();
    m = t.size();

    for(ll i=0; i<=n; i++)
    {
        for(ll j=0; j<=m; j++)
        {
            dp[i][j] = -1;
        }
    }

//    cout<<LCS(0, 0)<<"\n";
    ll res = LCS(n, m);

    string ans;
    ll x = n;
    ll y = m;
    while(x && y)
    {
        if(s[x-1] == t[y-1])
        {
            ans += s[x-1];
            x--;
            y--;
        }
        else if(dp[x][y-1] >= dp[x-1][y])
        {
            y--;
        }
        else
        {
            x--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout<<ans<<"\n";

    return 0;
}
