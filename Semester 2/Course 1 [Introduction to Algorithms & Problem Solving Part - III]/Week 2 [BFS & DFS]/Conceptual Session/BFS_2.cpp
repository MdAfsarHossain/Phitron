#include<bits/stdc++.h>
using namespace std;

const int maxN = 1000;
vector<int> adj_list[maxN];
bool visited[maxN];

void bfs(int s)
{
    queue<int> q;
    cout<<s<<" ";
    visited[s] = true;
    q.push(s);

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(auto child: adj_list[node])
        {
            if(!visited[child])
            {
                visited[child] = true;
                q.push(child);
                cout<<child<<" ";
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;

    for(int i=1; i<=e; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    bfs(1);

//    for(int i=1; i<=n; i++)
//    {
//        cout<<i<<" -> ";
//        for(auto child: adj_list[i])
//        {
//            cout<<child<<" ";
//        }
//        cout<<"\n";
//    }

    return 0;
}
