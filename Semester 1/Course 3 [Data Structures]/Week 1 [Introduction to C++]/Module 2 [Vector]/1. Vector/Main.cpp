#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
//    cin>>n;

    n = 5;
    vector<int> ara;
//    ara.resize(n);

    for(int i=0; i<=n; i++)
    {
        ara.push_back(i+1);
    }

    ara.insert(ara.begin()+3, 10);

//    ara.erase(ara.begin()+2); /// 2 + 1
//    ara.pop_back();
    sort(ara.begin(), ara.end());
    for(int i=0; i<ara.size(); i++)
    {
        cout<<ara[i]<< " ";
    }
    int x = ara.size();
    cout<<"\n"<<x<<"\n";

    return 0;
}
