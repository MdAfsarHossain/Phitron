#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD = 1e9 + 7;

int main()
{
    int n, x;
    cin>>n>>x;

    vector<ll> coins(n, 0);

    for(int i=0; i<n; i++)
        cin>>coins[i];

    vector<ll> nums(x+1, 0);
    nums[0] = 1;

    ll sum;

    for(int i=1; i<=x; i++)
    {
        sum = 0;
        for(int j=0; j<n; j++)
        {
            if(i-coins[j] >= 0)
            {
                sum += nums[i-coins[j]];
            }
        }
        nums[i] = sum % MOD;
    }

    cout<<nums[x]<<"\n";

    return 0;
}
