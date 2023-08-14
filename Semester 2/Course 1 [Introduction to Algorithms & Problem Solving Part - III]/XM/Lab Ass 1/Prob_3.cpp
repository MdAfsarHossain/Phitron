#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int> adj_list[N];

bool detect_cycle(int node)
{
    visited[node] = 1;

    for(auto adj_node: adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            bool got_cycle = detect_cycle(adj_node);
            if(got_cycle)
                return true;
        }
        else if(visited[adj_node] == 1)
        {
            return true;
        }
    }

    visited[node] = 2;
    return false;
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
    }

    bool cycle_exixts = false;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == 0)
        {
            bool got_cycle = detect_cycle(i);
            if(got_cycle)
            {
                cycle_exixts = true;
                break;
            }
        }
    }

    if(cycle_exixts)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

/**
4 4
1 3
2 1
2 4
3 4
NO


5 5
0 1
1 2
2 3
3 4
4 1
YES

5 4
0 1
1 2
2 3
3 4
NO

**/
