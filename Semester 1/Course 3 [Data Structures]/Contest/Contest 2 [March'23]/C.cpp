#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin>>q;

    vector<int> vc(q);
    while(q--)
    {
        int op, v;
        cin>>op;

        if(op==1)
        {
            cin>>v;
            vc.push_back(v);
        }
        else if(op==2)
        {
            sort(vc.begin(), vc.end());
            cout<<vc.back()<<"\n";
            vc.pop_back();
        }
    }

    return 0;
}


