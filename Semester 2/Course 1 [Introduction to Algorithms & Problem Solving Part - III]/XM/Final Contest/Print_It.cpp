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

/*
    >
   <<<
  >>>>>
 <<<<<<<
>>>>>>>>>
 <<<<<<<
  >>>>>
   <<<
    >
*/
void solve()
{
    int n;
    cin >> n;

    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        if (i % 2 == 1)
        {
            for (int x = 1; x <= k; x++)
            {
                cout << ">";
            }
            k += 2;
        }
        else
        {
            for (int x = 1; x <= k; x++)
            {
                cout << "<";
            }
            k += 2;
        }
        cout << "\n";
    }

    k -= 4;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        if ((n - i - 1) % 2 == 0)
        {
            for (int x = 1; x <= k; x++)
            {
                cout << ">";
            }
            k -= 2;
        }
        else
        {
            for (int x = 1; x <= k; x++)
            {
                cout << "<";
            }
            k -= 2;
        }
        cout << "\n";
    }
}

int main()
{
    fast;
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}