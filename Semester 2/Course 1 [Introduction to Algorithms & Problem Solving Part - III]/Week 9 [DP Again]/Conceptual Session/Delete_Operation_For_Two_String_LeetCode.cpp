// https://leetcode.com/problems/delete-operation-for-two-strings/
class Solution {
public:
    int minDistance(string word1, string word2) {
        const int N = 500 + 5;
        int dp[N][N];

        string s = word1;
        string t = word2;

        int n = s.size();
        int m = t.size();

        //1. Base Case
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 0;
        }

        for(int i=0; i<=m; i++)
        {
            dp[0][i] = 0;
        }

        //2. Loop over the states
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
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

        int LCS = dp[n][m];
        int ans = (n+m) - (LCS*2);

        return ans;
    }
};
