///https://cses.fi/problemset/task/1666
#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e5;
vector<int> adj_list[maxN];
vector<bool> visited(maxN);

void DFS(int node)
{
    visited[node] = true;

    for(auto child: adj_list[node])
    {
        if(!visited[child])
            DFS(child);
    }
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=1; i<=edges; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    vector<int> ans;

    for(int i=1; i<=nodes; i++)
    {
        if(!visited[i])
        {
            ans.push_back(i);
            DFS(i);
        }
    }

    if(ans.size() <= 1)
        cout<<0<<"\n";
    else
    {
        vector<pair<int, int>> roads;

        for(int i=0; i<ans.size()-1; i++)
        {
            roads.push_back({ans[i], ans[i+1]});
        }
        cout<<roads.size()<<"\n";
        for(auto val: roads)
        {
            cout<<val.first<<" "<<val.second<<"\n";
        }
    }

    return 0;
}
