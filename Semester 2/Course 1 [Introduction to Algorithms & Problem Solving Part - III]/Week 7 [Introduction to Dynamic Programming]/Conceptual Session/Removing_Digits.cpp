// https://cses.fi/problemset/task/1637
#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e6 + 10;
vector<int> dp(maxN, INT_MAX);

int solve(int n)
{
    // Base Case
    if(n == 0)
        return 0;

    if(dp[n] != INT_MAX)
        return dp[n];

    vector<int> d;
    for(auto x: to_string(n))
        d.push_back(x - '0');

    for(auto val : d)
        dp[n] = min(dp[n], solve(n - val) + 1);

    return dp[n];

}

int main()
{
    int n;
    cin>>n;

    cout<<solve(n)<<"\n";

    return 0;
}
