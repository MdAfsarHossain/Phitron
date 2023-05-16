#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll n, c;
        cin>>n>>c;
        list <int> l;
        for(ll i=1; i<=n; i++)
        {
            ll in;
            cin>>in;
            l.push_back(i + in);
        }
        l.sort();

        ll ans = 0;
        while(!l.empty() && c>=1)
        {
            if((c - l.front()) < 0)
                break;

            c -= l.front();
            l.pop_front();
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

