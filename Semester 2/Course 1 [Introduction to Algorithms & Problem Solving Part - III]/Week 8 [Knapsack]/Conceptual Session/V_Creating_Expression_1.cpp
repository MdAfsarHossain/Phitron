/*
    MD. AFSAR HOSSAIN
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V

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

bool targetSum(vector<int> &v, int size, int generate_sum, int target_sum)
{
    // Base Case
    if (size == 0)
    {
        if (generate_sum == target_sum)
        {
            return true;
        }
        return false;
    }

    return targetSum(v, size - 1, generate_sum + v[size - 1], target_sum) or targetSum(v, size - 1, generate_sum - v[size - 1], target_sum);
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (targetSum(v, n, 0, x) == true)
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
    solve();
    return 0;
}