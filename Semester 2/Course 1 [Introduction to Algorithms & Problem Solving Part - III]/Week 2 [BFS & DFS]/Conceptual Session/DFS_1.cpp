#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000;
vector<int> adj_list[maxN];
bool visited[maxN];

void dfs(int node)
{
    visited[node] = true;
    cout<<node<<" ";
    for(auto child : adj_list[node])
    {
        if(!visited[child])
            dfs(child);
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

    for(int i=1; i<=nodes; i++)
    {
        cout<<i<<" -> ";
        for(auto child : adj_list[i])
            cout<<child<<" ";
        cout<<"\n";
    }

    int src = 1;
    dfs(src);

    return 0;
}
