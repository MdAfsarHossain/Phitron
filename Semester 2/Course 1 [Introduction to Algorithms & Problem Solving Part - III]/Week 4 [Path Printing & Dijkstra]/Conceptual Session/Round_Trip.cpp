///https://cses.fi/problemset/task/1669

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> adj_list[N];
int visited[N];
int parent[N];
int st, ed;

bool detect_cycle(int src)
{
    visited[src] = 1;

    for(auto adj_node: adj_list[src])
    {
        if(adj_node == parent[src])
        {
            continue;
        }

        if(visited[adj_node] == 0)
        {
            parent[adj_node] = src;

            bool ok = detect_cycle(adj_node);

            if(ok)
                return true;
        }

        if(visited[adj_node] == 1)
        {
            st = src;
            ed = adj_node;
            return true;
        }
    }

    visited[src] = 2;
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
        adj_list[v].push_back(u);
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
        vector<int> cities;
        int temp = st;

        cities.push_back(st);

        while(temp!=ed)
        {
            cities.push_back(parent[temp]);
            temp = parent[temp];
        }

        cities.push_back(st);

        cout<<cities.size()<<"\n";

        for(auto city: cities)
            cout<<city<<" ";
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
    }

    return 0;
}


/**
Input:
5 6
1 3
1 2
5 3
1 5
2 4
4 5

Output:
4
5 3 1 5
**/
