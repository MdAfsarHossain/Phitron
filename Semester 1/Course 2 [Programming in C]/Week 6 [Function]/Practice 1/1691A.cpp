#include<bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    ll n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ara[n+1], sum = 0, cnt=0;

        for(ll i=0; i<n; i++)
        {
            cin>>ara[i];
        }

        for(ll i=1; i<n; i++)
        {
            sum = ara[i] + ara[i-1];
            if(sum%2==1)
            {
                cnt++;
                i+=2;
            }
            sum = 0;
        }

        cout<<cnt<<endl;
        sum = 0;
        cnt = 0;
    }
}
