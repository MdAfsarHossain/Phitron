#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;

//    mp[1];
//    cout<<mp.size()<<"\n";

    mp[2] = 5;
    mp[2] = 3;
    mp[1] = 4;
    mp[6] = 7;
    mp[5] = 14;
    mp[5] = 18;
    mp[9] = 10;
    mp[4] = 84;


//    cout<<mp[2]<<"\n";

    for(auto it:mp)
    {
        cout<<"Key-> "<<it.first<<" -- ";
        cout<<"Value-> "<<it.second<<"\n";
    }
    return 0;
}
