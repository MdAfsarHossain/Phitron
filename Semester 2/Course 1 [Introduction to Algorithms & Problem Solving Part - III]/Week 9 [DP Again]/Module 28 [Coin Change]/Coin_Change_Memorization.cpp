// https://lightoj.com/problem/coin-change-i
/*
- state: dp(n, K) -> number of ways to make sum=K from coins 1 to n without crossing limit
- recurrance: dp(n, K) = dp(n-1, K) +
                         dp(n-1, K - coin[n]) +
                         dp(n-1, K - 2 * coin[n]) +
                         ....
                         dp(n-1, K - limit[n] * coin[n])
- base-case: dp(0, 0) = 1
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 60;
const int M = 1001;
const int MOD = 100000007;

int dp[N][M];
int coin[N], limit[N];

int fun(int n, int k)
{
    // 1. Base Case
    if(n==0)
    {
        if(k==0)
            return 1;
        return 0;
    }

    //2. If result is already calculated return it
    if(dp[n][k] != -1)
    {
        return dp[n][k];
    }

    //3. Calculate result from smaller sub-problems
    int ans = fun(n-1, k);

    for(int i=1; i<=limit[n]; i++)
    {
        if(k-i*coin[n] < 0)
        {
            break;
        }

        int ret = fun(n-1, k-i*coin[n]);
        ans = (ans+ret) % MOD;
    }

    dp[n][k] = ans;
    return ans;
}

int main()
{
    int t, tst = 0;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        for(int i=1; i<=n; i++)
            cin>>coin[i];

        for(int i=1; i<=n; i++)
            cin>>limit[i];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout<<"Case "<<++tst<<": "<<fun(n, k)<<"\n";
    }
    return 0;
}
