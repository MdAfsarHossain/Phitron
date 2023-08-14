#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e9;
map<ll, ll> mp;

ll solve(ll n, ll x)
{
    string a = to_string(x);
    if(a.size() == n)
    {
        return 0;
    }

    if(mp.count(x)>0)
    {
        return mp[x];
    }

    mp[x] = N;
    ll p = x;
    while(p>0)
    {
        if(p%10 > 1)
        {
            mp[x] = min(mp[x], solve(n, x*(p%10))+1);
        }
        p /= 10;
    }

    return mp[x];
}

int main()
{
    ll n, x;
    cin>>n>>x;

    ll ans = solve(n, x);

    if(ans == N)
        cout<<-1<<"\n";
    else
        cout<<ans<<"\n";

    return 0;
}
