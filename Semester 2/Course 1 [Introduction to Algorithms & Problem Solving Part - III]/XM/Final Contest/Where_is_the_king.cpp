/*
    MD. AFSAR HOSSAIN
*/

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

ll sum, n;

int isFound(vector<ll> &v)
{
    ll lSum = 0;

    for (ll i = 0; i < n; i++)
    {
        sum -= v[i];

        if (sum == lSum)
        {
            return i;
        }

        lSum += v[i];
    }

    return -1;
}

void solve()
{
    cin >> n;

    sum = 0;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    cout << isFound(v) << "\n";
}

int main()
{
    fast;
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}