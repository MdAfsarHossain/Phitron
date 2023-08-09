/*
    MD. AFSAR HOSSAIN
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define vll vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define pi pair<ll, ll>
#define vpi vector<pair<ll, ll>>
#define fl(i, n) for (int i = 0; i < n; i++)
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define yes cout << "Yes\n";
#define no cout << "No\n";
#define minus cout << -1 << "\n";
using namespace std;

bool reachValue(ll cur, ll target_value)
{
    if (cur == target_value)
    {
        return true;
    }

    if (cur > target_value)
    {
        return false;
    }

    return reachValue(cur * 10, target_value) or reachValue(cur * 20, target_value);
}

void solve()
{
    ll n;
    cin >> n;

    if (reachValue(1, n) == true)
    {
        YES
    }
    else
    {
        NO
    }
}

int main()
{
    fast;
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}