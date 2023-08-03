// https://cses.fi/problemset/task/1635/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin>>n>>x;

    vector<ll> coins(n, 0);
    for(int i=0; i<n; i++)
        cin>>coins[i];

    vector<ll> nums;
    nums.push_back(1);

    ll sum;
    for(int i=1; i<=x; i++)
    {
        sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i-coins[j] >= 0)
            {
                sum += nums[i-coins[j]];
            }
        }
        nums.push_back(sum%mod);
    }

    cout<<nums[x]<<"\n";
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
