#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000;
vector<int> adj_list[maxN];

int main()
{
    int nodes, edges;
    cin>>nodes>> edges;

    for(int i=1; i<=edges; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for(int i=1; i<=nodes; i++)
    {
        cout<<i<<" -> ";
        for(auto child : adj_list[i])
        {
            cout<<child<<" ";
        }
        cout<<"\n";
    }

    return 0;
}

/**
10 8
1 2
1 3
2 4
3 4
3 6
4 6
6 7
6 8
Output:
1 -> 2 3
2 -> 1 4
3 -> 1 4 6
4 -> 2 3 6
5 ->
6 -> 3 4 7 8
7 -> 6
8 -> 6
9 ->
10 ->
**/
