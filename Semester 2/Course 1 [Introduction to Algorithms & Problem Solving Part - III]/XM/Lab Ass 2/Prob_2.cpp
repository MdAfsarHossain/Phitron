#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;

        if(n==0)
        {
            cout<<"Case "<<i<<": 0"<<"\n";
            continue;
        }

        vector<ll> v(n);
        vector<ll> dp(n);

        for(int i=0; i<n; i++)
            cin>>v[i];

        dp[0] = v[0];
        dp[1] = max(dp[0], v[1]);

        for(int j=2; j<n; j++)
        {
            dp[j] = max(dp[j-1], dp[j-2] + v[j]);
        }

        cout<<"Case "<<i<<": "<<dp[n-1]<<"\n";
    }
    return 0;
}
