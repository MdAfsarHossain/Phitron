#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N];

int main()
{
    int n;
    cin>>n;

    dp[1] = 1;
    dp[2] = 1;

    for(int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<"\n";

    return 0;
}

/**
1 2 3 4 5 6  7  8  9
1 1 2 3 5 8 13 21 34
**/

