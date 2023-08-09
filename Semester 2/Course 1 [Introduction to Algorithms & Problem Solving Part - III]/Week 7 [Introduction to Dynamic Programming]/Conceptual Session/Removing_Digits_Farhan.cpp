// https://cses.fi/problemset/task/1637
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n, num;
    cin>>n;

    vector<ll> dp(n+11, INT_MAX);
    dp[0] = 0;

    for(int i=1; i<10; i++)
    {
        dp[i] = 1;
    }

    for(int i=10; i<=n; i++)
    {
        num = i;
        while(num > 0)
        {
            if(num % 10 != 0)
                dp[i] = min(dp[i], dp[i-num%10]+1);
            num /= 10;
        }
    }

    cout<<dp[n]<<"\n";
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
