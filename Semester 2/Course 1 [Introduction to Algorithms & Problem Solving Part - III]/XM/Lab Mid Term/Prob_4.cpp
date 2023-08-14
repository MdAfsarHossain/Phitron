#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
const long long INF = 1e18;

int visited[N], parent[N];
int nodes, edges;
long long d[N];
vector<pair<int, int>> adj_list[N];

void Dijkstra(int src)
{
    for(int i=1; i<=nodes; i++)
        d[i] = INF;

    d[src] = 0;

    priority_queue<pair<long long, int>> pq;
    pq.push({0, src});

    while(!pq.empty())
    {
        pair<long long, int> head = pq.top();
        pq.pop();

        int selected_node = head.second;

        if(visited[selected_node])
            continue;

        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node])
            {
                d[adj_node] = d[selected_node] + edge_cst;
                parent[adj_node] = selected_node;
                pq.push({-d[adj_node], adj_node});
            }

        }
    }

}

int main()
{
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 1;
    Dijkstra(src);

    if(visited[nodes] == 0)
    {
        cout<<-1<<"\n";
        return 0;
    }

    int current_node = nodes;
    vector<int> path;

    while(true)
    {
        path.push_back(current_node);
        if(current_node == src)
            break;
        current_node = parent[current_node];
    }

    reverse(path.begin(), path.end());

    for(int node: path)
    {
        cout<<node<<" ";
    }
    cout<<"\n";

    return 0;
}
/**
10 10
1 4 201
2 3 238
3 4 40
3 6 231
3 8 45
4 5 227
4 6 58
4 9 55
5 7 14
6 10 242

1 4 6 10
**/
