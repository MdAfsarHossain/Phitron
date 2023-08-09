#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list;
vector<int> parent;

int find_parent(int x)
{
    if(parent[x] == -1)
    {
        return x;
    }

    return find_parent(parent[x]);
}

void union_operation(int a, int b)
{
    int parentA = find_parent(a);
    int parentB = find_parent(b);

    parent[parentA] = parentB;
}

int main()
{
    int n, e;
    cin>>n>>e;

    parent.resize(n, -1);

    while(e--)
    {
        int u, v;
        cin>>u>>v;

        adj_list.push_back({u, v});
    }

    bool cycle = false;

    for(int i=0; i<(int)adj_list.size(); i++)
    {
        pair<int, int> pr = adj_list[i];

        int a = pr.first;
        int b = pr.second;

        int parentA = find_parent(a);
        int parentB = find_parent(b);

        if(parentA == parentB)
        {
            cycle = true;
            break;
        }
        else
        {
            union_operation(a, b);
        }
    }

    if(cycle == true)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}

/**
4 4
2 3
0 1
0 2
1 2
YES

4 3
2 3
0 1
0 2
NO
**/
