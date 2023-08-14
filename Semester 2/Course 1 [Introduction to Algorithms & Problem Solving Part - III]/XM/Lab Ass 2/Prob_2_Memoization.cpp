#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 1e5;
ll v[N], dp[N];

ll solve(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    ll ans = max(v[n] + solve(n-2), solve(n-1));

    dp[n] = ans;
    return ans;
}

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;

        for(int j=1; j<=n; j++)
            cin>>v[j];

        for(int j=1; j<=n; j++)
            dp[j] = -1;

        cout<<"Case "<<i<<": "<<solve(n)<<"\n";
    }
    return 0;
}

/**
Input:
2
5
1 2 3 4 5
1
10

Output:
Case 1: 9
Case 2: 10
**/

