#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        list<int> l;
        vector<int> v(n);

        for(int i=0; i<n; i++)
            cin>>v[i];

        int i = 0;
        while(i < n)
        {
            if(i == 0)
            {
                l.push_back(v[i]);
                i++;
            }
            else
            {
                if(v[i] < l.front())
                    l.push_front(v[i]);
                else
                    l.push_back(v[i]);
                i++;
            }
        }

        while(!l.empty())
        {
            cout<<l.front()<<" ";
            l.pop_front();
        }
        cout<<"\n";
    }

    return 0;
}
