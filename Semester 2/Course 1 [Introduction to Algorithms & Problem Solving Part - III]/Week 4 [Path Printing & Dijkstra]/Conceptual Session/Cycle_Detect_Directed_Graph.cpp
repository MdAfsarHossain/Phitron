#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> adj_list[N];
int visited[N];

bool detect_cycle(int node)
{
    visited[node] = 1;

    for(auto adj_node: adj_list[node])
    {
        if(!visited[adj_node])
        {
            bool ok = detect_cycle(adj_node);
            if(ok)
                return true;
        }
        if(visited[adj_node])
            return true;
    }

    visited[node] = 2;
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
    {
        cout<<"Cycle Exists\n";
    }
    else
    {
        cout<<"No Cycle Exists\n";
    }

    return 0;
}
