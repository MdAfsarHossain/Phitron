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
        map<int, int> cnt;
        for(int i=0; i<n; i++)
        {
            int in;
            cin>>in;
            cnt[in]++;
        }

        priority_queue<int> pq;
        for(pair<int, int> p : cnt)
        {
            pq.push(p.second);
        }

        int prev, next, ans=0;
        while(pq.size() >= 2)
        {
            prev = pq.top();
            pq.pop();
            next = pq.top();
            pq.pop();
            prev--, next--;
            if(prev != 0)
                pq.push(prev);
            if(next != 0)
                pq.push(next);
        }

        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout<<ans<<"\n";
    }

    return 0;
}
