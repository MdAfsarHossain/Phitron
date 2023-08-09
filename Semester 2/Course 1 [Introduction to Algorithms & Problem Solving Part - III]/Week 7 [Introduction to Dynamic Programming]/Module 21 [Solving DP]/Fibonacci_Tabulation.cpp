#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N];

/**
-fib(n) -> calculates the nth fibonacci number
-fib(n) -> fib(n-1) + fib(n-2)
-fib(1) = 1, fib(2) = 1
**/

int main()
{
    int n;
    cin>>n;

    // 1. Base Case
    dp[1] = 1;
    dp[2] = 1;

    // 2. Loop through the states
    for(int i=3; i<=n; i++)
    {
        // 2.1. And calculate the answer from smaller sub-problems
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<"\n";

    return 0;
}
/**
1 2 3 4 5 6  7  8  9
1 1 2 3 5 8 13 21 34
**/
