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
        int n, m;
        cin>>n>>m;

        list<int> l;
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            int in;
            cin>>in;
            l.push_back(in);
            sum += in;
        }

        l.sort();

        for(int i=0; i<m; i++)
        {
            int in;
            cin>>in;
            sum -= l.front();
            sum += in;
            l.pop_front();
            l.push_front(in);
            l.sort();
        }

        cout<<sum<<"\n";
    }
    return 0;
}
