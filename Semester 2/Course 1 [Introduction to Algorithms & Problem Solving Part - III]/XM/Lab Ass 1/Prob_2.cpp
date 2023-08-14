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
    int nodes = 6;
    adj_list[0] = {1, 3, 4};
    adj_list[1] = {0, 2, 5};
    adj_list[2] = {1, 4};
    adj_list[3] = {0};
    adj_list[4] = {0, 2, 5};
    adj_list[5] = {1, 4};

    int src = 0;
    BFS(src);

    for(int i=0; i<nodes; i++)
    {
        cout<<"node "<<i<<" -> level: "<<level[i]<<"\n";
    }

    return 0;
}

/**
6 7
0 1
1 2
2 4
4 5
1 5
0 3
0 4

6 7
0 1
0 3
0 4
1 2
1 5
2 4
4 5


node 0 -> level: 0
node 1 -> level: 1
node 2 -> level: 2
node 3 -> level: 1
node 4 -> level: 1
node 5 -> level: 2
         0   -> 0
        /|\
       1 3 4 -> 1
      / \
     2   5   -> 2
    /
   4
**/
