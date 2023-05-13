#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(10);

    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);

    v[1].push_back(10);

    v[2].push_back(20);
    v[2].push_back(30);

    cout<<v[0][2]<<"\n";
    cout<<v[2][0]<<"\n";
    cout<<v[2][1]<<"\n";

    cout<<"Size: \n";
    cout<<v[0].size()<<"\n";
    cout<<v[2].size()<<"\n";

    return 0;
}
