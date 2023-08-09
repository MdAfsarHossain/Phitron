/// https://atcoder.jp/contests/dp/tasks/dp_b
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 2e9;

int h[N], dp[N];
int n, k;

/**
- state: stone(n) -> cost of reaching n-th stone from 1st stone
- recurrance: stone(n) = for i = 1 to  k:
                            min(
                                stone(n-i) + abs( h[n] - h[n-i])
                            )
- base case: stone(1) = 0
**/

int stone_2(int n)
{
    // 1. Base Case
    if(n==1)
        return 0;

    // 2. If answer is already calculated return it
    if(dp[n] != -1)
        return dp[n];

    // 3. Calculate answer from smaller sub-problems
    int ans = INF;
    for(int i=1; i<=k; i++)
    {
        int from_stone = n - i;
        //Handle Corner Case
        if(from_stone<=0)
            break;

        int candidate_ans = stone_2(n-i) + abs(h[n] - h[n-i]);
        ans = min(ans, candidate_ans);
    }

    dp[n] = ans;
    return ans;
}

int main()
{
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }

    for(int i=1; i<=n; i++)
        dp[i] = -1;

    cout<<stone_2(n)<<"\n";

    return 0;
}
