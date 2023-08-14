#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
int color[N];

vector<int> adj_list[N];

bool DFS(int node)
{
    visited[node] = 1;

    for(auto adj_node: adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            if(color[node] == 1)
                color[adj_node] = 2;
            else
                color[adj_node] = 1;

            bool is_bipartite = DFS(adj_node);
            if(!is_bipartite)
                return false;
        }
        else
        {
            if(color[node] == color[adj_node])
                return false;
        }
    }
    return true;
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bool is_bipartite = true;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == 0)
        {
            color[i] = 1;
            bool ok = DFS(i);
            if(!ok)
            {
                is_bipartite = false;
                break;
            }
        }
    }

    if(is_bipartite)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

/**
3 2
0 1
1 2
YES

3 3
0 1
1 2
2 0
NO
**/
