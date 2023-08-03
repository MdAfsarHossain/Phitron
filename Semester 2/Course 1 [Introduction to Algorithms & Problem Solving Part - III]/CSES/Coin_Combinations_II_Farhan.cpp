// https://cses.fi/problemset/task/1636
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin>>n>>x;

    vector<ll> coins(n);
    for(int i=0; i<n; i++)
        cin>>coins[i];

    vector<ll> ans(x+1, 0);
    ans[0] = 1;

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=x; j++)
        {
            if(j-coins[i] >= 0)
            {
                ans[j] += ans[j - coins[i]];
            }
            ans[j] %= mod;
        }
    }

    cout<<ans[x]<<"\n";
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
