#include<bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
vector<int> parent;
vector<bool> visited;

vector<int> find_path(int d)
{
    vector<int> path;
    int x = d;

    while(x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }

    reverse(path.begin(), path.end());
    return path;
}

vector<int> bfs(int src, int dest)
{
    queue<int> q;
    q.push(src);

    visited[src] = true;
    vector<int> path = {-1};

    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        if(p == dest)
        {
            path = find_path(dest);
            return path;
        }

        for(int i=0; i<(int)adj_list[p].size(); i++)
        {
            int child = adj_list[p][i];
            if(visited[child] == false)
            {
                visited[child] = true;
                q.push(child);
                parent[child] = p;
            }
        }
    }

    return path;
}

int main()
{
    int n, e;
    cin>>n>>e;

    visited.resize(n, false);
    parent.resize(n, -1);

    while(e--)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src, dest;
    cin>>src>>dest;

    vector<int> path = bfs(src, dest);

    for(int x: path)
        cout<<x<<" ";
    cout<<"\n";

    return 0;
}

/**
7 8
1 0
1 2
0 2
2 3
3 4
0 5
5 6
6 4
1 3
=> 1 2 3

7 8
1 0
1 2
0 2
2 3
3 4
0 5
5 6
6 4
1 5
=> 1 0 5
**/
