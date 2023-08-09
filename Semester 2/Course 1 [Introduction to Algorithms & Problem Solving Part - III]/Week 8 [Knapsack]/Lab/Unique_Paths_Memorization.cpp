// problem link - https://leetcode.com/problems/unique-paths/description/

#include<bits/stdc++.h>
using namespace std;
/*
    - state: f(n, m) -> number of unique paths from (0,0) to (n,m)
    - recurrance: f(n, m) -> f(n-1, m) + f(n, m-1)
    - base case: f(0, 0) = 1
*/

const int N = 101;
int dp[N][N];

int unique_paths(int n, int m)
{
    // 1. Base Case
    if(n==0 && m==0)
    {
        return 1;
    }

    // 2. If result is already calculated return it
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    // 3. Calculate result form smaller sub-problems
    int ans = 0;
    if(n>0)
    {
        ans += unique_paths(n-1, m);
    }
    if(m>0)
    {
        ans += unique_paths(n, m-1);
    }

    dp[n][m] = ans;
    return ans;
}

int main()
{
    int ro, col;
    cin>>ro>>col;

    for(int i=0; i<ro; i++)
    {
        for(int j=0; j<col; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<unique_paths(ro-1, col-1)<<"\n";

    return 0;
}
