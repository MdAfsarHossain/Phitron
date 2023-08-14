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

const int N = 1005;
const int M = 1e5 + 5;
ll dp[N][M];
int a[N], w[N];

ll knapsack(int n, int k)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n][k] != -1)
    {
        return dp[n][k];
    }

    if (k < w[n])
    {
        ll ans = knapsack(n - 1, k);
        dp[n][k] = ans;
        return ans;
    }

    ll ans1 = a[n] + knapsack(n - 1, k - w[n]);
    ll ans2 = knapsack(n - 1, k);
    ll ans = max(ans1, ans2);

    dp[n][k] = ans;
    return ans;
}

ll max_possible_sum(vector<int> &wt, vector<int> &val, int size, int weight)
{ // Base Case
    if (size == 0 or weight == 0)
    {
        return 0;
    }

    // Implement choice diagram
    if (wt[size - 1] <= weight)
    {
        return max(val[size - 1] + max_possible_sum(wt, val, size - 1, weight - wt[size - 1]), max_possible_sum(wt, val, size - 1, weight));
    }
    else
    {
        return max_possible_sum(wt, val, size - 1, weight);
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> val(n);
    vector<int> wt(n);

    for (int i = 1; i <= n; i++)
    {
        cin >> val[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> wt[i];
    }

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= k; j++)
    //     {
    //         dp[i][j] = -1;
    //     }
    // }

    // cout << knapsack(n, k) << "\n";
    cout << max_possible_sum(wt, val, n, k);
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