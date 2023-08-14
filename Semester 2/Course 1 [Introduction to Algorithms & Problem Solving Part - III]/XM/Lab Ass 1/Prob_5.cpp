#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];
vector<int> adj_list[N];

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

    int countConnected = 0;

    for(int i=0; i<nodes; i++)
    {
        if(visited[i] == 0)
        {
            DFS(i);
            countConnected++;
        }
    }

    cout<<countConnected<<"\n";

    return 0;
}


/**


5 3
0 1
1 2
2 0
3

Sample Input:
6 5
1 2
2 3
3 1
4 5
5 6
Sample Output:
2
**/
