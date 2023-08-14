#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 7;
ll dp[N], temp[N];

ll solve(ll n)
{
    if(n==0)
        return 0;

    if(n==1)
        return dp[1];

    if(temp[n] != -1)
        return temp[n];

    ll ans = max(solve(n-1), solve(n-2) + n*dp[n]);
    temp[n] = ans;
    return ans;
}

int main()
{
    ll n, x, y = 0;
    cin>>n;

    for(ll i=0; i<N; i++)
        temp[i] = -1;

    for(ll i=0; i<n; i++)
    {
        cin>>x;
        dp[x]++;
        y = max(y, x);
    }

    cout<<solve(y)<<"\n";

    return 0;
}



/**
// Wrong ans on test case 13
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e5 + 5;
ll dp[N];

ll solve(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return dp[1];

    return max(solve(n-1), solve(n-2) + n*dp[n]);
}

int main()
{
    ll n, x, y = 0;
    cin>>n;

    for(ll i=0; i<n; i++)
    {
        cin>>x;
        dp[x]++;
        y = max(y, x);
    }

    cout<<solve(y)<<"\n";

    return 0;
}
**/

/**
9
1 2 1 3 2 2 2 2 3

10
**/

