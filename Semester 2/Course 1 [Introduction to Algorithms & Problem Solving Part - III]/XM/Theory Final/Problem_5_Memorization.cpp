#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
const int MOD = 1e9 + 7;
int dp[N][N];

int solve(int x, int y, vector<string> &grid)
{
    if(x<0 || y<0 || grid[x][y] == '*')
        return 0;

    if(x==0 && y==0)
        return 1;

    if(dp[x][y] != -1)
        return dp[x][y];

    dp[x][y] = (solve(x-1, y, grid) + solve(x, y-1, grid)) % MOD;

    return dp[x][y];
}

int main()
{
    int n;
    cin>>n;

    vector<string> grid(n);
    for(int i=0; i<n; i++)
        cin>>grid[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<solve(n-1, n-1, grid)<<"\n";

    return 0;
}
