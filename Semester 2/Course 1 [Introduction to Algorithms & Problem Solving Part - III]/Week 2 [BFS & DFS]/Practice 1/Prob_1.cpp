#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];

vector<int> adj_list[N];

void BFS(int node)
{
    queue<int> q;

    cout<<node<<" ";

    visited[node] = 1;
    q.push(node);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

//        cout<<head<<" ";
        for(int adj_node : adj_list[node])
        {
            if(visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
                cout<<adj_node<<" ";
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin>>nodes>> edges;

    for(int i=0; i<edges; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    BFS(src);

    return 0;
}

/**
8 11
1 2
1 4
4 3
3 2
2 7
2 8
2 5
7 8
7 5
5 8
5 6

=> 1 2 4
**/
