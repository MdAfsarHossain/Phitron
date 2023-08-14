#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N];

int tribonacci(int n)
{
    if(n<=2)
        if(n==0)
            return 0;
        else
            return 1;

    if(dp[n] != -1)
        return dp[n];

    int ans = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);

    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        dp[i] = -1;

    cout<<tribonacci(n)<<"\n";

    return 0;
}

/**
0 1 2 3 4 5  6
0 1 1 2 4 7 13

25
1389537
**/

