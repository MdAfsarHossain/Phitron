/*
    MD. AFSAR HOSSAIN
*/
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

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

const int N = 25;
const int W = 105;

int dp[N][W];

int max_possible_sum(vector<int> &wt, vector<int> &val, int size, int weight)
{
    // Base Case
    if (size == 0 or weight == 0)
    {
        return 0;
    }

    // Implement Choice diagram
    if (dp[size][weight] != -1)
    {
        return dp[size][weight];
    }

    if (wt[size - 1] <= weight)
    {
        return dp[size][weight] = max(val[size - 1] + max_possible_sum(wt, val, size - 1, weight - wt[size - 1]), max_possible_sum(wt, val, size - 1, weight));
    }
    else
    {
        return dp[size][weight] = max_possible_sum(wt, val, size - 1, weight);
    }
}

void solve()
{
    int n, w;
    cin >> n >> w;

    vector<int> wt, val;
    for (int i = 1; i <= n; i++)
    {
        int weight, value;
        cin >> weight >> value;

        wt.push_back(weight);
        val.push_back(value);
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout << max_possible_sum(wt, val, n, w);
}

int main()
{
    fast;
    solve();
    return 0;
}