#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    vector<ll> v(n+1);
    for(ll i=1; i<=n; i++)
        cin>>v[i];

    ll q;
    cin>>q;
    while(q--)
    {
        ll r, l;
        cin>>l>>r;
        ll sum = 1;
        for(ll i=l; i<=r; i++)
            sum *= v[i];
        cout<<sum<<"\n";
    }

//    cout<<"\n";

    return 0;
}


