#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
const int MOD = 1e9 + 7;
int dp[N];

int main()
{
    int n;
    cin>>n;

    vector<string> grid(n);

    for(int i=0; i<n; i++)
        cin>>grid[i];

    dp[0] = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(grid[i][j] == '*')
            {
                dp[j] = 0;
                continue;
            }
            if(j > 0)
                dp[j] = (dp[j] + dp[j-1]) % MOD;
        }
    }

    cout<<dp[n-1]<<"\n";

    return 0;
}
