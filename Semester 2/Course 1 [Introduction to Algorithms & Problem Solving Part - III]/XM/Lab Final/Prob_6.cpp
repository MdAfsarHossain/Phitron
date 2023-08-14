#include<bits/stdc++.h>
using namespace std;

const int N = 20009;
vector<int> adj_list[N];
int num[N];
int vamp = 0, lyk = 0;

void BFS(int src)
{
    queue<int> q;
    q.push(src);

    num[src] = 1;
    vamp++;

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int i=0; i<adj_list[head].size(); i++)
        {
            int x = adj_list[head][i];

            if(num[x] == 0)
            {
                q.push(x);

                if(num[head] == 1)
                {
                    num[x] = 2;
                    lyk++;
                }
                else
                {
                    num[x] = 1;
                    vamp++;
                }
            }
        }
    }

}

int main()
{
    int t, ans;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        for(int j=0; j<N; j++)
        {
            adj_list[j].clear();
        }

        memset(num, 0, sizeof num);

        int n;
        cin>>n;

        vamp = 0;
        lyk = 0;
        ans = 0;

        for(int j=0; j<n; j++)
        {
            int u, v;
            cin>>u>>v;

            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }

        for(int k=0; k<N; k++)
        {
            if(!adj_list[k].empty() && num[k] == 0)
            {
                vamp = 0;
                lyk = 0;

                BFS(k);

                ans += max(vamp, lyk);
            }
        }

        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
    return 0;
}
