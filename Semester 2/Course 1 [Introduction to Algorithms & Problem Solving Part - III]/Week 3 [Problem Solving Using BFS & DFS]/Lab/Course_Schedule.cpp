///https://cses.fi/problemset/task/1679

#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

vector<int> adj_list[N];
int visited[N];

stack<int> node_stack;

bool detect_cycle(int node)
{
    visited[node] = 1;

    for(auto adj_node: adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            bool ok = detect_cycle(adj_node);
            if(ok)
                return true;
        }
        if(visited[adj_node] == 1)
            return true;
    }

    node_stack.push(node);
    visited[node] = 2;
    return false;
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
    }

    bool cycle = false;
    for(int i=1; i<=n; i++)
    {
        if(visited[i] == 0)
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
        cout<<"IMPOSSIBLE\n";
    else
    {
        while(!node_stack.empty())
        {
            cout<<node_stack.top()<<" ";
            node_stack.pop();
        }
        cout<<"\n";
    }

    return 0;
}

/**
5 3
1 2
3 1
4 5

1 -> 2
3 -> 1
4 -> 5

3 1 2
**/
