#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N];

/**
-fib(n) -> calculates the nth fibonacci number
-fib(n) -> fib(n-1) + fib(n-2)
-fib(1) = 1, fib(2) = 1
**/

int fib(int n)
{
    // 1. Base Case
    if(n <= 2)
        return 1;

    // 2. Check if current state is already solved
    if(dp[n] != -1)
        return dp[n];

    // 3. Calculate from smaller sub-problems
    int ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        dp[i] = -1;  // Mark all states as unvisited

    cout<<fib(n)<<"\n";

    return 0;
}
/**
1 2 3 4 5 6  7  8  9
1 1 2 3 5 8 13 21 34
**/
