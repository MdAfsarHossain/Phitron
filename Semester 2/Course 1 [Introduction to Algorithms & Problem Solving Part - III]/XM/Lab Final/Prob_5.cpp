#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
bool dp[101][N+1];

int main()
{
    int n;
    cin>>n;

    vector<int> coins(n);
    for(int i=0; i<n; i++)
    {
        cin>>coins[i];
    }

    dp[0][0] = true;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=N; j++)
        {
            dp[i][j] = dp[i-1][j];
            int sum = j - coins[i-1];

            if(sum >= 0 && dp[i-1][sum])
            {
                dp[i][j] = true;
            }
        }
    }

    vector<int> v;

    for(int i=1; i<=N; i++)
    {
        if(dp[n][i])
        {
            v.push_back(i);
        }
    }

    cout<<v.size()<<"\n";
    for(int x: v)
    {
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}
