#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, int> cnt;
        for(int i=1; i<=n; i++)
        {
            int in;
            cin>>in;
            cnt[in]++;
        }

        for(pair<int, int> p : cnt)
        {
            cout<<p.first<<" "<<p.second<<"\n";
        }

        cout<<"Priority Queue:\n";
        priority_queue<int> pq;
        for(pair<int, int> p : cnt)
            pq.push(p.second);

        while(!pq.empty())
        {
            cout<<pq.top()<<"\n";
            pq.pop();
        }
    }
    return 0;
}
