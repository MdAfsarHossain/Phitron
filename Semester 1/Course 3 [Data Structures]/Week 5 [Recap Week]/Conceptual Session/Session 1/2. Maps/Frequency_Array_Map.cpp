#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    map<int, int> mp;

    for(int i=1; i<=n; i++)
    {
        int in;
        cin>>in;
        mp[in]++;
    }

    for(pair<int, int> p : mp)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }

    return 0;
}
