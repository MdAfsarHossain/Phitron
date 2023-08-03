/// https://cses.fi/problemset/task/1671/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 1e5 + 5;
const ll INF = 9e18;
ll dist[maxN];
vector<pair<int, int>> adj_list[maxN];
vector<bool> visited(maxN);

void Dijkstra(int src, int n)
{
    for(int i=1; i<=n; i++)
        dist[i] = INF;
    dist[src] = 0;

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});

    while(!pq.empty())
    {
        int u = pq.top().second;
        ll cost = pq.top().first;
        pq.pop();

        if(visited[u])
            continue;
        visited[u] = true;

        for(auto child: adj_list[u])
        {
            int v = child.first;
            ll c = child.second;

            if((cost+c) < dist[v])
            {
                dist[v] = (cost + c);
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;

        adj_list[u].push_back({v, w});
    }

    int src = 1;
    Dijkstra(src, n);

    for(int i=1; i<=n; i++)
        cout<<dist[i]<<" ";
    cout<<"\n";

    return 0;
}
