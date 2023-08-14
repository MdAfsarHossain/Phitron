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

void solve()
{
    ll l, r;
    cin >> r >> l;

    ll sum = 0;

    if (l > r)
    {
        sum = ((l * 1.0 - r * 1.0 + 1) / 2) * (l + r);
    }
    else if (r > l)
    {
        sum = ((r * 1.0 - l * 1.0 + 1) / 2) * (l + r);
    }
    else
    {
        sum = r;
    }

    cout << sum << "\n";
}

void solve1()
{

    int L, R;
    cin >> L >> R;

    ll sum;

    if (L < R)
    {
        sum = (static_cast<ll>(R - L + 1) * (L + R)) / 2;
    }
    else
    {
        sum = (static_cast<ll>(L - R + 1) * (L + R)) / 2;
    }

    cout << sum << endl;
}

int main()
{
    fast;
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solve1();
    }
    return 0;
}