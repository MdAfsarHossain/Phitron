#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 2e9;
int dp[N];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        dp[i] = -1;

    dp[1] = 0;

    int a, b, c;
    for(int i=2; i<=n; i++)
    {
        a = dp[i-1];
        b = INF;
        c = INF;

        if(i%2==0)
            b = dp[i/2];
        if(i%3==0)
            c = dp[i/3];

        dp[i] = 1 + min(a, min(b,c));
    }

    cout<<dp[n]<<"\n";

    return 0;
}

/**
1 -> 11 - 1 = 10
2 -> 10 - 1 =  9
3 -> 9  / 3 =  3
4 -> 3  / 3 =  1
**/


