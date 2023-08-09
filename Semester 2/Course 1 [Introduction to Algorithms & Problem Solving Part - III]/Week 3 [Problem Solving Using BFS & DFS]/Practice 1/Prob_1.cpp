#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int> adj_list[N];
int nodes, edges;

void DFS(int node)
{
    visited[node] = 1;

    for(int adj_node: adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            DFS(adj_node);
        }
    }
}

int findConnected()
{
    int count = 0;

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i] == 0)
        {
            DFS(i);
            count++;
        }
    }

    return count;
}

int main()
{
    cin>>nodes>>edges;

    for(int i=1; i<=edges; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    cout<<findConnected();

    return 0;
}


/**
Sample Input:
6 5
1 2
2 3
3 1
4 5
5 6
Sample Output:
2

5 4
1 2
2 3
3 1
4 5

6 4
1 2
2 3
3 1
4 5

**/
