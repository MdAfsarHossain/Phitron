#include<bits/stdc++.h>
using namespace std;
const int N = 3003;
/*
- state: LCS(i, j) -> Length of the longest common
subsequence between strings s[0..i] and t[0...j]

- recurrance: LCS(i,j) = 1 + LCS(i - 1, j -1) if s[i] == t[j]
                         else max{ LCS(i-1,j), LCS(i, j-1) }

- base: LCS(i, 0) = 0
        LCS(0, j) = 0
*/
int dp[N][N];
int n, m;
string s, t;

int main()
{
    cin>>s>>t;

    n = s.size();
    m = t.size();

    //1. Base Case
    for(int i=0; i<=n; i++)
    {
        dp[i][0] = 0;
    }

    for(int j=0; j<=m; j++)
    {
        dp[0][j] = 0;
    }

    //2. Loop over the states
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            //2.1 Calculate answer from smaller sub-problems

            if(s[i-1] == t[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    cout<<dp[n][m]<<"\n";

    return 0;
}

/*
axyb
abyxb

=> ayb (3)


ayc
aby

=> ay (2)

*/
