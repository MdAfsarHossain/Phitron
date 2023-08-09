// https://cses.fi/problemset/task/1633/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;

    vector<ll> nums;
    for(int i=0; i<6; i++)
    {
        nums.push_back(pow(2, i));
    }

    for(int i=6; i<n; i++)
    {
        nums.push_back((nums[i-1] + nums[i-2] + nums[i-3] + nums[i-4] + nums[i-5] + nums[i-6])%mod);
    }

    cout<<nums[n-1]<<"\n";
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
