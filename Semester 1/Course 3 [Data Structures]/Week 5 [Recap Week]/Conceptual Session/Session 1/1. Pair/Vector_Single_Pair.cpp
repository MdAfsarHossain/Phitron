#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector< pair<string, int> > v;

    for(int i=0; i<n; i++)
    {
        string fullName;
        int age;
        cin>>fullName>>age;

        v.push_back({fullName, age});
    }

    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }

    return 0;
}
