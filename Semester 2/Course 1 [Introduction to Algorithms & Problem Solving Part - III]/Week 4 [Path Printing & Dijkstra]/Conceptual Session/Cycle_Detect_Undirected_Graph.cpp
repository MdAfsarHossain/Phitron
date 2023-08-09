#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> adj_list[N];
int visited[N];
int parent[N];

bool detect_cycle(int src)
{
    visited[src] = 1;

    for(auto adj_node: adj_list[src])
    {
        if(adj_node == parent[src])
            continue;

        if(!visited[adj_node])
        {
            parent[adj_node] = src;

            bool ok = detect_cycle(adj_node);

            if(ok)
                return true;
        }

        if(visited[adj_node] == 1)
        {
            return true;
        }
    }

    visited[src] = 2;
    return false;
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

    bool cycle = false;
    for(int i=1; i<=nodes; i++)
    {
        if(!visited[i])
        {
            bool ok = detect_cycle(i);
            if(ok)
            {
                cycle = true;
                break;
            }
        }
    }

    if(cycle)
        cout<<"Cycle\n";
    else
        cout<<"No Cycle\n";

    return 0;
}

/**
5 6
1 3
1 2
5 3
1 5
2 4
4 5
Cycle

5 4
1 2
5 3
1 5
2 4
No Cycle
**/
