#include<bits/stdc++.h>
using namespace std;

const int N = 101;
const int M = 2;
int dp[N][M];

int solve(vector<int> &nums, int x, int y)
{
    if(x >= nums.size() || (x==nums.size()-1 && y))
        return 0;

    if(dp[x][y] != -1)
        return dp[x][y];

    int ans1 = 0;
    int ans2 = 0;

    if(x==0)
    {
        ans1 = solve(nums, x+2, 1) + nums[x];
    }
    else
    {
        ans1 = solve(nums, x+2, y) + nums[x];
    }

    ans2 = solve(nums, x+1, y);

    int ans;
    ans  = max(ans1, ans2);

    dp[x][y] = ans;
    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 2};
  
    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<=M; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<solve(nums, 0, 0)<<"\n";

    return 0;
}
