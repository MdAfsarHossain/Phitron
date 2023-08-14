#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
const long long INF = 1e18;
vector<pair<int, int>> adj_list[N];
long long d[N];
int parent[N];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
        d[i] = INF;

    for(int i=1; i<=m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;

        adj_list[u].push_back({v, w});
    }

    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;
    int last_updated_node = -1;

    for(int i=1; i<=n; i++)
    {
        for(int node=1; node<=n; node++)
        {
            for(auto adj_node: adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;

                if(d[u] + w < d[v])
                {
                    d[v] = d[u] + w;
                    parent[v] = u;

                    if(i == n)
                    {
                        negative_cycle = true;
                        last_updated_node = v;
                    }
                }
            }
        }
    }

    if(negative_cycle)
    {
        cout<<"YES\n";

        int selected_node = last_updated_node;
        for(int i=1; i<n; i++)
        {
            selected_node = parent[selected_node];
        }

        int first_node = selected_node;

        vector<int> cycle;
        cycle.push_back(selected_node);

        while(true)
        {
            selected_node = parent[selected_node];
            cycle.push_back(selected_node);

            if(selected_node == first_node)
                break;
        }

        reverse(cycle.begin(), cycle.end());

        for(int node: cycle)
            cout<<node<<" ";
        cout<<"\n";
    }
    else
        cout<<"NO";

    return 0;
}

/**
4 5
1 2 2
2 3 2
1 4 1
3 1 -7
3 4 -2

YES
1 2 3 1
---------------
6 11
1 3 18
2 4 -5
3 5 -5
4 1 -5
5 6 -6
6 1 3
1 2 19
2 3 -5
3 4 -5
4 5 -5
5 1 -5

YES
1 2 3 4 5 1
**/
