#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

vector<int> adj_list[N];
int visited[N];
int level[N];

void BFS(int node)
{
    queue<int> q;

    visited[node] = 1;
    level[node] = 0;
    q.push(node);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(auto adj_node: adj_list[head])
        {
            if(visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes = 8;
    adj_list[0] = {2, 4, 6};
    adj_list[1] = {2, 3, 4};
    adj_list[2] = {0, 1, 3};
    adj_list[3] = {1, 2, 6, 7};
    adj_list[4] = {0, 1};
    adj_list[6] = {0, 3, 7};
    adj_list[7] = {3, 6, 8};
    adj_list[8] = {7};

    int src = 3;
    BFS(src);

    for(int i=0; i<=nodes; i++)
    {
        cout<<"node "<<i<<" -> level: "<<level[i]<<"\n";
    }

    return 0;
}

/**
node 0 -> level: 2
node 1 -> level: 1
node 2 -> level: 1
node 3 -> level: 0
node 4 -> level: 2
node 5 -> level: 0
node 6 -> level: 1
node 7 -> level: 1
node 8 -> level: 2

         0   -> 0
        /|\
       1 3 4 -> 1
      / \
     2   5   -> 2
    /
   4
**/
