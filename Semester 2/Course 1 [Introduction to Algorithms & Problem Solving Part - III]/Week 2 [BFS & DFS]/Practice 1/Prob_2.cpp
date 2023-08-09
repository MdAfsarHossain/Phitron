#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];

vector<int> adj_list[N];

void DFS(int node)
{
    visited[node] = 1;
    cout<<node<<" ";

    for(auto adj_node: adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            DFS(adj_node);
        }
    }
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

    int src = 4;
    DFS(src);

    return 0;
}

/**
9 8
4 3
4 9
4 1
1 2
2 7
2 5
5 8
5 6

3 9 7 8 6 5 2 1 4

4 3 9 1 2 7 5 8 6
**/
