#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 5;
ll dp[N];
ll dp2[N];

int main()
{
    ll n, x;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        dp[x]++;
    }

    dp2[0] = 0;
    dp2[1] = dp[1];

    for(int i=2; i<=N; i++)
    {
        dp2[i] = max(dp2[i-1], dp2[i-2] + i*dp[i]);
    }

    cout<<dp2[N]<<"\n";

    return 0;
}

/**
9
1 2 1 3 2 2 2 2 3

10
**/
